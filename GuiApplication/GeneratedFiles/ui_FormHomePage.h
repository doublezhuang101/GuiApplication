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
#include <QtWidgets/QLabel>
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
    QLabel *label;

    void setupUi(QWidget *FormHomePage)
    {
        if (FormHomePage->objectName().isEmpty())
            FormHomePage->setObjectName(QString::fromUtf8("FormHomePage"));
        FormHomePage->resize(924, 593);
        tableView = new QTableView(FormHomePage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 20, 901, 501));
        pushButton = new QPushButton(FormHomePage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(720, 530, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        pushButton_2 = new QPushButton(FormHomePage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 530, 131, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label = new QLabel(FormHomePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-20, -10, 961, 631));
        label->setPixmap(QPixmap(QString::fromUtf8("background.jpg")));
        label->raise();
        tableView->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(FormHomePage);

        QMetaObject::connectSlotsByName(FormHomePage);
    } // setupUi

    void retranslateUi(QWidget *FormHomePage)
    {
        FormHomePage->setWindowTitle(QApplication::translate("FormHomePage", "FormHomePage", nullptr));
        pushButton->setText(QApplication::translate("FormHomePage", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("FormHomePage", "\346\230\276\347\244\272\346\225\260\346\215\256", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormHomePage: public Ui_FormHomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMHOMEPAGE_H
