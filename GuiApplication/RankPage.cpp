#include "RankPage.h"
#include <QtSql>
#include <QSqlQuery>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif


RankPage::RankPage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowTitle(QString::fromUtf8("Dialog"));
	ui.CstudyButton->setText("按C语言课设成绩排序");
	ui.EnglishButton->setText("按英语成绩排序");
	ui.MathButton->setText("按高等数学成绩排序");
	ui.pushButton->setText("按C语言课设成绩排序");
	ui.pushButton_2->setText("按英语成绩排序");
	ui.pushButton_3->setText("按高等数学成绩排序");
	ui.EXIT->setText("返回上一级");
	connect(ui.EXIT, &QPushButton::clicked, this, &RankPage::close);
	connect(ui.CstudyButton, &QPushButton::clicked, this, &RankPage::RankDesign);
	connect(ui.EnglishButton, &QPushButton::clicked, this, &RankPage::RankEnglish);
	connect(ui.MathButton, &QPushButton::clicked, this, &RankPage::RankMath);
	connect(ui.pushButton, &QPushButton::clicked, this, &RankPage::RankDesignDown);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &RankPage::RankEnglishDown);
	connect(ui.pushButton_3, &QPushButton::clicked, this, &RankPage::RankMathDown);
}

void RankPage::RankDesign()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");//主机名
	db.setPort(3306);//本地端口号
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
	}//测试数据库连接情况
	if (db.open())
	{
		qDebug() << "success!";
		QSqlQueryModel *model = new QSqlQueryModel();
		model->setQuery("SELECT * FROM `password`.`studentinformation` LIMIT 0,1000");
		ui.tableView->setModel(model);
		QSqlQuery query("show tables from `password`.`studentinformation`");
		QString temp = "SELECT * FROM `password`.`studentinformation` ORDER BY `C语言程序设计成绩` ";//sql默认排序即为升序
		QSqlQuery query1(temp);
		model->setQuery(temp);
		ui.tableView->setModel(model);
		db.close();
	}
	else
	{
		qDebug() << "fail";
	}
}

void RankPage::RankEnglish()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");//主机名
	db.setPort(3306);//本地端口号
	db.setDatabaseName("mysql");
	db.setUserName("root");
	db.setPassword("kuandong1227");     //设置数据库连接账号的密码
	db.open();
	if (db.open())
	{
		qDebug() << "success!";
		QSqlQueryModel *model = new QSqlQueryModel();
		model->setQuery("SELECT * FROM `password`.`studentinformation` LIMIT 0,1000");
		ui.tableView->setModel(model);
		QSqlQuery query("show tables from `password`.`studentinformation`");
		QString temp = "SELECT * FROM `password`.`studentinformation` ORDER BY `大学英语成绩` ";
		QSqlQuery query1(temp);
		model->setQuery(temp);
		ui.tableView->setModel(model);
		db.close();
	}
	else
	{
		qDebug() << "fail";
	}
}

void RankPage::RankMath()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");//主机名
	db.setPort(3306);//本地端口号
	db.setDatabaseName("mysql");
	db.setUserName("root");
	db.setPassword("kuandong1227");     //设置数据库连接账号的密码
	db.open();
	if (db.open())
	{
		qDebug() << "success!";
		QSqlQueryModel *model = new QSqlQueryModel();
		model->setQuery("SELECT * FROM `password`.`studentinformation` LIMIT 0,1000");
		ui.tableView->setModel(model);
		QSqlQuery query("show tables from `password`.`studentinformation`");
		QString temp = "SELECT * FROM `password`.`studentinformation` ORDER BY `高等数学成绩`";
		QSqlQuery query1(temp);
		model->setQuery(temp);
		ui.tableView->setModel(model);
		db.close();
	}
	else
	{
		qDebug() << "fail";
	}
}

void RankPage::RankDesignDown()
{
	//SELECT * FROM `password`.`studentinformation` 
	//FORM C语言课程设 计成绩
	//ORDER BY C语言课程设计成绩 DESC
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");//主机名
	db.setPort(3306);//本地端口号
	db.setDatabaseName("mysql");
	db.setUserName("root");
	db.setPassword("kuandong1227");//设置数据库连接账号的密码
	db.open();
	if (db.open())
	{
		qDebug() << "success!";
		QSqlQueryModel *model = new QSqlQueryModel();
		model->setQuery("SELECT * FROM `password`.`studentinformation` LIMIT 0,1000");
		ui.tableView->setModel(model);
		QSqlQuery query("show tables from `password`.`studentinformation`");
		QString temp = "SELECT * FROM `password`.`studentinformation` ORDER BY `C语言程序设计成绩` DESC LIMIT 0,1000 ";//DESC为降序关键字
		QSqlQuery query1(temp);
		model->setQuery(temp);
		ui.tableView->setModel(model);
		db.close();
	}
	else
	{
		qDebug() << "fail";
	}
}

void RankPage::RankEnglishDown()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");//主机名
	db.setPort(3306);//本地端口号
	db.setDatabaseName("mysql");
	db.setUserName("root");
	db.setPassword("kuandong1227");//设置数据库连接账号的密码
	db.open();
	if (db.open())
	{
		qDebug() << "success!";
		QSqlQueryModel *model = new QSqlQueryModel();
		model->setQuery("SELECT * FROM `password`.`studentinformation` LIMIT 0,1000");
		ui.tableView->setModel(model);
		QSqlQuery query("show tables from `password`.`studentinformation`");
		QString temp = "SELECT * FROM `password`.`studentinformation` ORDER BY `大学英语成绩` DESC LIMIT 0,1000";
		QSqlQuery query1(temp);
		model->setQuery(temp);
		ui.tableView->setModel(model);
		db.close();
	}
	else
	{
		qDebug() << "fail";
	}
}

void RankPage::RankMathDown()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");//主机名
	db.setPort(3306);//本地端口号
	db.setDatabaseName("mysql");
	db.setUserName("root");
	db.setPassword("kuandong1227");//设置数据库连接账号的密码
	db.open();
	if (db.open())
	{
		qDebug() << "success!";
		QSqlQueryModel *model = new QSqlQueryModel();
		model->setQuery("SELECT * FROM `password`.`studentinformation` LIMIT 0,1000");
		ui.tableView->setModel(model);
		QSqlQuery query("show tables from `password`.`studentinformation`");
		QString temp = "SELECT * FROM `password`.`studentinformation` ORDER BY `高等数学成绩` DESC LIMIT 0,1000";
		QSqlQuery query1(temp);
		model->setQuery(temp);
		ui.tableView->setModel(model);
		db.close();
	}
	else
	{
		qDebug() << "fail";
	}
}
RankPage::~RankPage()
{
}
