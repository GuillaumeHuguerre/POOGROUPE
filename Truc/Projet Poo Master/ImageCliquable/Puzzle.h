#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QPixmap>
#include <QMainWindow>

class PiecesList;
class PuzzleWidget;
class QListWidgetItem;

class Puzzle : public QWidget
{
	Q_OBJECT

public:
	Puzzle(QWidget *parent = 0);

	public slots:
	void setupPuzzle(); // Mise en place du puzzle Lafayette 

	private slots:
	void setCompleted();

private:
	void setupWidgets();

	QPixmap puzzleImage;
	PiecesList *piecesList;
	PuzzleWidget *puzzleWidget;
};

#endif // MAINWINDOW_H