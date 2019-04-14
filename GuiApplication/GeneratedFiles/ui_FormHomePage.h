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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormHomePage
{
public:

    void setupUi(QWidget *FormHomePage)
    {
        if (FormHomePage->objectName().isEmpty())
            FormHomePage->setObjectName(QString::fromUtf8("FormHomePage"));
        FormHomePage->resize(400, 300);

        retranslateUi(FormHomePage);

        QMetaObject::connectSlotsByName(FormHomePage);
    } // setupUi

    void retranslateUi(QWidget *FormHomePage)
    {
        FormHomePage->setWindowTitle(QApplication::translate("FormHomePage", "FormHomePage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormHomePage: public Ui_FormHomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMHOMEPAGE_H
