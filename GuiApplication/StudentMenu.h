#pragma once

#include <QWidget>
#include "ui_StudentMenu.h"
#include "FormHomePage.h"
#include "DeletePage.h"

class StudentMenu : public QWidget
{
	Q_OBJECT

public:
	StudentMenu(QWidget *parent = Q_NULLPTR);
	~StudentMenu();
private	 Q_SLOT:
	void ShowFormPage();
	void ShowDeletePage();
private:
	Ui::StudentMenu ui;
	FormHomePage view;
	DeletePage view2;
};
