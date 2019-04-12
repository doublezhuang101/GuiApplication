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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiApplicationClass
{
public:
    QWidget *centralWidget;
    QPushButton *startButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GuiApplicationClass)
    {
        if (GuiApplicationClass->objectName().isEmpty())
            GuiApplicationClass->setObjectName(QString::fromUtf8("GuiApplicationClass"));
        GuiApplicationClass->resize(600, 400);
        centralWidget = new QWidget(GuiApplicationClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(270, 170, 75, 23));
        GuiApplicationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GuiApplicationClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        GuiApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GuiApplicationClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GuiApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GuiApplicationClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GuiApplicationClass->setStatusBar(statusBar);

        retranslateUi(GuiApplicationClass);

        QMetaObject::connectSlotsByName(GuiApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *GuiApplicationClass)
    {
        GuiApplicationClass->setWindowTitle(QApplication::translate("GuiApplicationClass", "GuiApplication", nullptr));
        startButton->setText(QApplication::translate("GuiApplicationClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiApplicationClass: public Ui_GuiApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIAPPLICATION_H
