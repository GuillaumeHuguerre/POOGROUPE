/********************************************************************************
** Form generated from reading UI file 'ImageCliquable.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGECLIQUABLE_H
#define UI_IMAGECLIQUABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "Carte.h"
#include "Dialogue.h"
#include "Inventaire.h"
#include "Puzzle.h"
#include "QLafayetteMenu.h"

QT_BEGIN_NAMESPACE

class Ui_ImageCliquableClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QPushButton *Zone1;
    QPushButton *Zone2;
    QLabel *Image;
    QPushButton *Return;
    QLafayetteMenu *widget_2;
    QPushButton *Zone4;
    QPushButton *Zone3;
    QPushButton *Zone5;
    Puzzle *widget_3;
    Inventaire *widget_4;
    Carte *widget_5;
    Dialogue *widget_6;

    void setupUi(QMainWindow *ImageCliquableClass)
    {
        if (ImageCliquableClass->objectName().isEmpty())
            ImageCliquableClass->setObjectName(QStringLiteral("ImageCliquableClass"));
        ImageCliquableClass->resize(717, 656);
        ImageCliquableClass->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(ImageCliquableClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        Zone1 = new QPushButton(widget);
        Zone1->setObjectName(QStringLiteral("Zone1"));
        Zone1->setGeometry(QRect(160, 70, 81, 101));
        Zone1->setAutoFillBackground(false);
        Zone1->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0.3);"));
        Zone2 = new QPushButton(widget);
        Zone2->setObjectName(QStringLiteral("Zone2"));
        Zone2->setGeometry(QRect(380, 80, 100, 100));
        Zone2->setAutoFillBackground(false);
        Zone2->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0.3);"));
        Image = new QLabel(widget);
        Image->setObjectName(QStringLiteral("Image"));
        Image->setGeometry(QRect(0, 0, 601, 401));
        Image->setPixmap(QPixmap(QString::fromUtf8("chateau/IMG_2726.JPG")));
        Image->setScaledContents(true);
        Return = new QPushButton(widget);
        Return->setObjectName(QStringLiteral("Return"));
        Return->setGeometry(QRect(544, 350, 51, 41));
        Return->setStyleSheet(QStringLiteral("background-color:rgba(0,0,0,0);"));
        QIcon icon;
        icon.addFile(QStringLiteral("divers/retour.png"), QSize(), QIcon::Normal, QIcon::Off);
        Return->setIcon(icon);
        Return->setIconSize(QSize(40, 40));
        widget_2 = new QLafayetteMenu(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setEnabled(true);
        widget_2->setGeometry(QRect(0, 0, 141, 401));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        Zone4 = new QPushButton(widget);
        Zone4->setObjectName(QStringLiteral("Zone4"));
        Zone4->setGeometry(QRect(0, 0, 0, 0));
        Zone4->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0.3);"));
        Zone3 = new QPushButton(widget);
        Zone3->setObjectName(QStringLiteral("Zone3"));
        Zone3->setGeometry(QRect(110, 140, 41, 141));
        Zone3->setAutoFillBackground(false);
        Zone3->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0.3);"));
        Zone5 = new QPushButton(widget);
        Zone5->setObjectName(QStringLiteral("Zone5"));
        Zone5->setGeometry(QRect(0, 0, 0, 0));
        widget_3 = new Puzzle(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(109, -1, 491, 401));
        widget_4 = new Inventaire(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(9, 9, 591, 391));
        widget_5 = new Carte(widget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(-1, -1, 611, 401));
        widget_6 = new Dialogue(widget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(10, 0, 581, 391));
        Image->raise();
        Zone1->raise();
        Zone2->raise();
        Return->raise();
        widget_2->raise();
        Zone4->raise();
        Zone3->raise();
        Zone5->raise();
        widget_3->raise();
        widget_4->raise();
        widget_5->raise();
        widget_6->raise();

        horizontalLayout->addWidget(widget);

        ImageCliquableClass->setCentralWidget(centralWidget);

        retranslateUi(ImageCliquableClass);
        QObject::connect(Zone2, SIGNAL(clicked(bool)), ImageCliquableClass, SLOT(switchImage2()));
        QObject::connect(Zone1, SIGNAL(clicked(bool)), ImageCliquableClass, SLOT(switchImage()));
        QObject::connect(Zone3, SIGNAL(clicked(bool)), ImageCliquableClass, SLOT(switchImage3()));
        QObject::connect(Return, SIGNAL(clicked(bool)), ImageCliquableClass, SLOT(previousImage()));
        QObject::connect(Zone4, SIGNAL(clicked(bool)), ImageCliquableClass, SLOT(pickupKey()));
        QObject::connect(Zone5, SIGNAL(clicked(bool)), ImageCliquableClass, SLOT(pickupSymbol()));

        QMetaObject::connectSlotsByName(ImageCliquableClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageCliquableClass)
    {
        ImageCliquableClass->setWindowTitle(QApplication::translate("ImageCliquableClass", "ImageCliquable", 0));
        Zone1->setText(QString());
        Zone2->setText(QString());
        Image->setText(QString());
        Return->setText(QString());
        Zone4->setText(QString());
        Zone3->setText(QString());
        Zone5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageCliquableClass: public Ui_ImageCliquableClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGECLIQUABLE_H
