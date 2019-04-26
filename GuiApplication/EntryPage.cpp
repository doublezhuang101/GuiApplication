#include "EntryPage.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

EntryPage::EntryPage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.Exit->setText("返回上一级");
	ui.ConfirmButton->setText("确认录入");
	connect(ui.Exit, &QPushButton::clicked, this, &EntryPage::close);
	connect(ui.ConfirmButton, &QPushButton::clicked, this, &EntryPage::ConfirmEntry);
}

void EntryPage::ConfirmEntry()
{
	QString number = ui.lineEdit->text();
	QString name = ui.lineEdit_2->text();
	QString sex = ui.lineEdit_3->text();
	QString birthday = ui.lineEdit_4->text();
	QString age = ui.lineEdit_5->text();
	QString cscore = ui.lineEdit_6->text();
	QString math = ui.lineEdit_7->text();
	QString english = ui.lineEdit_8->text();
}

EntryPage::~EntryPage()
{
}
