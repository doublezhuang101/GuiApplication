/********************************************************************************
** Form generated from reading UI file 'GuiApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIAPPLICATION_H
#define UI_GUIAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiApplicationClass
{
public:
    QWidget *centralWidget;
    QPushButton *startButton;
    QLabel *label;
    QPushButton *closeButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *GuiApplicationClass)
    {
        if (GuiApplicationClass->objectName().isEmpty())
            GuiApplicationClass->setObjectName(QString::fromUtf8("GuiApplicationClass"));
        GuiApplicationClass->resize(905, 534);
        centralWidget = new QWidget(GuiApplicationClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(450, 410, 101, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -10, 921, 511));
        label->setPixmap(QPixmap(QString::fromUtf8(":/GuiApplication/MFC ODBC.png")));
        label->setScaledContents(true);
        closeButton = new QPushButton(centralWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(630, 410, 31, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 400, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 440, 75, 23));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 30, 256, 192));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(550, 50, 54, 12));
        GuiApplicationClass->setCentralWidget(centralWidget);
        label->raise();
        startButton->raise();
        closeButton->raise();
        pushButton->raise();
        pushButton_2->raise();
        tableView->raise();
        label_2->raise();
        menuBar = new QMenuBar(GuiApplicationClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 905, 23));
        GuiApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GuiApplicationClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GuiApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(GuiApplicationClass);

        QMetaObject::connectSlotsByName(GuiApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *GuiApplicationClass)
    {
        GuiApplicationClass->setWindowTitle(QApplication::translate("GuiApplicationClass", "GuiApplication", nullptr));
        startButton->setText(QApplication::translate("GuiApplicationClass", "Enter|\350\277\233\345\205\245", nullptr));
        label->setText(QString());
        closeButton->setText(QApplication::translate("GuiApplicationClass", "X", nullptr));
        pushButton->setText(QApplication::translate("GuiApplicationClass", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("GuiApplicationClass", "PushButton", nullptr));
        label_2->setText(QApplication::translate("GuiApplicationClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiApplicationClass: public Ui_GuiApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIAPPLICATION_H
