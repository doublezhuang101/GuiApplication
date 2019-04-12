#pragma once

#include <QWidget>
#include "ui_StudentMenu.h"

class StudentMenu : public QWidget
{
	Q_OBJECT

public:
	StudentMenu(QWidget *parent = Q_NULLPTR);
	~StudentMenu();

private:
	Ui::StudentMenu ui;
};
