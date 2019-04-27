#include "RevisePage.h"
#include <qmessagebox.h>
#include <qdebug.h>
#include <string>
#include <QSqlQuery>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

RevisePage::RevisePage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton_4, &QPushButton::clicked, this, &RevisePage::close);
	connect(ui.pushButton, &QPushButton::clicked, this, &RevisePage::DateSearch);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &RevisePage::DataRevise);
}

void RevisePage::DateSearch()
{
	qDebug() << "OK";
	QString num = ui.lineEdit->text();
	QString number = ui.lineEdit_2->text();
	QString name = ui.lineEdit_3->text();
	QString sex = ui.lineEdit_4->text();
	QString birthday = ui.lineEdit_5->text();
	QString age = ui.lineEdit_6->text();
	QString cscore = ui.lineEdit_7->text();
	QString math = ui.lineEdit_8->text();
	QString english = ui.lineEdit_9->text();
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");
	db.setPort(3306);
	db.setDatabaseName("mysql");
	db.setUserName("root");
	db.setPassword("kuandong1227");     //设置数据库连接账号的密码
	bool ok = db.open();
	if (ok)
	{
		qDebug() << "OK";
	}
	else
	{
		qDebug() << "False";
	}//确认数据库连接情况
	
	int flag = 0;
	if (num.length())
	{
		QString temp_qt = "select *from `password`.`studentinformation`WHERE studentinformation.`学号`=" + num;
		QSqlQuery query1(temp_qt);
		ui.lineEdit_2->setText("no data");
		ui.lineEdit_3->setText("no data");
		ui.lineEdit_4->setText("no data");
		ui.lineEdit_5->setText("no data");
		ui.lineEdit_6->setText("no data");
		ui.lineEdit_7->setText("no data");
		ui.lineEdit_8->setText("no data");
		ui.lineEdit_9->setText("no data");
		while (query1.next())
		{
			/*qDebug() << query1.value(0).toString() << query1.value(1).toString();*/
			ui.lineEdit_2->setText(query1.value(0).toString());
			ui.lineEdit_3->setText(query1.value(1).toString());
			ui.lineEdit_4->setText(query1.value(2).toString());
			ui.lineEdit_5->setText(query1.value(6).toString());
			ui.lineEdit_6->setText(query1.value(7).toString());
			ui.lineEdit_7->setText(query1.value(3).toString());
			ui.lineEdit_8->setText(query1.value(4).toString());
			ui.lineEdit_9->setText(query1.value(5).toString());
			flag = 1;
		}
		if (flag == 0)
		{
			QMessageBox::warning(this, tr("Warning！"), tr("	不存在该信息！	"));
		}
	}
	else
	{
		QMessageBox::warning(this, tr("Warning！"), tr("	学号不能为空！"));
	}
}

void RevisePage::DataRevise()
{
	QString num = ui.lineEdit->text();
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");//主机名
	db.setPort(3306);//端口号
	db.setDatabaseName("mysql");
	db.setUserName("root");
	db.setPassword("kuandong1227");//设置数据库连接账号的密码
	db.open();
	QString temp_qt = "UPDATE `password`.`studentinformation` SET `学号` = '"
		+ ui.lineEdit_2->text() + "'" + ",`姓名` = "
		+ "'" + ui.lineEdit_3->text() + "'" + ",`性别` = "
		+ "'" + ui.lineEdit_4->text() + "'" + ",`C语言程序设计成绩` = "
		+ "'" + ui.lineEdit_2->text() + "'" + ",`高等数学成绩` = "
		+ "'" + ui.lineEdit_2->text() + "'" + ",`大学英语成绩` = "
		+ "'" + ui.lineEdit_9->text() + "'" + ",`出生年月` = "
		+ "'" + ui.lineEdit_5->text() + "'" + ",`年龄` = "
		+ "'" + ui.lineEdit_6->text();
	temp_qt=temp_qt + "' WHERE `学号` = " + ui.lineEdit->text();
	QSqlQuery query1(temp_qt);
}

RevisePage::~RevisePage()
{
}
