#include "CalculationPage.h"
#include <qsqlquery.h>

CalculationPage::CalculationPage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.pushButton->setText("返回上一级");
}

void CalculationPage::CalculatingGrades()
{
	QString temp = "SELECT AVG(`高等数学成绩`) AS OrderAverage FROM `password`.`studentinformation`";
	QSqlQuery query1(temp);
}

CalculationPage::~CalculationPage()
{
}
