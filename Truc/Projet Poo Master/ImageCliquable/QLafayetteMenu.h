#pragma once

#include <QWidget>
#include "ui_QLafayetteMenu.h"

class QLafayetteMenu : public QWidget
{
	Q_OBJECT

public:
	QLafayetteMenu(QWidget *parent = Q_NULLPTR);
	~QLafayetteMenu();

private:
	Ui::QLafayetteMenu ui;
public:
	
public slots:
	void onCarte();
	void onInventaire();

};
