#pragma once

#include <QWidget>
#include "ui_DeletePage.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

class DeletePage : public QWidget
{
	Q_OBJECT

public:
	DeletePage(QWidget *parent = Q_NULLPTR);
	~DeletePage();
private Q_SLOT:
	void DataSearch();
private:
	Ui::DeletePage ui;
};
