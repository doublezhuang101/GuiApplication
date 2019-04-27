#include "DeletePage.h"
#include <qmessagebox.h>
#include <qdebug.h>
#include <string>
#include <QSqlQuery>
#include "FormHomePage.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
using namespace std;

DeletePage::DeletePage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.label->setText("请输入要查询的学号:");
	ui.pushButton_2->setText("返回上一级");
	ui.lineEdit->setText("2018023417");
	ui.label_11->setText("");
	ui.label_12->setText(""); 
	ui.label_13->setText("");
	ui.label_14->setText("");
	ui.label_15->setText("");
	ui.label_16->setText("");
	ui.label_17->setText("");
	ui.label_18->setText("");
	connect(ui.pushButton_2, &QPushButton::clicked, this, &DeletePage::close);
	connect(ui.SearchButton, &QPushButton::clicked, this, &DeletePage::DataSearch);
	connect(ui.deleteButton, &QPushButton::clicked, this, &DeletePage::DataDelete);
	connect(ui.pushButton, &QPushButton::clicked, this, &DeletePage::DeletePeople);
}

void DeletePage::DataSearch()
{
	qDebug() << "OK";
	QString num = ui.lineEdit->text();
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");//主机名
	db.setPort(3306);//端口号
	db.setDatabaseName("mysql");
	db.setUserName("root");
	db.setPassword("kuandong1227");//设置数据库连接账号的密码
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

void DeletePage::DataDelete()
{
	QString temp_qt = "UPDATE `password`.`studentinformation` SET";
	int flag = 0;
	if (ui.checkBox->isChecked() == true)
	{
		if (flag == 0)
		{
			temp_qt = temp_qt + "`C语言程序设计成绩` = ''";
			flag = 1;
		}
	}
	if(ui.checkBox_2->isChecked() == true)
	{
		if (flag == 0)
		{
			temp_qt = temp_qt + "`高等数学成绩` = ''";
			flag = 1;
		}
		else
		{
			temp_qt = temp_qt + ",`高等数学成绩` = ''";
		}
	}
	if (ui.checkBox_3->isChecked() == true)
	{
		if (flag == 0)
		{
			temp_qt = temp_qt + "`大学英语成绩` = ''";
			flag = 1;
		}
		else
		{
			temp_qt = temp_qt + ",`大学英语成绩` = ''";
		}
	}
	temp_qt = temp_qt + " WHERE `学号` = " + ui.label_11->text();
	QSqlQuery query1(temp_qt);
}

void DeletePage::DeletePeople()
{
	QString temp_qt = "DELETE FROM `password`.`studentinformation` WHERE `学号` =  "+ ui.label_11->text();
	QSqlQuery query1(temp_qt);
}

DeletePage::~DeletePage()
{
}
