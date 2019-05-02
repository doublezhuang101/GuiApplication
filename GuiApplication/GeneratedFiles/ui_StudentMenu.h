/********************************************************************************
** Form generated from reading UI file 'StudentMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
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
    QPushButton *EntryButton;
    QPushButton *DeleteButton;
    QPushButton *ReviseButton;
    QPushButton *DisPlayButton;
    QPushButton *CalculationButton;
    QPushButton *SearchButton;
    QPushButton *RankButton;
    QPushButton *Exit;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *StudentMenu)
    {
        if (StudentMenu->objectName().isEmpty())
            StudentMenu->setObjectName(QStringLiteral("StudentMenu"));
        StudentMenu->resize(910, 581);
        EntryButton = new QPushButton(StudentMenu);
        EntryButton->setObjectName(QStringLiteral("EntryButton"));
        EntryButton->setGeometry(QRect(280, 130, 301, 41));
        EntryButton->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        DeleteButton = new QPushButton(StudentMenu);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setGeometry(QRect(280, 180, 301, 41));
        DeleteButton->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        ReviseButton = new QPushButton(StudentMenu);
        ReviseButton->setObjectName(QStringLiteral("ReviseButton"));
        ReviseButton->setGeometry(QRect(280, 230, 301, 41));
        ReviseButton->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        DisPlayButton = new QPushButton(StudentMenu);
        DisPlayButton->setObjectName(QStringLiteral("DisPlayButton"));
        DisPlayButton->setGeometry(QRect(280, 280, 301, 41));
        DisPlayButton->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        CalculationButton = new QPushButton(StudentMenu);
        CalculationButton->setObjectName(QStringLiteral("CalculationButton"));
        CalculationButton->setGeometry(QRect(280, 330, 301, 41));
        CalculationButton->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        SearchButton = new QPushButton(StudentMenu);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        SearchButton->setGeometry(QRect(280, 380, 301, 41));
        SearchButton->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        RankButton = new QPushButton(StudentMenu);
        RankButton->setObjectName(QStringLiteral("RankButton"));
        RankButton->setGeometry(QRect(280, 430, 301, 41));
        RankButton->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        Exit = new QPushButton(StudentMenu);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(710, 510, 141, 31));
        Exit->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_2 = new QLabel(StudentMenu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 40, 431, 71));
        label_2->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_3 = new QLabel(StudentMenu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-10, -10, 931, 591));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../QtGuiApplication/QtGuiApplication1/normal background.jpg")));
        label_3->setScaledContents(true);
        label_3->raise();
        EntryButton->raise();
        DeleteButton->raise();
        ReviseButton->raise();
        DisPlayButton->raise();
        CalculationButton->raise();
        SearchButton->raise();
        RankButton->raise();
        Exit->raise();
        label_2->raise();

        retranslateUi(StudentMenu);

        QMetaObject::connectSlotsByName(StudentMenu);
    } // setupUi

    void retranslateUi(QWidget *StudentMenu)
    {
        StudentMenu->setWindowTitle(QApplication::translate("StudentMenu", "StudentMenu", nullptr));
        EntryButton->setText(QApplication::translate("StudentMenu", "1.\345\275\225\345\205\245\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        DeleteButton->setText(QApplication::translate("StudentMenu", "2.\345\210\240\351\231\244\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        ReviseButton->setText(QApplication::translate("StudentMenu", "3.\344\277\256\346\224\271\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        DisPlayButton->setText(QApplication::translate("StudentMenu", "4.\346\230\276\347\244\272\345\205\250\351\203\250\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        CalculationButton->setText(QApplication::translate("StudentMenu", "5.\350\256\241\347\256\227\345\271\263\345\235\207\346\210\220\347\273\251", nullptr));
        SearchButton->setText(QApplication::translate("StudentMenu", "6.\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        RankButton->setText(QApplication::translate("StudentMenu", "7.\346\214\211\345\215\225\347\247\221\346\210\220\347\273\251\346\216\222\345\272\217", nullptr));
        Exit->setText(QApplication::translate("StudentMenu", "Exit", nullptr));
        label_2->setText(QApplication::translate("StudentMenu", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237\350\217\234\345\215\225", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StudentMenu: public Ui_StudentMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMENU_H
