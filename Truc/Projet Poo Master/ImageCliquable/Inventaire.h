#pragma once
#include <QtWidgets/QWidget>
#include "ui_Inventaire.h"


class QListWidgetItem;

class Inventaire : public QWidget
{
	Q_OBJECT

public:

	Inventaire(QWidget *parent = Q_NULLPTR);
	void setClee();
	void setLiberte();
	void setAventure();
	void setSolidarite();

private:
	Ui::InventaireClass ui;
	int nbfrag = 0;

public slots : 

	void FermeInventaire();
	void onPuzzle();
	
};
