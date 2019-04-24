/********************************************************************************
** Form generated from reading UI file 'FormHomePage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMHOMEPAGE_H
#define UI_FORMHOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormHomePage
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *FormHomePage)
    {
        if (FormHomePage->objectName().isEmpty())
            FormHomePage->setObjectName(QString::fromUtf8("FormHomePage"));
        FormHomePage->resize(904, 462);
        tableView = new QTableView(FormHomePage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 881, 371));
        pushButton = new QPushButton(FormHomePage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(780, 420, 75, 23));
        pushButton_2 = new QPushButton(FormHomePage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(630, 420, 75, 23));

        retranslateUi(FormHomePage);

        QMetaObject::connectSlotsByName(FormHomePage);
    } // setupUi

    void retranslateUi(QWidget *FormHomePage)
    {
        FormHomePage->setWindowTitle(QApplication::translate("FormHomePage", "FormHomePage", nullptr));
        pushButton->setText(QApplication::translate("FormHomePage", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("FormHomePage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormHomePage: public Ui_FormHomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMHOMEPAGE_H
