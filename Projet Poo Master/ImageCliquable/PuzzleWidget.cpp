#include "puzzlewidget.h"
#include "pieceslist.h"

#include <QDrag>
#include <QDragEnterEvent>
#include <QMimeData>
#include <QPainter>

PuzzleWidget::PuzzleWidget(int imageSize, QWidget *parent)
	: QWidget(parent), m_ImageSize(imageSize)
{
	setAcceptDrops(true);
	setMinimumSize(m_ImageSize, m_ImageSize*4/3);
	setMaximumSize(m_ImageSize, m_ImageSize*4/3);
}

void PuzzleWidget::clear()
{
	pieceLocations.clear();
	piecePixmaps.clear();
	pieceRects.clear();
	inPlace = 0;
	update();
}

void PuzzleWidget::dragEnterEvent(QDragEnterEvent *event)
{
	if (event->mimeData()->hasFormat(PiecesList::puzzleMimeType()))
		event->accept();
	else
		event->ignore();
}

void PuzzleWidget::dragLeaveEvent(QDragLeaveEvent *event)
{
	event->accept();
}

void PuzzleWidget::dragMoveEvent(QDragMoveEvent *event)
{

	if (event->mimeData()->hasFormat(PiecesList::puzzleMimeType()))
	{
		event->setDropAction(Qt::MoveAction);
		event->accept();
	}


}

void PuzzleWidget::dropEvent(QDropEvent *event)
{
	if (pieceRects.indexOf(targetSquare(event->pos())) == -1) {

		QByteArray pieceData = event->mimeData()->data(PiecesList::puzzleMimeType()); // On récupère l'emplacement de l'image de l'image
		QDataStream dataStream(&pieceData, QIODevice::ReadOnly);  // On sérialise la donnée de l'image pour lire l'image depuis son emplacement et non la modifier.
		QRect square = targetSquare(event->pos()); // on récupère la position de la case cible 
		QPixmap pixmap;
		QPoint location;
		dataStream >> pixmap >> location; // on stocke l'image et sa localisation dans des objets temporaires. 

		pieceLocations.append(location);
		piecePixmaps.append(pixmap);
		pieceRects.append(square);

		update(square);

		event->setDropAction(Qt::MoveAction);
		event->accept();

		if (location == QPoint(square.x() / pieceSizeW(), square.y() / pieceSizeH())) 
		{
			inPlace++;
			if (inPlace == 12)
				emit puzzleCompleted();
		}
	}
	else {
		event->ignore();
	}
}

void PuzzleWidget::mousePressEvent(QMouseEvent *event)
{
	QRect square = targetSquare(event->pos());	//récupération des données du carré cible
	int found = pieceRects.indexOf(square);	// on récupére lordre dans lequel son déplacer les images dans le fond

	if (found == -1)	return;

	QPoint location = pieceLocations[found];	// on récupère l'emplacement de la pièce
	QPixmap pixmap = piecePixmaps[found];		// on récupère l'image de la pièce
	pieceLocations.removeAt(found);			// on supprime l'emplacement de la pièce
	piecePixmaps.removeAt(found);		// on supprime l'image de la pièce
	pieceRects.removeAt(found);		// on supprime le rectangle cible de la pièce

	if (location == QPoint(square.x() / pieceSizeW(), square.y() / pieceSizeW()))
		inPlace--;

	update(square);

	QByteArray itemData;
	QDataStream dataStream(&itemData, QIODevice::WriteOnly);

	dataStream << pixmap << location;

	QMimeData *mimeData = new QMimeData;
	mimeData->setData(PiecesList::puzzleMimeType(), itemData);

	QDrag *drag = new QDrag(this);
	drag->setMimeData(mimeData);
	drag->setHotSpot(event->pos() - square.topLeft());
	drag->setPixmap(pixmap);

	if (!(drag->exec(Qt::MoveAction) == Qt::MoveAction)) {
		pieceLocations.insert(found, location);
		piecePixmaps.insert(found, pixmap);
		pieceRects.insert(found, square);
		update(targetSquare(event->pos()));

		if (location == QPoint(square.x() / pieceSizeW(), square.y() / pieceSizeH()))
			inPlace++;
	}
}

void PuzzleWidget::paintEvent(QPaintEvent *event)
{
	QPainter painter;
	painter.begin(this);
	painter.fillRect(event->rect(), Qt::white);

	for (int i = 0; i < pieceRects.size(); ++i)
		painter.drawPixmap(pieceRects[i], piecePixmaps[i]);
	painter.end();
}

const QRect PuzzleWidget::targetSquare(const QPoint &position) const
{
	return QRect(position.x() / pieceSizeW() * pieceSizeH(), position.y() / pieceSizeH() * pieceSizeW(), pieceSizeW(), pieceSizeH());
}

int PuzzleWidget::pieceSizeW() const
{
	return m_ImageSize / 3;
}

int PuzzleWidget::pieceSizeH() const
{
	return m_ImageSize / 3;
}


int PuzzleWidget::imageSize() const
{
	return m_ImageSize;
}