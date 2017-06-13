#include "ImageCliquable.h"
#include "Zone.h"
#include <QtWidgets/QPushButton>
ImageCliquable::ImageCliquable(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.widget_3->hide();

}

void ImageCliquable::switchImage()
{
	std::vector<CZone> zone = m_vTableau[m_nIdImg]->GetVectorOfZone();
	int IdImg = zone[0].GetNextImg();
	if (((IdImg == 660) || (IdImg == 661)) || (IdImg == 50))
	{
		pickupSymbol();
	}
	else
	{
		std::vector<CZone> vZone = m_vTableau[m_nIdImg]->GetVectorOfZone();
		m_nIdImg = vZone[0].GetNextImg();
		vZone = m_vTableau[m_nIdImg]->GetVectorOfZone();
		ui.Image->setPixmap(QPixmap(QString::fromStdString(m_vTableau[m_nIdImg]->GetAdresse())));
		ui.Zone1->setGeometry(QRect(vZone[0].GetPosX(), vZone[0].GetPosY(), vZone[0].GetHeight(), vZone[0].GetWidth()));
		if (vZone.size() >= 2)
		{
			ui.Zone2->setGeometry(QRect(vZone[1].GetPosX(), vZone[1].GetPosY(), vZone[1].GetHeight(), vZone[1].GetWidth()));
		}
		else ui.Zone2->setGeometry(QRect(0, 0, 0, 0));
		if (vZone.size() >= 3)
		{
			ui.Zone3->setGeometry(QRect(vZone[2].GetPosX(), vZone[2].GetPosY(), vZone[2].GetHeight(), vZone[2].GetWidth()));
		}
		else ui.Zone3->setGeometry(QRect(0, 0, 0, 0));

		if (vZone.size() >= 4)
		{
			ui.Zone4->setGeometry(QRect(vZone[3].GetPosX(), vZone[3].GetPosY(), vZone[3].GetHeight(), vZone[3].GetWidth()));
		}
		else ui.Zone4->setGeometry(QRect(0, 0, 0, 0));

		if (vZone.size() >= 5)
		{
			ui.Zone5->setGeometry(QRect(vZone[4].GetPosX(), vZone[4].GetPosY(), vZone[4].GetHeight(), vZone[4].GetWidth()));
		}
		else ui.Zone5->setGeometry(QRect(0, 0, 0, 0));

		//Ajout de l'image dans l 'historique
		++m_nElementsHistorique;
		m_vHistorique.resize(m_nElementsHistorique + 1);
		m_vHistorique[m_nElementsHistorique] = m_vTableau[m_nIdImg];
	}
}



void ImageCliquable::switchImage2()
{
	std::vector<CZone> zone = m_vTableau[m_nIdImg]->GetVectorOfZone();
	int IdImg = zone[1].GetNextImg();
	if (((IdImg == 660) || (IdImg == 661)) || (IdImg == 50))
	{
		pickupSymbol();
	}
	else
	{
		std::vector<CZone> vZone = m_vTableau[m_nIdImg]->GetVectorOfZone();
		m_nIdImg = vZone[1].GetNextImg();
		vZone = m_vTableau[m_nIdImg]->GetVectorOfZone();
		ui.Image->setPixmap(QPixmap(QString::fromStdString(m_vTableau[m_nIdImg]->GetAdresse())));
		ui.Zone1->setGeometry(QRect(vZone[0].GetPosX(), vZone[0].GetPosY(), vZone[0].GetHeight(), vZone[0].GetWidth()));
		if (vZone.size() >= 2)
		{
			ui.Zone2->setGeometry(QRect(vZone[1].GetPosX(), vZone[1].GetPosY(), vZone[1].GetHeight(), vZone[1].GetWidth()));
		}
		else ui.Zone2->setGeometry(QRect(0, 0, 0, 0));
		if (vZone.size() >= 3)
		{
			ui.Zone2->setGeometry(QRect(vZone[1].GetPosX(), vZone[1].GetPosY(), vZone[1].GetHeight(), vZone[1].GetWidth()));

		}
		else ui.Zone3->setGeometry(QRect(0, 0, 0, 0));

		if (vZone.size() >= 4)
		{
			ui.Zone4->setGeometry(QRect(vZone[3].GetPosX(), vZone[3].GetPosY(), vZone[3].GetHeight(), vZone[3].GetWidth()));
		}
		else ui.Zone4->setGeometry(QRect(0, 0, 0, 0));

		if (vZone.size() >= 5)
		{
			ui.Zone5->setGeometry(QRect(vZone[4].GetPosX(), vZone[4].GetPosY(), vZone[4].GetHeight(), vZone[4].GetWidth()));
		}
		else ui.Zone5->setGeometry(QRect(0, 0, 0, 0));

		//Ajout de l'image dans l 'historique
		++m_nElementsHistorique;
		m_vHistorique.resize(m_nElementsHistorique + 1);
		m_vHistorique[m_nElementsHistorique] = m_vTableau[m_nIdImg];
	}
}

void ImageCliquable::switchImage3()
{
	std::vector<CZone> zone = m_vTableau[m_nIdImg]->GetVectorOfZone();
	int IdImg = zone[2].GetNextImg();
	if (((IdImg == 660)||(IdImg == 661))|| (IdImg == 50))
	{
		pickupSymbol();
	}
	else if (((IdImg == 38)&&key)||(IdImg!=38))
	{
		std::vector<CZone> vZone = m_vTableau[m_nIdImg]->GetVectorOfZone();
		m_nIdImg = vZone[2].GetNextImg();
		vZone = m_vTableau[m_nIdImg]->GetVectorOfZone();
		ui.Image->setPixmap(QPixmap(QString::fromStdString(m_vTableau[m_nIdImg]->GetAdresse())));
		ui.Zone1->setGeometry(QRect(vZone[0].GetPosX(), vZone[0].GetPosY(), vZone[0].GetHeight(), vZone[0].GetWidth()));
		if (vZone.size() == 2)
		{
			ui.Zone2->setGeometry(QRect(vZone[1].GetPosX(), vZone[1].GetPosY(), vZone[1].GetHeight(), vZone[1].GetWidth()));
		}
		else ui.Zone2->setGeometry(QRect(0, 0, 0, 0));
		if (vZone.size() >= 3)
		{

			ui.Zone3->setGeometry(QRect(vZone[2].GetPosX(), vZone[2].GetPosY(), vZone[2].GetHeight(), vZone[2].GetWidth()));
		}
		else ui.Zone3->setGeometry(QRect(0, 0, 0, 0));

		if (vZone.size() >= 4)
		{

			ui.Zone4->setGeometry(QRect(vZone[3].GetPosX(), vZone[3].GetPosY(), vZone[3].GetHeight(), vZone[3].GetWidth()));
		}
		else ui.Zone4->setGeometry(QRect(0, 0, 0, 0));

		if (vZone.size() >= 5)
		{

			ui.Zone5->setGeometry(QRect(vZone[4].GetPosX(), vZone[4].GetPosY(), vZone[4].GetHeight(), vZone[4].GetWidth()));
		}
		else ui.Zone5->setGeometry(QRect(0, 0, 0, 0));

		//Ajout de l'image dans l 'historique
		++m_nElementsHistorique;
		m_vHistorique.resize(m_nElementsHistorique + 1);
		m_vHistorique[m_nElementsHistorique] = m_vTableau[m_nIdImg];
	}
	else
	{
		ui.Image->setPixmap(QPixmap("interieur/nope.png"));
		ui.Zone1->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone2->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone3->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone4->setGeometry(QRect(0, 0, 0, 0));
	}
}
void ImageCliquable::previousImage()
{
	if (m_nIdImg != 0)
	{
		std::vector<CZone> vZone = m_vHistorique[m_nElementsHistorique - 1]->GetVectorOfZone();
		m_nIdImg = m_vHistorique[m_nElementsHistorique - 1]->GetIdImg();
		ui.Image->setPixmap(QPixmap(QString::fromStdString(m_vHistorique[m_nElementsHistorique - 1]->GetAdresse())));
		ui.Zone1->setGeometry(QRect(vZone[0].GetPosX(), vZone[0].GetPosY(), vZone[0].GetHeight(), vZone[0].GetWidth()));
		if (vZone.size() >= 2)
		{
			ui.Zone2->setGeometry(QRect(vZone[1].GetPosX(), vZone[1].GetPosY(), vZone[1].GetHeight(), vZone[1].GetWidth()));
		}
		else ui.Zone2->setGeometry(QRect(0, 0, 0, 0));
		if (vZone.size() >= 3)
		{
			ui.Zone3->setGeometry(QRect(vZone[2].GetPosX(), vZone[2].GetPosY(), vZone[2].GetHeight(), vZone[2].GetWidth()));
		}
		else ui.Zone3->setGeometry(QRect(0, 0, 0, 0));
		if (vZone.size() >= 4)
		{
			ui.Zone4->setGeometry(QRect(vZone[3].GetPosX(), vZone[3].GetPosY(), vZone[3].GetHeight(), vZone[3].GetWidth()));
		}
		else ui.Zone4->setGeometry(QRect(0, 0, 0, 0));

		if (vZone.size() >= 5)
		{
			ui.Zone5->setGeometry(QRect(vZone[4].GetPosX(), vZone[4].GetPosY(), vZone[4].GetHeight(), vZone[4].GetWidth()));
		}
		else ui.Zone5->setGeometry(QRect(0, 0, 0, 0));
		--m_nElementsHistorique;
	}
	else if (m_nIdImg == 0)
	{
		std::vector<CZone> vZone = m_vHistorique[m_nElementsHistorique]->GetVectorOfZone();
		ui.Image->setPixmap(QPixmap(QString::fromStdString(m_vHistorique[m_nElementsHistorique]->GetAdresse())));
		ui.Zone1->setGeometry(QRect(vZone[0].GetPosX(), vZone[0].GetPosY(), vZone[0].GetHeight(), vZone[0].GetWidth()));
		if (vZone.size() >= 2)
		{
			ui.Zone2->setGeometry(QRect(vZone[1].GetPosX(), vZone[1].GetPosY(), vZone[1].GetHeight(), vZone[1].GetWidth()));
		}
		else ui.Zone2->setGeometry(QRect(0, 0, 0, 0));
		if (vZone.size() >= 3)
		{
			ui.Zone3->setGeometry(QRect(vZone[2].GetPosX(), vZone[2].GetPosY(), vZone[2].GetHeight(), vZone[2].GetWidth()));
		}
		else ui.Zone3->setGeometry(QRect(0, 0, 0, 0));
		if (vZone.size() >= 4)
		{
			ui.Zone4->setGeometry(QRect(vZone[3].GetPosX(), vZone[3].GetPosY(), vZone[3].GetHeight(), vZone[3].GetWidth()));
		}
		else ui.Zone4->setGeometry(QRect(0, 0, 0, 0));

		if (vZone.size() >= 5)
		{
			ui.Zone5->setGeometry(QRect(vZone[4].GetPosX(), vZone[4].GetPosY(), vZone[4].GetHeight(), vZone[4].GetWidth()));
		}
		else ui.Zone5->setGeometry(QRect(0, 0, 0, 0));
	}
}

void ImageCliquable::pickupKey()
{
	if (key == false) {
		key = true;
		ui.Image->setPixmap(QPixmap("interieur/key.jpg"));
		ui.Zone1->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone2->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone3->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone4->setGeometry(QRect(0, 0, 0, 0));
	}
	else {}
}

void ImageCliquable::pickupSymbol()
{
	std::vector<CZone> zone = m_vTableau[m_nIdImg]->GetVectorOfZone();
	int IdImg = zone[0].GetNextImg();
	if ((!m_bSLiberte) && (IdImg == 660))
	{
		++symbols;
		m_bSLiberte = true;
		ui.Image->setPixmap(QPixmap("symboles/liberte.png"));
		ui.Zone1->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone2->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone3->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone4->setGeometry(QRect(0, 0, 0, 0));
	}
	if ((!m_bSAventure) && (IdImg == 661))
	{
		++symbols;
		m_bSAventure = true;
		ui.Image->setPixmap(QPixmap("symboles/aventure.png"));
		ui.Zone1->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone2->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone3->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone4->setGeometry(QRect(0, 0, 0, 0));
	}
	if ((!m_bSSolidarite) && (IdImg == 50))
	{
		++symbols;
		m_bSSolidarite = true;
		std::vector<CZone> vZone = m_vTableau[m_nIdImg]->GetVectorOfZone();
		m_nIdImg = vZone[0].GetNextImg();
		vZone = m_vTableau[m_nIdImg]->GetVectorOfZone();
		ui.Image->setPixmap(QPixmap(QString::fromStdString(m_vTableau[m_nIdImg]->GetAdresse())));
		ui.Zone1->setGeometry(QRect(vZone[0].GetPosX(), vZone[0].GetPosY(), vZone[0].GetHeight(), vZone[0].GetWidth()));
		if (vZone.size() >= 2)
		{
			ui.Zone2->setGeometry(QRect(vZone[1].GetPosX(), vZone[1].GetPosY(), vZone[1].GetHeight(), vZone[1].GetWidth()));
		}
		else ui.Zone2->setGeometry(QRect(0, 0, 0, 0));

		if (vZone.size() >= 3)
		{
			ui.Zone3->setGeometry(QRect(vZone[2].GetPosX(), vZone[2].GetPosY(), vZone[2].GetHeight(), vZone[2].GetWidth()));
		}
		else ui.Zone3->setGeometry(QRect(0, 0, 0, 0));

		if (vZone.size() >= 4)
		{
			ui.Zone4->setGeometry(QRect(vZone[3].GetPosX(), vZone[3].GetPosY(), vZone[3].GetHeight(), vZone[3].GetWidth()));
		}
		else ui.Zone4->setGeometry(QRect(0, 0, 0, 0));

		if (vZone.size() >= 5)
		{
			ui.Zone5->setGeometry(QRect(vZone[4].GetPosX(), vZone[4].GetPosY(), vZone[4].GetHeight(), vZone[4].GetWidth()));
		}
		else ui.Zone5->setGeometry(QRect(0, 0, 0, 0));
	}
}

void ImageCliquable::setupPuzzle()
{
	ui.widget_3->setupPuzzle();
}
void ImageCliquable::showPuzzle()
{
	ui.widget_3->show();
}

void ImageCliquable::setImage(std::string img)
{
	if (img == "carte") {
		ui.Image->setPixmap(QPixmap("map/map.png"));
		ui.Zone1->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone2->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone3->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone4->setGeometry(QRect(0, 0, 0, 0));
		ui.Zone5->setGeometry(QRect(0, 0, 0, 0));
	}
}