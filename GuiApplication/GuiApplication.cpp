#include "GuiApplication.h"
#include "ui_StudentMenu.h"

GuiApplication::GuiApplication(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.startButton, &QPushButton::clicked, this, &GuiApplication::condButtonPressed);
}

void GuiApplication::condButtonPressed()
{
	//StudentMenu w;
	//w.show();
	qDebug("succeed");
	view = new StudentMenu();
	view->show();
}