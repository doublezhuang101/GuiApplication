#include "StudentMenu.h"



StudentMenu::StudentMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.Exit, &QPushButton::clicked, this, &StudentMenu::close);
	connect(ui.pushButton, &QPushButton::clicked, this, &StudentMenu::ShowFormPage);
}

void StudentMenu::ShowFormPage()
{
	/*view = new StudentMenu();*/
	view.show();//不用指针的显示新页面
}

StudentMenu::~StudentMenu()
{
}
