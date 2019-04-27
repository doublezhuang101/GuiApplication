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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_3;

    void setupUi(QWidget *RankPage)
    {
        if (RankPage->objectName().isEmpty())
            RankPage->setObjectName(QString::fromUtf8("RankPage"));
        RankPage->resize(923, 590);
        tableView = new QTableView(RankPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 901, 461));
        CstudyButton = new QPushButton(RankPage);
        CstudyButton->setObjectName(QString::fromUtf8("CstudyButton"));
        CstudyButton->setGeometry(QRect(150, 490, 191, 31));
        CstudyButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        MathButton = new QPushButton(RankPage);
        MathButton->setObjectName(QString::fromUtf8("MathButton"));
        MathButton->setGeometry(QRect(360, 490, 161, 31));
        MathButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        EnglishButton = new QPushButton(RankPage);
        EnglishButton->setObjectName(QString::fromUtf8("EnglishButton"));
        EnglishButton->setGeometry(QRect(540, 490, 161, 31));
        EnglishButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        EXIT = new QPushButton(RankPage);
        EXIT->setObjectName(QString::fromUtf8("EXIT"));
        EXIT->setGeometry(QRect(730, 510, 151, 41));
        EXIT->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label = new QLabel(RankPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 535, 121, 41));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_2 = new QLabel(RankPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 480, 131, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        pushButton = new QPushButton(RankPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 540, 191, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        pushButton_2 = new QPushButton(RankPage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 540, 161, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        pushButton_3 = new QPushButton(RankPage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 540, 161, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_3 = new QLabel(RankPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-10, -20, 941, 621));
        label_3->setPixmap(QPixmap(QString::fromUtf8("background.jpg")));
        label_3->raise();
        tableView->raise();
        CstudyButton->raise();
        MathButton->raise();
        EnglishButton->raise();
        EXIT->raise();
        label->raise();
        label_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();

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
        label->setText(QApplication::translate("RankPage", "\351\231\215\345\272\217\346\216\222\345\272\217", nullptr));
        label_2->setText(QApplication::translate("RankPage", "\345\215\207\345\272\217\346\216\222\345\272\217", nullptr));
        pushButton->setText(QApplication::translate("RankPage", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("RankPage", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("RankPage", "PushButton", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RankPage: public Ui_RankPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKPAGE_H
