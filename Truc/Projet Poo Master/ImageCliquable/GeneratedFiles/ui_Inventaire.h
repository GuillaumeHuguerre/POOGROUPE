/********************************************************************************
** Form generated from reading UI file 'Inventaire.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTAIRE_H
#define UI_INVENTAIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InventaireClass
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *aventure;
    QLabel *nbfrag;
    QLabel *solidarite;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *fragments;
    QPushButton *pushButton_2;
    QLabel *Liberte;
    QLabel *clee;

    void setupUi(QWidget *InventaireClass)
    {
        if (InventaireClass->objectName().isEmpty())
            InventaireClass->setObjectName(QStringLiteral("InventaireClass"));
        InventaireClass->resize(733, 707);
        InventaireClass->setStyleSheet(QLatin1String("\n"
"\n"
"QLabel{\n"
"background-color:#6c6c6c;\n"
"font-size:10px;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color:#6c6c6c;\n"
"font-size: 10px;\n"
"}\n"
"\n"
""));
        gridLayoutWidget = new QWidget(InventaireClass);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(120, 20, 371, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        aventure = new QLabel(gridLayoutWidget);
        aventure->setObjectName(QStringLiteral("aventure"));
        aventure->setStyleSheet(QLatin1String("QLabel {\n"
"		background-color:white;\n"
"border-color : black;\n"
"\n"
"border-width:2px;\n"
"border-style:solid;\n"
"}"));
        aventure->setScaledContents(true);

        gridLayout->addWidget(aventure, 1, 0, 1, 1);

        nbfrag = new QLabel(gridLayoutWidget);
        nbfrag->setObjectName(QStringLiteral("nbfrag"));
        nbfrag->setStyleSheet(QLatin1String("QLabel {\n"
"		background-color:white;\n"
"border-color : black;\n"
"\n"
"border-width:2px;\n"
"border-style:solid;\n"
"}"));

        gridLayout->addWidget(nbfrag, 3, 1, 1, 1);

        solidarite = new QLabel(gridLayoutWidget);
        solidarite->setObjectName(QStringLiteral("solidarite"));
        solidarite->setStyleSheet(QLatin1String("QLabel {\n"
"		background-color:white;\n"
"border-color : black;\n"
"\n"
"border-width:2px;\n"
"border-style:solid;\n"
"}"));
        solidarite->setScaledContents(true);

        gridLayout->addWidget(solidarite, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color : rgba(0,0,0,0);\n"
"background-color:white;\n"
"border-color : black;\n"
"\n"
"border-width:2px;\n"
"border-style:solid;"));

        verticalLayout->addWidget(pushButton);

        fragments = new QLabel(gridLayoutWidget);
        fragments->setObjectName(QStringLiteral("fragments"));
        fragments->setStyleSheet(QLatin1String("QLabel {\n"
"		background-color:white;\n"
"border-color : black;\n"
"\n"
"border-width:2px;\n"
"border-style:solid;\n"
"}"));
        fragments->setScaledContents(true);

        verticalLayout->addWidget(fragments);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("background-color:white;\n"
"border-color : black;\n"
"\n"
"border-width:2px;\n"
"border-style:solid;"));

        verticalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(verticalLayout, 0, 1, 3, 1);

        Liberte = new QLabel(gridLayoutWidget);
        Liberte->setObjectName(QStringLiteral("Liberte"));
        Liberte->setStyleSheet(QLatin1String("QLabel {\n"
"		background-color:white;\n"
"border-color : black;\n"
"\n"
"border-width:2px;\n"
"border-style:solid;\n"
"}"));
        Liberte->setScaledContents(true);

        gridLayout->addWidget(Liberte, 0, 0, 1, 1);

        clee = new QLabel(gridLayoutWidget);
        clee->setObjectName(QStringLiteral("clee"));
        clee->setStyleSheet(QLatin1String("QLabel {\n"
"	background-color:white;\n"
"border-color : black;\n"
"\n"
"border-width:2px;\n"
"border-style:solid;\n"
"}"));
        clee->setScaledContents(true);

        gridLayout->addWidget(clee, 3, 0, 1, 1);


        retranslateUi(InventaireClass);
        QObject::connect(pushButton, SIGNAL(pressed()), InventaireClass, SLOT(FermeInventaire()));
        QObject::connect(pushButton_2, SIGNAL(pressed()), InventaireClass, SLOT(onPuzzle()));

        QMetaObject::connectSlotsByName(InventaireClass);
    } // setupUi

    void retranslateUi(QWidget *InventaireClass)
    {
        InventaireClass->setWindowTitle(QApplication::translate("InventaireClass", "Inventaire", 0));
        aventure->setText(QApplication::translate("InventaireClass", "Symbole de l'aventure", 0));
        nbfrag->setText(QApplication::translate("InventaireClass", "0/12", 0));
        solidarite->setText(QApplication::translate("InventaireClass", "Symbole de solidarite", 0));
        pushButton->setText(QApplication::translate("InventaireClass", "Fermer", 0));
        fragments->setText(QString());
        pushButton_2->setText(QApplication::translate("InventaireClass", "Appuyez pour r\303\251soudre le puzzle", 0));
        Liberte->setText(QApplication::translate("InventaireClass", "Symbole de liberte", 0));
        clee->setText(QApplication::translate("InventaireClass", "Cl\303\251", 0));
    } // retranslateUi

};

namespace Ui {
    class InventaireClass: public Ui_InventaireClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTAIRE_H
