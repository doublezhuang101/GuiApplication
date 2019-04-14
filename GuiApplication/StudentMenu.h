#pragma once

#include <QWidget>
#include "ui_StudentMenu.h"
#include "FormHomePage.h"

class StudentMenu : public QWidget
{
	Q_OBJECT

public:
	StudentMenu(QWidget *parent = Q_NULLPTR);
	~StudentMenu();
private	 Q_SLOT:
	void ShowFormPage();
private:
	Ui::StudentMenu ui;
	FormHomePage view;
};
