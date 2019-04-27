#include "CalculationPage.h"
#include <qsqlquery.h>
#include <qdebug.h>

CalculationPage::CalculationPage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.pushButton->setText("返回上一级");
	connect(ui.pushButton_2, &QPushButton::clicked, this, &CalculationPage::CalculatingGrades);
}

void CalculationPage::CalculatingGrades()
{
	QString temp = "SELECT AVG(`高等数学成绩`) AS OrderAverage FROM `password`.`studentinformation`";
	QSqlQuery query1(temp);
	QString temp1 = query1.value(0).toString();
}

CalculationPage::~CalculationPage()
{
}
