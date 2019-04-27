/********************************************************************************
** Form generated from reading UI file 'CalculationPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATIONPAGE_H
#define UI_CALCULATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculationPage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_8;

    void setupUi(QWidget *CalculationPage)
    {
        if (CalculationPage->objectName().isEmpty())
            CalculationPage->setObjectName(QString::fromUtf8("CalculationPage"));
        CalculationPage->resize(931, 603);
        label = new QLabel(CalculationPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 60, 411, 91));
        label->setStyleSheet(QString::fromUtf8("font: 34pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_2 = new QLabel(CalculationPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 170, 271, 111));
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_3 = new QLabel(CalculationPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 180, 121, 91));
        label_3->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_4 = new QLabel(CalculationPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(450, 170, 271, 111));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_5 = new QLabel(CalculationPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(690, 180, 171, 91));
        label_5->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_6 = new QLabel(CalculationPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 390, 241, 81));
        label_6->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_7 = new QLabel(CalculationPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 390, 151, 81));
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        pushButton = new QPushButton(CalculationPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(700, 520, 151, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_8 = new QLabel(CalculationPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(-20, -20, 971, 641));
        label_8->setPixmap(QPixmap(QString::fromUtf8("background.jpg")));
        label_8->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        pushButton->raise();

        retranslateUi(CalculationPage);

        QMetaObject::connectSlotsByName(CalculationPage);
    } // setupUi

    void retranslateUi(QWidget *CalculationPage)
    {
        CalculationPage->setWindowTitle(QApplication::translate("CalculationPage", "CalculationPage", nullptr));
        label->setText(QApplication::translate("CalculationPage", "\345\220\204\347\247\221\345\271\263\345\235\207\346\210\220\347\273\251\357\274\232", nullptr));
        label_2->setText(QApplication::translate("CalculationPage", "C\350\257\255\350\250\200\350\257\276\347\250\213\350\256\276\350\256\241\345\271\263\345\235\207\346\210\220\347\273\251\357\274\232", nullptr));
        label_3->setText(QApplication::translate("CalculationPage", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("CalculationPage", "\351\253\230\347\255\211\346\225\260\345\255\246\345\271\263\345\235\207\346\210\220\347\273\251\357\274\232", nullptr));
        label_5->setText(QApplication::translate("CalculationPage", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("CalculationPage", "\345\244\247\345\255\246\350\213\261\350\257\255\345\271\263\345\235\207\346\210\220\347\273\251\357\274\232", nullptr));
        label_7->setText(QApplication::translate("CalculationPage", "TextLabel", nullptr));
        pushButton->setText(QString());
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CalculationPage: public Ui_CalculationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATIONPAGE_H
