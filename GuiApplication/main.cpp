#include "GuiApplication.h"
#include <QtWidgets/QApplication>
#include <qdebug.h>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

using namespace std;

int main(int argc, char *argv[])
{
	
	QApplication a(argc, argv);

	QString strPath = QApplication::applicationDirPath();
	strPath = strPath + "E:\\Study Code\\1\\x64\\Debug\\tobiichi_origami.png";
	a.setWindowIcon(QIcon(strPath));

	GuiApplication w;
	w.show();
	return a.exec();

}
