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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QPushButton *closeButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GuiApplicationClass)
    {
        if (GuiApplicationClass->objectName().isEmpty())
            GuiApplicationClass->setObjectName(QString::fromUtf8("GuiApplicationClass"));
        GuiApplicationClass->resize(833, 518);
        centralWidget = new QWidget(GuiApplicationClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(430, 390, 101, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, -20, 841, 491));
        label->setPixmap(QPixmap(QString::fromUtf8(":/GuiApplication/MFC ODBC.png")));
        label->setScaledContents(true);
        closeButton = new QPushButton(centralWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(620, 390, 31, 31));
        GuiApplicationClass->setCentralWidget(centralWidget);
        label->raise();
        startButton->raise();
        closeButton->raise();
        menuBar = new QMenuBar(GuiApplicationClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 833, 23));
        GuiApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GuiApplicationClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GuiApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GuiApplicationClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GuiApplicationClass->setStatusBar(statusBar);

        retranslateUi(GuiApplicationClass);
        QObject::connect(closeButton, SIGNAL(clicked()), GuiApplicationClass, SLOT(close()));

        QMetaObject::connectSlotsByName(GuiApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *GuiApplicationClass)
    {
        GuiApplicationClass->setWindowTitle(QApplication::translate("GuiApplicationClass", "GuiApplication", nullptr));
        startButton->setText(QApplication::translate("GuiApplicationClass", "Enter|\350\277\233\345\205\245", nullptr));
        label->setText(QString());
        closeButton->setText(QApplication::translate("GuiApplicationClass", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiApplicationClass: public Ui_GuiApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIAPPLICATION_H
