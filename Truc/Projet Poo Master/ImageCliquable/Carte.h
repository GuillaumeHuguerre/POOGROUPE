#pragma once

#include <QtWidgets/QWidget>
#include "ui_Carte.h"


class Carte : public QWidget
{
	Q_OBJECT

public:
	Carte(QWidget *parent = Q_NULLPTR);

private:
	Ui::CarteClass ui;

public slots :
	
	void CloseMap();
};
