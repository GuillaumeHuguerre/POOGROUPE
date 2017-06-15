/********************************************************************************
** Form generated from reading UI file 'Dialogue.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUE_H
#define UI_DIALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogueClass
{
public:
    QWidget *widget;
    QLabel *Reponse4;
    QPushButton *btnRep3;
    QPushButton *btnRep4;
    QLabel *Reponse3;
    QLabel *Reponse1;
    QPushButton *btnRep2;
    QLabel *Question;
    QLabel *Reponse2;
    QPushButton *btnRep1;

    void setupUi(QWidget *DialogueClass)
    {
        if (DialogueClass->objectName().isEmpty())
            DialogueClass->setObjectName(QStringLiteral("DialogueClass"));
        DialogueClass->resize(641, 489);
        widget = new QWidget(DialogueClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 541, 421));
        Reponse4 = new QLabel(widget);
        Reponse4->setObjectName(QStringLiteral("Reponse4"));
        Reponse4->setEnabled(true);
        Reponse4->setGeometry(QRect(20, 350, 471, 41));
        Reponse4->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 150);\n"
"color : white;\n"
"font-weight : bold;\n"
"font-size : 14px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;"));
        Reponse4->setAlignment(Qt::AlignCenter);
        Reponse4->setWordWrap(true);
        btnRep3 = new QPushButton(widget);
        btnRep3->setObjectName(QStringLiteral("btnRep3"));
        btnRep3->setEnabled(true);
        btnRep3->setGeometry(QRect(20, 300, 471, 41));
        btnRep3->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 0);\n"
"color : white;\n"
"font-weight : bold;\n"
"font-size : 12px;"));
        btnRep4 = new QPushButton(widget);
        btnRep4->setObjectName(QStringLiteral("btnRep4"));
        btnRep4->setGeometry(QRect(20, 350, 471, 41));
        btnRep4->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 0);\n"
"color : white;\n"
"font-weight : bold;\n"
"font-size : 12px;"));
        Reponse3 = new QLabel(widget);
        Reponse3->setObjectName(QStringLiteral("Reponse3"));
        Reponse3->setGeometry(QRect(20, 300, 471, 41));
        Reponse3->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 150);\n"
"color : white;\n"
"font-weight : bold;\n"
"font-size : 14px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;"));
        Reponse3->setAlignment(Qt::AlignCenter);
        Reponse3->setWordWrap(true);
        Reponse1 = new QLabel(widget);
        Reponse1->setObjectName(QStringLiteral("Reponse1"));
        Reponse1->setGeometry(QRect(20, 200, 471, 41));
        Reponse1->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 150);\n"
"color : white;\n"
"font-weight : bold;\n"
"font-size : 14px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;"));
        Reponse1->setAlignment(Qt::AlignCenter);
        Reponse1->setWordWrap(true);
        btnRep2 = new QPushButton(widget);
        btnRep2->setObjectName(QStringLiteral("btnRep2"));
        btnRep2->setGeometry(QRect(20, 250, 471, 41));
        btnRep2->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 0);\n"
"color : white;\n"
"font-weight : bold;\n"
"font-size : 12px;"));
        Question = new QLabel(widget);
        Question->setObjectName(QStringLiteral("Question"));
        Question->setGeometry(QRect(20, 20, 471, 131));
        Question->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 150);\n"
"color : white;\n"
"font-weight : bold;\n"
"font-size : 14px;"));
        Question->setAlignment(Qt::AlignCenter);
        Question->setWordWrap(true);
        Reponse2 = new QLabel(widget);
        Reponse2->setObjectName(QStringLiteral("Reponse2"));
        Reponse2->setGeometry(QRect(20, 250, 471, 41));
        Reponse2->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 150);\n"
"color : white;\n"
"font-weight : bold;\n"
"font-size : 14px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;"));
        Reponse2->setAlignment(Qt::AlignCenter);
        Reponse2->setWordWrap(true);
        btnRep1 = new QPushButton(widget);
        btnRep1->setObjectName(QStringLiteral("btnRep1"));
        btnRep1->setGeometry(QRect(20, 200, 471, 41));
        btnRep1->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 0);\n"
"color : white;\n"
"font-weight : bold;\n"
"font-size : 14px;"));
        btnRep1->setCheckable(false);
        Reponse4->raise();
        Reponse3->raise();
        Reponse1->raise();
        Question->raise();
        Reponse2->raise();
        btnRep1->raise();
        btnRep2->raise();
        btnRep3->raise();
        btnRep4->raise();

        retranslateUi(DialogueClass);
        QObject::connect(btnRep1, SIGNAL(pressed()), DialogueClass, SLOT(answer1()));
        QObject::connect(btnRep2, SIGNAL(pressed()), DialogueClass, SLOT(answer2()));
        QObject::connect(btnRep3, SIGNAL(pressed()), DialogueClass, SLOT(answer3()));
        QObject::connect(btnRep4, SIGNAL(pressed()), DialogueClass, SLOT(answer4()));

        QMetaObject::connectSlotsByName(DialogueClass);
    } // setupUi

    void retranslateUi(QWidget *DialogueClass)
    {
        DialogueClass->setWindowTitle(QApplication::translate("DialogueClass", "Dialogue", 0));
        Reponse4->setText(QApplication::translate("DialogueClass", "Bon Ok.voil\303\240 un arbre qui parle...Apr\303\250s tout, moi aussi je parle, alors pourquoi pas lui?", 0));
        btnRep3->setText(QString());
        btnRep4->setText(QString());
        Reponse3->setText(QApplication::translate("DialogueClass", "Un arbre qui parle. Non mais c'est n'importe quoi !", 0));
        Reponse1->setText(QApplication::translate("DialogueClass", "Bon Ok.voil\303\240 un arbre qui parle...Apr\303\250s tout, moi aussi je parle, alors pourquoi pas lui?", 0));
        btnRep2->setText(QString());
        Question->setText(QApplication::translate("DialogueClass", "Qui ose me d\303\251ranger durant ma sieste? Ah... c'est vous ! Cela faisait longtemps que je vous attendais. Permettez-moi de me pr\303\251senter. Je suis le Ch\303\252ne de Lafayette. On dit que j'ai \303\251t\303\251 plant\303\251 ici au XVII si\303\250cle par le grand p\303\250re du G\303\251n\303\251ral Lafayette, mais je vous avoue que je ne me souviens pas tr\303\250s bien de mes premi\303\250res ann\303\251es.", 0));
        Reponse2->setText(QApplication::translate("DialogueClass", "Mais ?! Tu parles !", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogueClass: public Ui_DialogueClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUE_H
