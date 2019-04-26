#pragma once

#include <QWidget>
#include "ui_RevisePage.h"

class RevisePage : public QWidget
{
	Q_OBJECT

public:
	RevisePage(QWidget *parent = Q_NULLPTR);
	~RevisePage();
private Q_SLOT:
	void DateSearch();
private:
	Ui::RevisePage ui;
};
