#include "GuiApplication.h"
#include <QtWidgets/QApplication>
#include <QtSql>
#include <qdebug.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GuiApplication w;
	w.show();
	//QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	//db.setHostName("localhost");
	//db.setPort(3306);
	//db.setDatabaseName("mysql");
	//db.setUserName("root");
	//db.setPassword("kuandong1227");     //设置数据库连接账号的密码
	//bool ok = db.open();
	//if (ok)  qDebug() << "OK";
	//else qDebug() << "False";
	return a.exec();
}
