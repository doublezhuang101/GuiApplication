#include "GuiApplication.h"
#include <iostream>
#include <QtWidgets/QApplication>
#include <qdebug.h>
using namespace std;

int main(int argc, char *argv[])
{
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
	QApplication a(argc, argv);
	GuiApplication w;
	w.show();
	
	return a.exec();
	//cout << "hello world" << endl;
	//return 0;
}
//
//int main()
//{
//	cout << "hello world" << endl;
//	qDebug() << "OK";
//
//	return 0;
//}