/********************************************************************************
** Form generated from reading UI file 'Puzzle.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUZZLE_H
#define UI_PUZZLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PuzzleClass
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *PuzzleClass)
    {
        if (PuzzleClass->objectName().isEmpty())
            PuzzleClass->setObjectName(QStringLiteral("PuzzleClass"));
        PuzzleClass->resize(617, 537);
        centralWidget = new QWidget(PuzzleClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PuzzleClass->setCentralWidget(centralWidget);

        retranslateUi(PuzzleClass);

        QMetaObject::connectSlotsByName(PuzzleClass);
    } // setupUi

    void retranslateUi(QMainWindow *PuzzleClass)
    {
        PuzzleClass->setWindowTitle(QApplication::translate("PuzzleClass", "Puzzle", 0));
    } // retranslateUi

};

namespace Ui {
    class PuzzleClass: public Ui_PuzzleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUZZLE_H
