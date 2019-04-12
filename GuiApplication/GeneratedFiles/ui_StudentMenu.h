/********************************************************************************
** Form generated from reading UI file 'StudentMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMENU_H
#define UI_STUDENTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentMenu
{
public:

    void setupUi(QWidget *StudentMenu)
    {
        if (StudentMenu->objectName().isEmpty())
            StudentMenu->setObjectName(QString::fromUtf8("StudentMenu"));
        StudentMenu->resize(400, 300);

        retranslateUi(StudentMenu);

        QMetaObject::connectSlotsByName(StudentMenu);
    } // setupUi

    void retranslateUi(QWidget *StudentMenu)
    {
        StudentMenu->setWindowTitle(QApplication::translate("StudentMenu", "StudentMenu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentMenu: public Ui_StudentMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMENU_H
