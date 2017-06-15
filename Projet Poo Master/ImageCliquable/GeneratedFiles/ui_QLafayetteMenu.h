/********************************************************************************
** Form generated from reading UI file 'QLafayetteMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLAFAYETTEMENU_H
#define UI_QLAFAYETTEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QLafayetteMenu
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *QLafayetteMenu)
    {
        if (QLafayetteMenu->objectName().isEmpty())
            QLafayetteMenu->setObjectName(QStringLiteral("QLafayetteMenu"));
        QLafayetteMenu->resize(697, 797);
        QLafayetteMenu->setMinimumSize(QSize(0, 20));
        QLafayetteMenu->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color : transparent;\n"
"	text-align : left;\n"
"	border : 1px solid white;\n"
"	padding-left :5px;\n"
"	color: white;\n"
"	font-size: 15px;\n"
"}"));
        verticalLayout = new QVBoxLayout(QLafayetteMenu);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(QLafayetteMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setMinimumSize(QSize(64, 64));
        QFont font;
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color:#6c6c6c;"));
        pushButton->setCheckable(true);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(QLafayetteMenu);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setMaximumSize(QSize(250, 16777215));
        QFont font1;
        font1.setKerning(false);
        groupBox_2->setFont(font1);
        groupBox_2->setMouseTracking(false);
        groupBox_2->setAcceptDrops(false);
        groupBox_2->setToolTipDuration(1);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QStringLiteral("background-color:#6c6c6c;"));
        groupBox_2->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setEnabled(true);
        pushButton_9->setMinimumSize(QSize(100, 50));
        pushButton_9->setMouseTracking(false);
        pushButton_9->setAcceptDrops(false);
        pushButton_9->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QStringLiteral("D:/IUT - cours/projet POO/images poo/_Carte.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon);
        pushButton_9->setIconSize(QSize(25, 25));
        pushButton_9->setAutoDefault(true);
        pushButton_9->setFlat(true);

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setEnabled(true);
        pushButton_8->setMinimumSize(QSize(100, 50));
        pushButton_8->setMouseTracking(false);
        pushButton_8->setAcceptDrops(false);
        pushButton_8->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral("D:/IUT - cours/projet POO/images poo/_Inventaire1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon1);
        pushButton_8->setIconSize(QSize(25, 25));
        pushButton_8->setAutoDefault(true);
        pushButton_8->setFlat(true);

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setEnabled(true);
        pushButton_10->setMinimumSize(QSize(100, 50));
        pushButton_10->setMouseTracking(false);
        pushButton_10->setAcceptDrops(false);
        pushButton_10->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral("D:/IUT - cours/projet POO/images poo/_Loupe.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon2);
        pushButton_10->setIconSize(QSize(25, 25));
        pushButton_10->setAutoDefault(true);
        pushButton_10->setFlat(true);

        verticalLayout_2->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setEnabled(true);
        pushButton_11->setMinimumSize(QSize(100, 50));
        pushButton_11->setMouseTracking(false);
        pushButton_11->setAcceptDrops(false);
        pushButton_11->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral("D:/IUT - cours/projet POO/images poo/_Enregistrer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon3);
        pushButton_11->setIconSize(QSize(25, 25));
        pushButton_11->setAutoDefault(true);
        pushButton_11->setFlat(true);

        verticalLayout_2->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setEnabled(true);
        pushButton_12->setMinimumSize(QSize(100, 50));
        pushButton_12->setMouseTracking(false);
        pushButton_12->setAcceptDrops(false);
        pushButton_12->setAutoFillBackground(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral("D:/IUT - cours/projet POO/images poo/_Upload.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon4);
        pushButton_12->setIconSize(QSize(25, 25));
        pushButton_12->setAutoDefault(true);
        pushButton_12->setFlat(true);

        verticalLayout_2->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(groupBox_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setEnabled(true);
        pushButton_13->setMinimumSize(QSize(100, 50));
        pushButton_13->setMouseTracking(false);
        pushButton_13->setAcceptDrops(false);
        pushButton_13->setAutoFillBackground(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral("D:/IUT - cours/projet POO/images poo/_Retour.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon5);
        pushButton_13->setIconSize(QSize(25, 25));
        pushButton_13->setAutoDefault(true);
        pushButton_13->setFlat(true);

        verticalLayout_2->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(groupBox_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setEnabled(true);
        pushButton_14->setMinimumSize(QSize(100, 50));
        pushButton_14->setMouseTracking(false);
        pushButton_14->setAcceptDrops(false);
        pushButton_14->setAutoFillBackground(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral("D:/IUT - cours/projet POO/images poo/_Informations.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon6);
        pushButton_14->setIconSize(QSize(25, 25));
        pushButton_14->setAutoDefault(true);
        pushButton_14->setFlat(true);

        verticalLayout_2->addWidget(pushButton_14);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(100, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(QLafayetteMenu);
        QObject::connect(pushButton, SIGNAL(toggled(bool)), groupBox_2, SLOT(setHidden(bool)));
        QObject::connect(pushButton_9, SIGNAL(pressed()), QLafayetteMenu, SLOT(onCarte()));
        QObject::connect(pushButton_8, SIGNAL(pressed()), QLafayetteMenu, SLOT(createPuzzle()));

        pushButton_9->setDefault(true);
        pushButton_8->setDefault(true);
        pushButton_10->setDefault(true);
        pushButton_11->setDefault(true);
        pushButton_12->setDefault(true);
        pushButton_13->setDefault(true);
        pushButton_14->setDefault(true);


        QMetaObject::connectSlotsByName(QLafayetteMenu);
    } // setupUi

    void retranslateUi(QWidget *QLafayetteMenu)
    {
        QLafayetteMenu->setWindowTitle(QApplication::translate("QLafayetteMenu", "QLafayetteMenu", 0));
        pushButton->setText(QString());
#ifndef QT_NO_WHATSTHIS
        groupBox_2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox_2->setTitle(QString());
        pushButton_9->setText(QApplication::translate("QLafayetteMenu", "Carte ", 0));
        pushButton_8->setText(QApplication::translate("QLafayetteMenu", "Inventaire ", 0));
        pushButton_10->setText(QApplication::translate("QLafayetteMenu", "Qu\303\252te", 0));
        pushButton_11->setText(QApplication::translate("QLafayetteMenu", "Enregistrer ", 0));
        pushButton_12->setText(QApplication::translate("QLafayetteMenu", "Charger", 0));
        pushButton_13->setText(QApplication::translate("QLafayetteMenu", "Recommencer", 0));
        pushButton_14->setText(QApplication::translate("QLafayetteMenu", "Information", 0));
    } // retranslateUi

};

namespace Ui {
    class QLafayetteMenu: public Ui_QLafayetteMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLAFAYETTEMENU_H
