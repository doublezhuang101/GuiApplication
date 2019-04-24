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
    QPushButton *EntryButton;
    QPushButton *DeleteButton;
    QPushButton *ReviseButton;
    QPushButton *DisPlayButton;
    QPushButton *CalculationButton;
    QPushButton *SearchButton;
    QPushButton *RankButton;
    QPushButton *Exit;
    QLabel *label_2;

    void setupUi(QWidget *StudentMenu)
    {
        if (StudentMenu->objectName().isEmpty())
            StudentMenu->setObjectName(QString::fromUtf8("StudentMenu"));
        StudentMenu->resize(839, 520);
        label = new QLabel(StudentMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-20, 0, 871, 541));
        label->setPixmap(QPixmap(QString::fromUtf8("../../QtGuiApplication/QtGuiApplication1/normal background.jpg")));
        label->setScaledContents(true);
        EntryButton = new QPushButton(StudentMenu);
        EntryButton->setObjectName(QString::fromUtf8("EntryButton"));
        EntryButton->setGeometry(QRect(270, 130, 251, 31));
        DeleteButton = new QPushButton(StudentMenu);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));
        DeleteButton->setGeometry(QRect(270, 170, 251, 31));
        ReviseButton = new QPushButton(StudentMenu);
        ReviseButton->setObjectName(QString::fromUtf8("ReviseButton"));
        ReviseButton->setGeometry(QRect(270, 210, 251, 31));
        DisPlayButton = new QPushButton(StudentMenu);
        DisPlayButton->setObjectName(QString::fromUtf8("DisPlayButton"));
        DisPlayButton->setGeometry(QRect(270, 250, 251, 31));
        CalculationButton = new QPushButton(StudentMenu);
        CalculationButton->setObjectName(QString::fromUtf8("CalculationButton"));
        CalculationButton->setGeometry(QRect(270, 290, 251, 31));
        SearchButton = new QPushButton(StudentMenu);
        SearchButton->setObjectName(QString::fromUtf8("SearchButton"));
        SearchButton->setGeometry(QRect(270, 330, 251, 31));
        RankButton = new QPushButton(StudentMenu);
        RankButton->setObjectName(QString::fromUtf8("RankButton"));
        RankButton->setGeometry(QRect(270, 370, 251, 31));
        Exit = new QPushButton(StudentMenu);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(670, 450, 71, 31));
        label_2 = new QLabel(StudentMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 40, 431, 71));
        label_2->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));

        retranslateUi(StudentMenu);

        QMetaObject::connectSlotsByName(StudentMenu);
    } // setupUi

    void retranslateUi(QWidget *StudentMenu)
    {
        StudentMenu->setWindowTitle(QApplication::translate("StudentMenu", "StudentMenu", nullptr));
        label->setText(QString());
        EntryButton->setText(QApplication::translate("StudentMenu", "1.\345\275\225\345\205\245\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        DeleteButton->setText(QApplication::translate("StudentMenu", "2.\345\210\240\351\231\244\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        ReviseButton->setText(QApplication::translate("StudentMenu", "3.\344\277\256\346\224\271\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        DisPlayButton->setText(QApplication::translate("StudentMenu", "4.\346\230\276\347\244\272\345\205\250\351\203\250\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        CalculationButton->setText(QApplication::translate("StudentMenu", "5.\350\256\241\347\256\227\345\271\263\345\235\207\346\210\220\347\273\251", nullptr));
        SearchButton->setText(QApplication::translate("StudentMenu", "6.\346\237\245\350\257\242\345\255\246\347\224\237\346\210\220\347\273\251(\345\255\246\345\217\267\357\274\214\345\247\223\345\220\215)", nullptr));
        RankButton->setText(QApplication::translate("StudentMenu", "7.\346\214\211\345\215\225\347\247\221\346\210\220\347\273\251\346\216\222\345\272\217", nullptr));
        Exit->setText(QApplication::translate("StudentMenu", "Exit", nullptr));
        label_2->setText(QApplication::translate("StudentMenu", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentMenu: public Ui_StudentMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMENU_H
