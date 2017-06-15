/********************************************************************************
** Form generated from reading UI file 'Carte.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTE_H
#define UI_CARTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CarteClass
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *CarteClass)
    {
        if (CarteClass->objectName().isEmpty())
            CarteClass->setObjectName(QStringLiteral("CarteClass"));
        CarteClass->resize(600, 400);
        label = new QLabel(CarteClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(26, 22, 551, 351));
        label->setPixmap(QPixmap(QString::fromUtf8("divers/fond de carte.png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(CarteClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(520, 30, 41, 41));
        pushButton->setStyleSheet(QStringLiteral("background-color:rgba(0,0,0,0);"));
        QIcon icon;
        icon.addFile(QStringLiteral("divers/croix.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        retranslateUi(CarteClass);
        QObject::connect(pushButton, SIGNAL(pressed()), CarteClass, SLOT(CloseMap()));

        QMetaObject::connectSlotsByName(CarteClass);
    } // setupUi

    void retranslateUi(QWidget *CarteClass)
    {
        CarteClass->setWindowTitle(QApplication::translate("CarteClass", "Carte", 0));
        label->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CarteClass: public Ui_CarteClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTE_H
