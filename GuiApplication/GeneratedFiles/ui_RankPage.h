/********************************************************************************
** Form generated from reading UI file 'RankPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKPAGE_H
#define UI_RANKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RankPage
{
public:
    QTableView *tableView;
    QPushButton *CstudyButton;
    QPushButton *MathButton;
    QPushButton *EnglishButton;
    QPushButton *EXIT;

    void setupUi(QWidget *RankPage)
    {
        if (RankPage->objectName().isEmpty())
            RankPage->setObjectName(QString::fromUtf8("RankPage"));
        RankPage->resize(803, 516);
        tableView = new QTableView(RankPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 30, 751, 371));
        CstudyButton = new QPushButton(RankPage);
        CstudyButton->setObjectName(QString::fromUtf8("CstudyButton"));
        CstudyButton->setGeometry(QRect(230, 450, 121, 23));
        MathButton = new QPushButton(RankPage);
        MathButton->setObjectName(QString::fromUtf8("MathButton"));
        MathButton->setGeometry(QRect(380, 450, 121, 23));
        EnglishButton = new QPushButton(RankPage);
        EnglishButton->setObjectName(QString::fromUtf8("EnglishButton"));
        EnglishButton->setGeometry(QRect(520, 450, 121, 23));
        EXIT = new QPushButton(RankPage);
        EXIT->setObjectName(QString::fromUtf8("EXIT"));
        EXIT->setGeometry(QRect(670, 450, 101, 23));
        EXIT->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));

        retranslateUi(RankPage);

        QMetaObject::connectSlotsByName(RankPage);
    } // setupUi

    void retranslateUi(QWidget *RankPage)
    {
        RankPage->setWindowTitle(QApplication::translate("RankPage", "RankPage", nullptr));
        CstudyButton->setText(QApplication::translate("RankPage", "PushButton", nullptr));
        MathButton->setText(QApplication::translate("RankPage", "PushButton", nullptr));
        EnglishButton->setText(QApplication::translate("RankPage", "PushButton", nullptr));
        EXIT->setText(QApplication::translate("RankPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RankPage: public Ui_RankPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKPAGE_H
