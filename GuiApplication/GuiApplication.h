#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GuiApplication.h"

class GuiApplication : public QMainWindow
{
	Q_OBJECT

public:
	GuiApplication(QWidget *parent = Q_NULLPTR);

private:
	Ui::GuiApplicationClass ui;
};
