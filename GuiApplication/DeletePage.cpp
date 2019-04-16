#include "DeletePage.h"

DeletePage::DeletePage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.label->setText("请输入要查询的学号:");
	connect(ui.pushButton_2, &QPushButton::clicked, this, &DeletePage::close);
}

DeletePage::~DeletePage()
{
}
