#include "RankPage.h"
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
	ui.EXIT->setText("返回上一级");
	connect(ui.EXIT, &QPushButton::clicked, this, &RankPage::close);
}

RankPage::~RankPage()
{
}
