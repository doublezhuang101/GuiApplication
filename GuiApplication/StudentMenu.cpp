#include "StudentMenu.h"



StudentMenu::StudentMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.Exit, &QPushButton::clicked, this, &StudentMenu::close);
	connect(ui.DisPlayButton, &QPushButton::clicked, this, &StudentMenu::ShowFormPage);
	connect(ui.DeleteButton, &QPushButton::clicked, this, &StudentMenu::ShowDeletePage);
	connect(ui.ReviseButton, &QPushButton::clicked, this, &StudentMenu::ShowRevisePage);
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

StudentMenu::~StudentMenu()
{
}
