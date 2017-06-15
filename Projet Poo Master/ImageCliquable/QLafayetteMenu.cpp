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


void QLafayetteMenu::onCarte()
{
	ImageCliquable* pImageCliquable = dynamic_cast<ImageCliquable*>(parent()->parent()->parent());
	pImageCliquable->OpenMap();

}

void QLafayetteMenu::onInventaire() {
	ImageCliquable* pImageCliquable = dynamic_cast<ImageCliquable*>(parent()->parent()->parent());
	pImageCliquable->showInventaire();
}
