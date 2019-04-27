#pragma once

#include <QWidget>
#include "ui_RankPage.h"

class RankPage : public QWidget
{
	Q_OBJECT

public:
	RankPage(QWidget *parent = Q_NULLPTR);
	~RankPage();
private Q_SLOT:
	void RankDesign();
	void RankMath();
	void RankEnglish();
	void RankDesignDown();
	void RankMathDown();
	void RankEnglishDown();
private:
	Ui::RankPage ui;
};
