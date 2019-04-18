/********************************************************************************
** Form generated from reading UI file 'SearchPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPAGE_H
#define UI_SEARCHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchPage
{
public:
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QPushButton *Exit;

    void setupUi(QWidget *SearchPage)
    {
        if (SearchPage->objectName().isEmpty())
            SearchPage->setObjectName(QString::fromUtf8("SearchPage"));
        SearchPage->resize(680, 455);
        label_3 = new QLabel(SearchPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 170, 54, 12));
        label_8 = new QLabel(SearchPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(350, 160, 131, 31));
        label_8->setMouseTracking(false);
        label_8->setTabletTracking(false);
        label_8->setAcceptDrops(false);
        label_8->setAutoFillBackground(false);
        label_8->setScaledContents(false);
        label_8->setWordWrap(false);
        label_8->setOpenExternalLinks(false);
        label = new QLabel(SearchPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 40, 171, 20));
        label_2 = new QLabel(SearchPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 120, 131, 31));
        label_10 = new QLabel(SearchPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(350, 230, 101, 41));
        label_7 = new QLabel(SearchPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 370, 54, 12));
        pushButton = new QPushButton(SearchPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 70, 75, 23));
        label_9 = new QLabel(SearchPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(350, 200, 81, 21));
        label_4 = new QLabel(SearchPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 270, 54, 12));
        label_5 = new QLabel(SearchPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 220, 54, 12));
        label_6 = new QLabel(SearchPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 330, 81, 16));
        lineEdit = new QLineEdit(SearchPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(340, 40, 113, 20));
        Exit = new QPushButton(SearchPage);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(530, 400, 75, 23));

        retranslateUi(SearchPage);

        QMetaObject::connectSlotsByName(SearchPage);
    } // setupUi

    void retranslateUi(QWidget *SearchPage)
    {
        SearchPage->setWindowTitle(QApplication::translate("SearchPage", "SearchPage", nullptr));
        label_3->setText(QApplication::translate("SearchPage", "\345\255\246\345\217\267", nullptr));
        label_8->setText(QApplication::translate("SearchPage", "C\350\257\255\350\250\200\350\257\276\347\250\213\350\256\276\350\256\241\346\210\220\347\273\251", nullptr));
        label->setText(QApplication::translate("SearchPage", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("SearchPage", "\344\273\245\344\270\213\346\230\257\344\275\240\346\237\245\350\257\242\345\210\260\347\273\223\346\236\234\357\274\232", nullptr));
        label_10->setText(QApplication::translate("SearchPage", "\345\244\247\345\255\246\350\213\261\350\257\255\346\210\220\347\273\251", nullptr));
        label_7->setText(QApplication::translate("SearchPage", "\345\271\264\351\276\204", nullptr));
        pushButton->setText(QApplication::translate("SearchPage", "\346\237\245\346\211\276", nullptr));
        label_9->setText(QApplication::translate("SearchPage", "\351\253\230\347\255\211\346\225\260\345\255\246\346\210\220\347\273\251", nullptr));
        label_4->setText(QApplication::translate("SearchPage", "\346\200\247\345\210\253", nullptr));
        label_5->setText(QApplication::translate("SearchPage", "\345\247\223\345\220\215", nullptr));
        label_6->setText(QApplication::translate("SearchPage", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        Exit->setText(QApplication::translate("SearchPage", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPage: public Ui_SearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPAGE_H
