#include "Puzzle.h"
#include "pieceslist.h"
#include "puzzlewidget.h"


#include <QtWidgets>
#include <stdlib.h>

Puzzle::Puzzle(QWidget *parent)
	: QWidget(parent)
{
	setupWidgets();
	setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
	setWindowTitle(tr("Puzzle de Lafayette"));
}




void Puzzle::setCompleted()
{
	QMessageBox::information(this, tr("Puzzle Completed"), tr("Bravo ! Vous avez reconstituer le portrait de Lafayette!\n Cliquer sur OK pour revenir au jeu."),
		QMessageBox::Ok);
	puzzleWidget->clear();
	hide();
	
}

void Puzzle::setupPuzzle() // Mise en Place du Puzzle
{
	piecesList->clear();

	int u = 1;
	for (int y = 4; y > 0; --y) // Stockage des Pieces du Puzzle
	{	
		for (int x = 0; x < 3; ++x) {
			QPixmap pieceImage;
			QString path(QLatin1String(":/images/Resources/"));
			if (u < 10) path.append(QLatin1String("0"));
			path.append(QString("%1").arg(u));
			path.append(QLatin1String(".png"));
			pieceImage.load(path);
			pieceImage = pieceImage.scaled(100, 100, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
			piecesList->addPiece(pieceImage, QPoint(x, y-1));
			u++;
		}
	}




	qsrand(QCursor::pos().x() ^ QCursor::pos().y());

	for (int i = 0; i < piecesList->count(); ++i) {
		if (int(2.0*qrand() / (RAND_MAX + 1.0)) == 1) {
			QListWidgetItem *item = piecesList->takeItem(i);
			piecesList->insertItem(1, item);
		}
	}

	puzzleWidget->clear();
}


void Puzzle::setupWidgets()  // Mise en place des widget contenant la liste d'élément et du puzzle de la fenêtre
{
	QFrame *frame = new QFrame(this);
	QVBoxLayout *frameLayout = new QVBoxLayout(frame);
	puzzleWidget = new PuzzleWidget(200);	// Définit la taille de la fenêtre du puzzle et définit m_ImageSize

	piecesList = new PiecesList(puzzleWidget->pieceSizeW(), puzzleWidget->pieceSizeH(), this);

	connect(puzzleWidget, &PuzzleWidget::puzzleCompleted,this, &Puzzle::setCompleted, Qt::QueuedConnection);

	frameLayout->addWidget(puzzleWidget);
	frameLayout->addWidget(piecesList);
	
}