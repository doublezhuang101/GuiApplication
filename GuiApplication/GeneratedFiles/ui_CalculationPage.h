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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculationPage
{
public:

    void setupUi(QWidget *CalculationPage)
    {
        if (CalculationPage->objectName().isEmpty())
            CalculationPage->setObjectName(QString::fromUtf8("CalculationPage"));
        CalculationPage->resize(400, 300);

        retranslateUi(CalculationPage);

        QMetaObject::connectSlotsByName(CalculationPage);
    } // setupUi

    void retranslateUi(QWidget *CalculationPage)
    {
        CalculationPage->setWindowTitle(QApplication::translate("CalculationPage", "CalculationPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculationPage: public Ui_CalculationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATIONPAGE_H
