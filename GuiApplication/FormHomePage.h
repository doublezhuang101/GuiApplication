#pragma once

#include <QWidget>
#include "ui_FormHomePage.h"
#include <QtSql>

class FormHomePage : public QWidget
{
	Q_OBJECT

public:
	FormHomePage(QWidget *parent = Q_NULLPTR);
	~FormHomePage();

private:
	Ui::FormHomePage ui;
	QSqlDatabase db; 
};
