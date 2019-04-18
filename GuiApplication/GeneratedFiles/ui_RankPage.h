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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RankPage
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *RankPage)
    {
        if (RankPage->objectName().isEmpty())
            RankPage->setObjectName(QString::fromUtf8("RankPage"));
        RankPage->resize(705, 464);
        label = new QLabel(RankPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 70, 401, 271));
        label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Double_zhuang/Desktop/\346\226\260\345\273\272\346\226\207\344\273\266\345\244\271/2.jpeg")));
        label->setScaledContents(true);
        pushButton = new QPushButton(RankPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 310, 75, 23));
        pushButton_2 = new QPushButton(RankPage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 350, 75, 23));
        pushButton_3 = new QPushButton(RankPage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(590, 390, 75, 23));

        retranslateUi(RankPage);

        QMetaObject::connectSlotsByName(RankPage);
    } // setupUi

    void retranslateUi(QWidget *RankPage)
    {
        RankPage->setWindowTitle(QApplication::translate("RankPage", "RankPage", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("RankPage", "\346\211\223\345\274\200video", nullptr));
        pushButton_2->setText(QApplication::translate("RankPage", "\346\213\215\347\205\247", nullptr));
        pushButton_3->setText(QApplication::translate("RankPage", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RankPage: public Ui_RankPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKPAGE_H
