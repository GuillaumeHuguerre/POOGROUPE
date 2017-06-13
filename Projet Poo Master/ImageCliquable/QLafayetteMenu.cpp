#include "QLafayetteMenu.h"
#include "ImageCliquable.h"

QLafayetteMenu::QLafayetteMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

QLafayetteMenu::~QLafayetteMenu()
{
}
void QLafayetteMenu::createPuzzle()
{


	ImageCliquable* pImageCliquable = dynamic_cast<ImageCliquable*>(parent()->parent()->parent());
	pImageCliquable->setupPuzzle();
	pImageCliquable->showPuzzle();
}

void QLafayetteMenu::onCarte()
{
	ImageCliquable* pImageCliquable = dynamic_cast<ImageCliquable*>(parent()->parent()->parent());
	pImageCliquable->setImage("carte");

	//pImageCliquable->setZones();
}

