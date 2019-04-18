#include "SearchPage.h"

SearchPage::SearchPage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.Exit, &QPushButton::clicked, this, &SearchPage::close);
}

SearchPage::~SearchPage()
{
}
