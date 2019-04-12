#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GuiApplication.h"
#include "StudentMenu.h"

namespace Ui
{
	class GuiApplication;
}

class GuiApplication : public QMainWindow
{
	Q_OBJECT

public:
	GuiApplication(QWidget *parent = Q_NULLPTR);
public Q_SLOT:
	void condButtonPressed();
private:
	Ui::GuiApplicationClass ui;
	StudentMenu *view;
};
