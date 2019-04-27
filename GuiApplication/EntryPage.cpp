#include "EntryPage.h"
#include <QSqlQuery>
#include <QtSql>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

EntryPage::EntryPage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.Exit->setText("返回上一级");
	ui.ConfirmButton->setText("确认录入");
	connect(ui.Exit, &QPushButton::clicked, this, &EntryPage::close);
	connect(ui.ConfirmButton, &QPushButton::clicked, this, &EntryPage::ConfirmEntry);
}

void EntryPage::ConfirmEntry()
{
	QString num = ui.lineEdit->text();
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");//主机名
	db.setPort(3306);//端口号
	db.setDatabaseName("mysql");
	db.setUserName("root");
	db.setPassword("kuandong1227");//设置数据库连接账号的密码
	db.open();
	//QString number = ;
	//QString name = ui.lineEdit_2->text();
	//QString sex = ;
	//QString birthday = ui.lineEdit_4->text();
	//QString age = ui.lineEdit_5->text();
	//QString cscore = ui.lineEdit_6->text();
	//QString math = ui.lineEdit_7->text();
	//QString english = ui.lineEdit_8->text();
	QString temp = "INSERT INTO `password`.`studentinformation`(`学号`, `姓名`, `性别`, `C语言程序设计成绩`, `高等数学成绩`, `大学英语成绩`, `出生年月`, `年龄`)VALUES ( ";
	temp = temp + "'" + ui.lineEdit->text() + "'" + "," 
				+ "'" + ui.lineEdit_2->text() + "'" + ","
				+ "'" + ui.lineEdit_3->text() + "'" + ","
				+ "'" + ui.lineEdit_4->text() + "'" + ","
				+ "'" + ui.lineEdit_5->text() + "'" + ","
				+ "'" + ui.lineEdit_6->text() + "'" + ","
				+ "'" + ui.lineEdit_7->text() + "'" + ","
				+ "'" + ui.lineEdit_8->text() + "'" + ")";
	QSqlQuery query1(temp);
}

EntryPage::~EntryPage()
{
}
