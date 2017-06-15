#include "ImageCliquable.h"

Carte::Carte(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}


void Carte::CloseMap() {
	ImageCliquable* pImageCliquable = dynamic_cast<ImageCliquable*>(parent()->parent()->parent());
	pImageCliquable->HideMap();
}