#pragma once

#include <QWidget>
#include "ui_EntryPage.h"

class EntryPage : public QWidget
{
	Q_OBJECT

public:
	EntryPage(QWidget *parent = Q_NULLPTR);
	~EntryPage();
private	Q_SLOT:
	void ConfirmEntry();
private:
	Ui::EntryPage ui;
};
