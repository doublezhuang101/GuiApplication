#pragma once

#include <QWidget>
#include "ui_RankPage.h"

class RankPage : public QWidget
{
	Q_OBJECT

public:
	RankPage(QWidget *parent = Q_NULLPTR);
	~RankPage();

private:
	Ui::RankPage ui;
};
