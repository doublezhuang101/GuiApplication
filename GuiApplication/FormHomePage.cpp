#include "FormHomePage.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif


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
