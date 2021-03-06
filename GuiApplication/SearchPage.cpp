#include "SearchPage.h"
#include <qmessagebox.h>
#include <qdebug.h>
#include <string>
#include <QSqlQuery>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif


SearchPage::SearchPage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.label->setText("请输入要查询的学号:");
	ui.label_11->setText("");
	ui.label_12->setText("");
	ui.label_13->setText("");
	ui.label_14->setText("");
	ui.label_15->setText("");
	ui.label_16->setText("");
	ui.label_17->setText("");
	ui.label_18->setText("");
	connect(ui.Exit, &QPushButton::clicked, this, &SearchPage::close);
	connect(ui.pushButton, &QPushButton::clicked, this, &SearchPage::DataSearch);
}

void SearchPage::DataSearch()
{
	qDebug() << "OK";
	QString num = ui.lineEdit->text();
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
	}
	//以上为初始化数据连接

	int flag = 0;
	if (num.length())
	{
		QString temp_qt = "select *from `password`.`studentinformation`WHERE studentinformation.`学号`=" + num;
		QSqlQuery query1(temp_qt);
		ui.label_11->setText("no data");
		ui.label_12->setText("no data");
		ui.label_13->setText("no data");
		ui.label_14->setText("no data");
		ui.label_15->setText("no data");
		ui.label_16->setText("no data");
		ui.label_17->setText("no data");
		ui.label_18->setText("no data");

		while (query1.next())
		{
			/*qDebug() << query1.value(0).toString() << query1.value(1).toString();*/
			ui.label_11->setText(query1.value(0).toString());
			ui.label_12->setText(query1.value(1).toString());
			ui.label_13->setText(query1.value(2).toString());
			ui.label_14->setText(query1.value(6).toString());
			ui.label_15->setText(query1.value(7).toString());
			ui.label_16->setText(query1.value(3).toString());
			ui.label_17->setText(query1.value(4).toString());
			ui.label_18->setText(query1.value(5).toString());
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

SearchPage::~SearchPage()
{
}
