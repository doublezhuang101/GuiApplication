#include "StudentMenu.h"


StudentMenu::StudentMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.Exit, &QPushButton::clicked, this, &StudentMenu::close);
	connect(ui.DisPlayButton, &QPushButton::clicked, this, &StudentMenu::ShowFormPage);
	connect(ui.DeleteButton, &QPushButton::clicked, this, &StudentMenu::ShowDeletePage);
	connect(ui.ReviseButton, &QPushButton::clicked, this, &StudentMenu::ShowRevisePage);
	connect(ui.SearchButton, &QPushButton::clicked, this, &StudentMenu::ShowSearchPage);
	connect(ui.RankButton, &QPushButton::clicked, this, &StudentMenu::ShowRankPage);
	connect(ui.EntryButton, &QPushButton::clicked, this, &StudentMenu::ShowEntryPage);
	connect(ui.CalculationButton, &QPushButton::clicked, this, &StudentMenu::ShowCalculationPage);
}

void StudentMenu::ShowFormPage()
{
	/*view = new StudentMenu();*/
	view.show();//不用指针的显示新页面
}

void StudentMenu::ShowDeletePage()
{
	view2.show();
}

void StudentMenu::ShowRevisePage()
{
	view3.show();
}

void StudentMenu::ShowCalculationPage()
{
	view4.show();
}

void StudentMenu::ShowSearchPage()
{
	view5.show();
}

void StudentMenu::ShowRankPage()
{
	view6.show();
}

void StudentMenu::ShowEntryPage()
{
	view7.show();
}

StudentMenu::~StudentMenu()
{
}
