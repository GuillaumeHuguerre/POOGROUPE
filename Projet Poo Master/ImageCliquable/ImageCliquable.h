#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMessageBox>
#include <vector>
#include "ui_ImageCliquable.h"
#include "Tableau.h"
#include <string>

class ImageCliquable : public QMainWindow
{
	Q_OBJECT

public:
	ImageCliquable(QWidget *parent = Q_NULLPTR);

	//Getter
	std::vector<Tableau*>& GetVector() { return m_vTableau; }
	std::vector<Tableau*>& GetHistorique() { return m_vHistorique; }

	void setImage(std::string);
	void pickupSymbol();
	void showInventaire();
	void OpenMap();
	void HideMap();
	void OpenDialogue();
	
public slots: 
	void switchImage();
	void switchImage2();
	void switchImage3();
	void previousImage();
	void pickupKey();
	void setupPuzzle();
	void showPuzzle();
	
	

private:
	int m_nElementsHistorique = 0;
	int symbols = 0;
	bool m_bSLiberte = false;
	bool m_bSAventure = false;
	bool m_bSSolidarite = false;
	bool key = false;
	int m_nIdImg = 0;
	Ui::ImageCliquableClass ui;
	std::vector<Tableau*> m_vTableau;
	std::vector<Tableau*> m_vHistorique;
};
