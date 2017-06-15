#include <string>
#include <QtWidgets>
#include "ImageCliquable.h"

Inventaire::Inventaire(QWidget *parent)
	: QWidget(parent)
{
	std::string a = std::to_string(nbfrag);
	ui.setupUi(this);
	ui.fragments->setPixmap(QPixmap("Inventaire/Lafayette.png"));
	ui.nbfrag->setText(QString::fromStdString(a));
}

void Inventaire::setClee()
{
	ui.clee->setPixmap(QPixmap("Inventaire/key.png"));
}

void Inventaire::setLiberte()
{
	ui.Liberte->setPixmap(QPixmap("Inventaire/liberte.png"));
}

void Inventaire::setAventure()
{
	ui.aventure->setPixmap(QPixmap("Inventaire/aventure.png"));
}

void Inventaire::setSolidarite()
{
	ui.solidarite->setPixmap(QPixmap("Inventaire/enfants.png"));
}

void Inventaire::FermeInventaire() {

	hide();
}

void Inventaire::onPuzzle() {
	ImageCliquable* pImageCliquable = dynamic_cast<ImageCliquable*>(parent()->parent()->parent());
	pImageCliquable->setupPuzzle();
	pImageCliquable->showPuzzle();
}