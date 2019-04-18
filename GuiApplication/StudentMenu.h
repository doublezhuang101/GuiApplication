#pragma once

#include <QWidget>
#include "ui_StudentMenu.h"
#include "FormHomePage.h"
#include "DeletePage.h"
#include "RevisePage.h"
#include "SearchPage.h"

class StudentMenu : public QWidget
{
	Q_OBJECT

public:
	StudentMenu(QWidget *parent = Q_NULLPTR);
	~StudentMenu();
public Q_SLOT:
	void ShowFormPage();
	void ShowDeletePage();
	void ShowRevisePage();
	void ShowSearchPage();
private:
	Ui::StudentMenu ui;
	FormHomePage view;
	DeletePage view2;
	RevisePage view3;

	SearchPage view5;
};
