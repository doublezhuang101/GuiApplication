#pragma once

#include <QWidget>
#include "ui_CalculationPage.h"

class CalculationPage : public QWidget
{
	Q_OBJECT

public:
	CalculationPage(QWidget *parent = Q_NULLPTR);
	~CalculationPage();
	void CalculatingGrades();
private:
	Ui::CalculationPage ui;
};
