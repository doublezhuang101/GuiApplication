/********************************************************************************
** Form generated from reading UI file 'EntryPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRYPAGE_H
#define UI_ENTRYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EntryPage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *ConfirmButton;
    QPushButton *Exit;

    void setupUi(QWidget *EntryPage)
    {
        if (EntryPage->objectName().isEmpty())
            EntryPage->setObjectName(QString::fromUtf8("EntryPage"));
        EntryPage->resize(789, 548);
        label = new QLabel(EntryPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 90, 280, 22));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_2 = new QLabel(EntryPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 166, 36, 16));
        label_3 = new QLabel(EntryPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 232, 36, 16));
        label_4 = new QLabel(EntryPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 280, 36, 16));
        label_5 = new QLabel(EntryPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 320, 60, 16));
        label_6 = new QLabel(EntryPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 360, 24, 16));
        label_7 = new QLabel(EntryPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(370, 170, 114, 16));
        label_8 = new QLabel(EntryPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(370, 224, 84, 16));
        label_9 = new QLabel(EntryPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(370, 290, 84, 16));
        lineEdit = new QLineEdit(EntryPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 170, 111, 20));
        lineEdit_2 = new QLineEdit(EntryPage);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 230, 111, 20));
        lineEdit_3 = new QLineEdit(EntryPage);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 280, 113, 20));
        lineEdit_4 = new QLineEdit(EntryPage);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 320, 113, 20));
        lineEdit_5 = new QLineEdit(EntryPage);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 360, 113, 20));
        lineEdit_6 = new QLineEdit(EntryPage);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(510, 170, 113, 20));
        lineEdit_7 = new QLineEdit(EntryPage);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(510, 220, 113, 20));
        lineEdit_8 = new QLineEdit(EntryPage);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(510, 290, 113, 20));
        ConfirmButton = new QPushButton(EntryPage);
        ConfirmButton->setObjectName(QString::fromUtf8("ConfirmButton"));
        ConfirmButton->setGeometry(QRect(470, 490, 75, 23));
        Exit = new QPushButton(EntryPage);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(640, 490, 75, 23));

        retranslateUi(EntryPage);

        QMetaObject::connectSlotsByName(EntryPage);
    } // setupUi

    void retranslateUi(QWidget *EntryPage)
    {
        EntryPage->setWindowTitle(QApplication::translate("EntryPage", "EntryPage", nullptr));
        label->setText(QApplication::translate("EntryPage", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\344\277\241\346\201\257\345\220\216\347\202\271\345\207\273\347\241\256\350\256\244\346\214\211\351\222\256", nullptr));
        label_2->setText(QApplication::translate("EntryPage", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("EntryPage", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QApplication::translate("EntryPage", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_5->setText(QApplication::translate("EntryPage", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_6->setText(QApplication::translate("EntryPage", "\345\271\264\351\276\204", nullptr));
        label_7->setText(QApplication::translate("EntryPage", "C\350\257\255\350\250\200\350\257\276\347\250\213\350\256\276\350\256\241\346\210\220\347\273\251\357\274\232", nullptr));
        label_8->setText(QApplication::translate("EntryPage", "\351\253\230\347\255\211\346\225\260\345\255\246\346\210\220\347\273\251\357\274\232", nullptr));
        label_9->setText(QApplication::translate("EntryPage", "\345\244\247\345\255\246\350\213\261\350\257\255\346\210\220\347\273\251\357\274\232", nullptr));
        ConfirmButton->setText(QApplication::translate("EntryPage", "PushButton", nullptr));
        Exit->setText(QApplication::translate("EntryPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EntryPage: public Ui_EntryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYPAGE_H
