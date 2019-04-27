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
    QPushButton *pushButton_2;

    void setupUi(QWidget *CalculationPage)
    {
        if (CalculationPage->objectName().isEmpty())
            CalculationPage->setObjectName(QString::fromUtf8("CalculationPage"));
        CalculationPage->resize(705, 427);
        label = new QLabel(CalculationPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 331, 71));
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_2 = new QLabel(CalculationPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 170, 121, 16));
        label_3 = new QLabel(CalculationPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 170, 54, 12));
        label_4 = new QLabel(CalculationPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 170, 121, 16));
        label_5 = new QLabel(CalculationPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(480, 170, 54, 12));
        label_6 = new QLabel(CalculationPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 240, 111, 16));
        label_7 = new QLabel(CalculationPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 240, 54, 12));
        pushButton = new QPushButton(CalculationPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(530, 370, 75, 23));
        pushButton_2 = new QPushButton(CalculationPage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 370, 75, 23));

        retranslateUi(CalculationPage);

        QMetaObject::connectSlotsByName(CalculationPage);
    } // setupUi

    void retranslateUi(QWidget *CalculationPage)
    {
        CalculationPage->setWindowTitle(QApplication::translate("CalculationPage", "CalculationPage", nullptr));
        label->setText(QApplication::translate("CalculationPage", "\345\220\204\347\247\221\345\271\263\345\235\207\346\210\220\347\273\251\357\274\232", nullptr));
        label_2->setText(QApplication::translate("CalculationPage", "C\350\257\255\350\250\200\350\257\276\347\250\213\350\256\276\350\256\241\346\210\220\347\273\251\357\274\232", nullptr));
        label_3->setText(QApplication::translate("CalculationPage", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("CalculationPage", "\351\253\230\347\255\211\346\225\260\345\255\246\345\271\263\345\235\207\346\210\220\347\273\251\357\274\232", nullptr));
        label_5->setText(QApplication::translate("CalculationPage", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("CalculationPage", "\345\244\247\345\255\246\350\213\261\350\257\255\345\271\263\345\235\207\346\210\220\347\273\251\357\274\232", nullptr));
        label_7->setText(QApplication::translate("CalculationPage", "TextLabel", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("CalculationPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculationPage: public Ui_CalculationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATIONPAGE_H
