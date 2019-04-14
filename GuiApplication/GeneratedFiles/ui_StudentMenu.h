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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentMenu
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *Exit;
    QLabel *label_2;

    void setupUi(QWidget *StudentMenu)
    {
        if (StudentMenu->objectName().isEmpty())
            StudentMenu->setObjectName(QString::fromUtf8("StudentMenu"));
        StudentMenu->resize(839, 520);
        label = new QLabel(StudentMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, -10, 871, 541));
        label->setPixmap(QPixmap(QString::fromUtf8("../../QtGuiApplication/QtGuiApplication1/normal background.jpg")));
        label->setScaledContents(true);
        pushButton = new QPushButton(StudentMenu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 130, 251, 31));
        pushButton_2 = new QPushButton(StudentMenu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 170, 251, 31));
        pushButton_3 = new QPushButton(StudentMenu);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 210, 251, 31));
        pushButton_4 = new QPushButton(StudentMenu);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(270, 250, 251, 31));
        pushButton_5 = new QPushButton(StudentMenu);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(270, 290, 251, 31));
        pushButton_6 = new QPushButton(StudentMenu);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(270, 330, 251, 31));
        pushButton_7 = new QPushButton(StudentMenu);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(270, 370, 251, 31));
        Exit = new QPushButton(StudentMenu);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(670, 450, 71, 31));
        label_2 = new QLabel(StudentMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 40, 431, 71));
        label_2->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));

        retranslateUi(StudentMenu);
        QObject::connect(Exit, SIGNAL(clicked()), StudentMenu, SLOT(close()));

        QMetaObject::connectSlotsByName(StudentMenu);
    } // setupUi

    void retranslateUi(QWidget *StudentMenu)
    {
        StudentMenu->setWindowTitle(QApplication::translate("StudentMenu", "StudentMenu", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("StudentMenu", "1.\345\275\225\345\205\245\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        pushButton_2->setText(QApplication::translate("StudentMenu", "2.\345\210\240\351\231\244\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        pushButton_3->setText(QApplication::translate("StudentMenu", "3.\344\277\256\346\224\271\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        pushButton_4->setText(QApplication::translate("StudentMenu", "4.\346\230\276\347\244\272\345\205\250\351\203\250\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        pushButton_5->setText(QApplication::translate("StudentMenu", "5.\350\256\241\347\256\227\345\271\263\345\235\207\346\210\220\347\273\251", nullptr));
        pushButton_6->setText(QApplication::translate("StudentMenu", "6.\346\237\245\350\257\242\345\255\246\347\224\237\346\210\220\347\273\251(\345\255\246\345\217\267\357\274\214\345\247\223\345\220\215)", nullptr));
        pushButton_7->setText(QApplication::translate("StudentMenu", "7.\346\214\211\344\270\200\347\247\221\346\210\220\347\273\251\346\216\222\345\272\217", nullptr));
        Exit->setText(QApplication::translate("StudentMenu", "Exit", nullptr));
        label_2->setText(QApplication::translate("StudentMenu", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentMenu: public Ui_StudentMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMENU_H
