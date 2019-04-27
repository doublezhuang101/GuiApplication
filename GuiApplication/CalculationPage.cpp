#include "CalculationPage.h"
#include <qsqlquery.h>
#include <qdebug.h>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

CalculationPage::CalculationPage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.pushButton->setText("返回上一级");
	CalculatingGrades();
	//connect(ui.pushButton_2, &QPushButton::clicked, this, &CalculationPage::CalculatingGrades);
	connect(ui.pushButton, &QPushButton::clicked, this, &CalculationPage::close);
}

void CalculationPage::CalculatingGrades()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");//主机名
	db.setPort(3306);//本地端口号
	db.setDatabaseName("mysql");
	db.setUserName("root");
	db.setPassword("kuandong1227");//设置数据库连接账号的密码
	db.open();
	QString temp2 = "SELECT AVG(`高等数学成绩`) AS OrderAverage FROM `password`.`studentinformation`";
	QSqlQuery query2(temp2);
	while (query2.next())
	{
		QString temp3 = query2.value(0).toString();
		ui.label_5->setText(temp3);
	}

	QString temp = "SELECT AVG(`C语言程序设计成绩`) AS OrderAverage FROM `password`.`studentinformation`";
	QSqlQuery query1(temp);
	while (query1.next())
	{
		QString temp1 = query1.value(0).toString();
		ui.label_3->setText(temp1);
	}

	QString temp4 = "SELECT AVG(`大学英语成绩`) AS OrderAverage FROM `password`.`studentinformation`";
	QSqlQuery query3(temp4);
	while (query3.next())
	{
		QString temp5 = query3.value(0).toString();
		ui.label_7->setText(temp5);
	}

}

CalculationPage::~CalculationPage()
{
}
