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
#include <QtWidgets/QLabel>
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
    QLabel *label_3;
    QPushButton *pushButton_8;
    QLabel *carte;
    QPushButton *pushButton_9;
    QLabel *quete;
    QPushButton *pushButton_10;
    QLabel *enregistrer;
    QPushButton *pushButton_11;
    QLabel *label_2;
    QPushButton *pushButton_12;
    QLabel *label;
    QPushButton *pushButton_13;
    QLabel *information;
    QPushButton *pushButton_14;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *QLafayetteMenu)
    {
        if (QLafayetteMenu->objectName().isEmpty())
            QLafayetteMenu->setObjectName(QStringLiteral("QLafayetteMenu"));
        QLafayetteMenu->resize(283, 731);
        QLafayetteMenu->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color : transparent;\n"
"	text-align :top, left;\n"
"	border : 1px solid white;\n"
"	padding-left :5px;\n"
"	color: white;\n"
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
        font.setKerning(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color:#6c6c6c;"));
        pushButton->setCheckable(true);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(QLafayetteMenu);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
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
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../../../../kevch/Desktop/images poo/_Inventaire1.jpg")));
        label_3->setScaledContents(true);

        verticalLayout_2->addWidget(label_3);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(0, 32));

        verticalLayout_2->addWidget(pushButton_8);

        carte = new QLabel(groupBox_2);
        carte->setObjectName(QStringLiteral("carte"));
        carte->setPixmap(QPixmap(QString::fromUtf8("../../../../../../kevch/Desktop/images poo/_Carte.png")));
        carte->setScaledContents(true);
        carte->setWordWrap(false);
        carte->setOpenExternalLinks(false);

        verticalLayout_2->addWidget(carte);

        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(0, 32));

        verticalLayout_2->addWidget(pushButton_9);

        quete = new QLabel(groupBox_2);
        quete->setObjectName(QStringLiteral("quete"));
        quete->setPixmap(QPixmap(QString::fromUtf8("../../../../../../kevch/Desktop/images poo/_Loupe.png")));
        quete->setScaledContents(true);

        verticalLayout_2->addWidget(quete);

        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(0, 32));

        verticalLayout_2->addWidget(pushButton_10);

        enregistrer = new QLabel(groupBox_2);
        enregistrer->setObjectName(QStringLiteral("enregistrer"));
        enregistrer->setPixmap(QPixmap(QString::fromUtf8("../../../../../../kevch/Desktop/images poo/_Enregistrer.png")));
        enregistrer->setScaledContents(true);

        verticalLayout_2->addWidget(enregistrer);

        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(0, 32));

        verticalLayout_2->addWidget(pushButton_11);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../../../../kevch/Desktop/images poo/_Upload.png")));
        label_2->setScaledContents(true);

        verticalLayout_2->addWidget(label_2);

        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(0, 32));

        verticalLayout_2->addWidget(pushButton_12);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../../kevch/Desktop/images poo/_Retour.png")));
        label->setScaledContents(true);

        verticalLayout_2->addWidget(label);

        pushButton_13 = new QPushButton(groupBox_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(0, 32));
        pushButton_13->setAcceptDrops(true);
        pushButton_13->setAutoDefault(false);
        pushButton_13->setFlat(false);

        verticalLayout_2->addWidget(pushButton_13);

        information = new QLabel(groupBox_2);
        information->setObjectName(QStringLiteral("information"));
        information->setPixmap(QPixmap(QString::fromUtf8("../../../../../../kevch/Desktop/images poo/_Informations.png")));
        information->setScaledContents(true);

        verticalLayout_2->addWidget(information);

        pushButton_14 = new QPushButton(groupBox_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(0, 32));

        verticalLayout_2->addWidget(pushButton_14);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(QLafayetteMenu);
        QObject::connect(pushButton, SIGNAL(toggled(bool)), groupBox_2, SLOT(setHidden(bool)));
        QObject::connect(pushButton_9, SIGNAL(pressed()), QLafayetteMenu, SLOT(onCarte()));
        QObject::connect(pushButton_8, SIGNAL(pressed()), QLafayetteMenu, SLOT(createPuzzle()));

        pushButton_13->setDefault(false);


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
        label_3->setText(QString());
        pushButton_8->setText(QApplication::translate("QLafayetteMenu", "Inventaire ", 0));
        carte->setText(QString());
        pushButton_9->setText(QApplication::translate("QLafayetteMenu", "Carte ", 0));
        quete->setText(QString());
        pushButton_10->setText(QApplication::translate("QLafayetteMenu", "Qu\303\252te", 0));
        enregistrer->setText(QString());
        pushButton_11->setText(QApplication::translate("QLafayetteMenu", "Enregistrer ", 0));
        label_2->setText(QString());
        pushButton_12->setText(QApplication::translate("QLafayetteMenu", "Charger", 0));
        label->setText(QString());
        pushButton_13->setText(QApplication::translate("QLafayetteMenu", "Recommencer la partie", 0));
        information->setText(QString());
        pushButton_14->setText(QApplication::translate("QLafayetteMenu", "Information", 0));
    } // retranslateUi

};

namespace Ui {
    class QLafayetteMenu: public Ui_QLafayetteMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLAFAYETTEMENU_H
