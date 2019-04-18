#include "RankPage.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif


RankPage::RankPage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowTitle(QString::fromUtf8("Dialog"));
}

RankPage::~RankPage()
{
}
