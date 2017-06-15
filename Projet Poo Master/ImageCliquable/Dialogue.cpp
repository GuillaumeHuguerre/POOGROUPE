#include "Dialogue.h"
#include <iostream>
using namespace std;


Dialogue::Dialogue(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.Reponse4->setHidden(true);
}

void Dialogue::answer2()
{
	bool visible = true;
	if (ui.Reponse2->isHidden() == true)
		visible = false;

	QDomDocument *dom = new QDomDocument("Dialogue");
	QFile file_doc("dialogue.xml");

	dom->setContent(&file_doc);

	QDomElement dom_element = dom->documentElement();

	QDomNode node = dom_element.firstChild();

	QDomElement element = node.toElement();

	bool find = false;
	while (!node.isNull() && find == false && visible == true)
	{
		if (element.attribute("id") == getQuestion() && element.tagName() == "Question")
		{
			node = element.firstChild();
			node = node.nextSibling();
			element = node.toElement();
			setQuestion(element.attribute("id"));
			find = true;
		}
		if (find == false)
		{
			node = node.nextSibling();
			element = node.toElement();
		}
	}


	QDomNode node2 = dom_element.firstChild();
	QDomElement element2 = node2.toElement();

	bool find2 = false;
	while (!node2.isNull() && find2 == false && visible == true)
	{
		if (element2.attribute("id") == getQuestion() && element2.tagName() == "Question")
		{
			ui.Question->setText(element2.attribute("value"));

			node2 = element2.firstChild();
			element2 = node2.toElement();
			ui.Reponse1->setText(element2.attribute("value"));


			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse2->setText(element2.attribute("value"));
				ui.Reponse2->setHidden(false);
			}
			else
				ui.Reponse2->setHidden(true);

			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse3->setText(element2.attribute("value"));
				ui.Reponse3->setHidden(false);
			}
			else
				ui.Reponse3->setHidden(true);


			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse4->setText(element2.attribute("value"));
				ui.Reponse4->setHidden(false);
			}
			else
				ui.Reponse4->setHidden(true);


			find2 = true;
		}

		if (find2 == false)
		{
			node2 = node2.nextSibling();
			element2 = node2.toElement();
		}
	}
	file_doc.close();
}

void Dialogue::answer3()
{
	bool visible = true;
	if (ui.Reponse3->isHidden() == true)
		visible = false;

	QDomDocument *dom = new QDomDocument("Dialogue");
	QFile file_doc("dialogue.xml");

	dom->setContent(&file_doc);

	QDomElement dom_element = dom->documentElement();

	QDomNode node = dom_element.firstChild();

	QDomElement element = node.toElement();

	bool find = false;
	while (!node.isNull() && find == false && visible == true)
	{
		if (element.attribute("id") == getQuestion() && element.tagName() == "Question")
		{
			node = element.firstChild();
			node = node.nextSibling();
			node = node.nextSibling();
			element = node.toElement();

			setQuestion(element.attribute("id"));
			find = true;
		}
		if (find == false)
		{
			node = node.nextSibling();
			element = node.toElement();
		}
	}


	QDomNode node2 = dom_element.firstChild();
	QDomElement element2 = node2.toElement();

	bool find2 = false;
	while (!node2.isNull() && find2 == false && visible == true)
	{
		if (element2.attribute("id") == getQuestion() && element2.tagName() == "Question")
		{
			ui.Question->setText(element2.attribute("value"));

			node2 = element2.firstChild();
			element2 = node2.toElement();
			ui.Reponse1->setText(element2.attribute("value"));


			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse2->setText(element2.attribute("value"));
				ui.Reponse2->setHidden(false);
			}
			else
				ui.Reponse2->setHidden(true);

			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse3->setText(element2.attribute("value"));
				ui.Reponse3->setHidden(false);
			}
			else
				ui.Reponse3->setHidden(true);


			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse4->setText(element2.attribute("value"));
				ui.Reponse4->setHidden(false);
			}
			else
				ui.Reponse4->setHidden(true);


			find2 = true;
		}

		if (find2 == false)
		{
			node2 = node2.nextSibling();
			element2 = node2.toElement();
		}
	}
	file_doc.close();
}

void Dialogue::answer1()
{

	QDomDocument *dom = new QDomDocument("Dialogue");
	QFile file_doc("dialogue.xml");

	dom->setContent(&file_doc);

	QDomElement dom_element = dom->documentElement();

	QDomNode node = dom_element.firstChild();

	QDomElement element = node.toElement();

	bool find = false;
	while (!node.isNull() && find == false)
	{
		if (element.attribute("id") == getQuestion() && element.tagName() == "Question")
		{
			node = element.firstChild();
			element = node.toElement();
			setQuestion(element.attribute("id"));
			find = true;
		}
		if (find == false)
		{
			node = node.nextSibling();
			element = node.toElement();
		}
	}


	QDomNode node2 = dom_element.firstChild();
	QDomElement element2 = node2.toElement();

	bool find2 = false;
	while (!node2.isNull() && find2 == false)
	{
		if (element2.attribute("id") == getQuestion() && element2.tagName() == "Question")
		{
			ui.Question->setText(element2.attribute("value"));

			node2 = element2.firstChild();
			element2 = node2.toElement();
			ui.Reponse1->setText(element2.attribute("value"));


			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse2->setText(element2.attribute("value"));
				ui.Reponse2->setHidden(false);
			}
			else
				ui.Reponse2->setHidden(true);

			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse3->setText(element2.attribute("value"));
				ui.Reponse3->setHidden(false);
			}
			else
				ui.Reponse3->setHidden(true);


			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse4->setText(element2.attribute("value"));
				ui.Reponse4->setHidden(false);
			}
			else
				ui.Reponse4->setHidden(true);


			find2 = true;
		}

		if (find2 == false)
		{
			node2 = node2.nextSibling();
			element2 = node2.toElement();
		}
	}
	file_doc.close();
}

void Dialogue::answer4()
{
	bool visible = true;
	if (ui.Reponse4->isHidden() == true)
		visible = false;

	QDomDocument *dom = new QDomDocument("Dialogue");
	QFile file_doc("dialogue.xml");

	dom->setContent(&file_doc);

	QDomElement dom_element = dom->documentElement();

	QDomNode node = dom_element.firstChild();

	QDomElement element = node.toElement();

	bool find = false;
	while (!node.isNull() && find == false && visible == true)
	{
		if (element.attribute("id") == getQuestion() && element.tagName() == "Question")
		{
			node = element.firstChild();
			node = node.nextSibling();
			node = node.nextSibling();
			node = node.nextSibling();
			element = node.toElement();
			setQuestion(element.attribute("id"));
			find = true;
		}
		if (find == false)
		{
			node = node.nextSibling();
			element = node.toElement();
		}
	}


	QDomNode node2 = dom_element.firstChild();
	QDomElement element2 = node2.toElement();

	bool find2 = false;
	while (!node2.isNull() && find2 == false && visible == true)
	{
		if (element2.attribute("id") == getQuestion() && element2.tagName() == "Question")
		{
			ui.Question->setText(element2.attribute("value"));

			node2 = element2.firstChild();
			element2 = node2.toElement();
			ui.Reponse1->setText(element2.attribute("value"));


			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse2->setText(element2.attribute("value"));
				ui.Reponse2->setHidden(false);
			}
			else
				ui.Reponse2->setHidden(true);

			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse3->setText(element2.attribute("value"));
				ui.Reponse3->setHidden(false);
			}
			else
				ui.Reponse3->setHidden(true);


			node2 = node2.nextSibling();
			element2 = node2.toElement();
			if (element2.tagName() == "Answer")
			{
				ui.Reponse4->setText(element2.attribute("value"));
				ui.Reponse4->setHidden(false);
			}
			else
				ui.Reponse4->setHidden(true);


			find2 = true;
		}

		if (find2 == false)
		{
			node2 = node2.nextSibling();
			element2 = node2.toElement();
		}
	}
	file_doc.close();
}


QString Dialogue::getQuestion()
{
	return s_question;
}

QString Dialogue::getReponse()
{
	return s_reponse;
}

void Dialogue::setQuestion(QString q)
{
	s_question = q;
}

void Dialogue::setReponse(QString r)
{
	s_reponse = r;
}


