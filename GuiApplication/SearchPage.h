#pragma once

#include <QWidget>
#include "ui_SearchPage.h"

class SearchPage : public QWidget
{
	Q_OBJECT

public:
	SearchPage(QWidget *parent = Q_NULLPTR);
	~SearchPage();

private:
	Ui::SearchPage ui;
};
