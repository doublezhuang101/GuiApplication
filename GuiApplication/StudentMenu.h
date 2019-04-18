#pragma once

#include <QWidget>
#include "ui_StudentMenu.h"
#include "FormHomePage.h"
#include "DeletePage.h"
#include "RevisePage.h"
#include "SearchPage.h"
#include "RankPage.h"
#include "EntryPage.h"
#include "CalculationPage.h"

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
	void ShowRankPage();
	void ShowEntryPage();
	void ShowCalculationPage();
private:
	Ui::StudentMenu ui;
	FormHomePage view;
	DeletePage view2;
	RevisePage view3;
	CalculationPage view4;
	SearchPage view5;
	RankPage view6;
	EntryPage view7;
};
