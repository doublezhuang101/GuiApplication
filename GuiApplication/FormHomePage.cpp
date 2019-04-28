#include "FormHomePage.h"
#include <string>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
using namespace std;

FormHomePage::FormHomePage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.pushButton->setText("返回上一级");
	ConnectMysql();
	connect(ui.pushButton, &QPushButton::clicked, this, &FormHomePage::close);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &FormHomePage::ConnectMysql);
}

void FormHomePage::ConnectMysql()
{
	QSqlDatabase db = InitMySql();//初始化数据库句柄

	bool ok = db.open();
	if (ok)
	{
		qDebug() << "OK";
	}
	else
	{
		qDebug() << "False";
	}//确认是否连接成功
	QSqlQuery query("SELECT studentinformation.`出生年月` ,studentinformation.`学号` FROM  `password`.`studentinformation` LIMIT 0,1000");
	while (query.next())
	{
		QString temp = query.value(0).toString();
		QString temp2 = query.value(1).toString();
		//qDebug() << query.value(0).toString();
		string str = temp.toStdString();
		str.erase(4, 1);//除去第一个-
		str.erase(6, 1);//除去第二个-
		int num = atoi(str.c_str());
		int temp44 = int((20190428-num)/10000);
		string temp3 = to_string(temp44);
		QString q_str = QString::fromStdString(temp3);
		QSqlQuery query("UPDATE `password`.`studentinformation` SET `年龄` = '"
			+ q_str +
			"' WHERE `学号` = '"+temp2+"'");
	}
	if (db.open())
	{
		qDebug() << "success!";
		QSqlQueryModel *model = new QSqlQueryModel();
		model->setQuery("SELECT * FROM `password`.`studentinformation` LIMIT 0,1000");
		ui.tableView->setModel(model);
		QSqlQuery query("show tables from `password`.`studentinformation`");
		while (query.next())
		{
			/*qDebug() << query.value(0).toString();*/
		}
		QSqlQuery query1("select *from `password`.`studentinformation`");
		while (query1.next())
		{
			/*qDebug() << query1.value(0).toString() << query1.value(1).toString();*/
		}
		db.close();
	}
	else
	{
		qDebug() << "fail";
	}
}

QSqlDatabase FormHomePage::InitMySql()
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
	}
	return db;
}

FormHomePage::~FormHomePage()
{
}
