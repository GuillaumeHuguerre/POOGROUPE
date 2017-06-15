#pragma once

#ifndef XML_DOM
#define XML_DOM

#include <QtWidgets/QMainWindow>
#include "ui_Dialogue.h"

#include <QtGui>
#include <QtXml>
#include <QWidget>

class Dialogue : public QWidget
{
	Q_OBJECT

public:
	Dialogue(QWidget *parent = Q_NULLPTR);

	QString getQuestion();
	QString getReponse();

	void setQuestion(QString q);
	void setReponse(QString r);

	public slots:
	void answer2();
	void answer3();
	void answer1();
	void answer4();



private:
	Ui::DialogueClass ui;
	QString s_question = "Q1";
	QString s_reponse = "R1";
};
#endif