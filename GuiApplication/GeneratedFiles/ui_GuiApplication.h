/********************************************************************************
** Form generated from reading UI file 'GuiApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
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

    void setupUi(QMainWindow *GuiApplicationClass)
    {
        if (GuiApplicationClass->objectName().isEmpty())
            GuiApplicationClass->setObjectName(QStringLiteral("GuiApplicationClass"));
        GuiApplicationClass->resize(910, 581);
        centralWidget = new QWidget(GuiApplicationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(460, 450, 121, 31));
        startButton->setStyleSheet(QString::fromUtf8("font: 13pt \"\346\245\267\344\275\223\";\n"
"background-color:white;\n"
"color: black;   \n"
"border-radius: 12px;  \n"
"border: 2px groove gray;\n"
"border-style: outset;\n"
"hover{background-color:blue; color: black;}\n"
"background-color:rgb(85, 170, 255);\n"
"border-style: inset;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-20, -10, 941, 561));
        label->setPixmap(QPixmap(QString::fromUtf8(":/GuiApplication/MFC ODBC.png")));
        label->setScaledContents(true);
        closeButton = new QPushButton(centralWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(620, 450, 81, 31));
        closeButton->setStyleSheet(QString::fromUtf8("font: 13pt \"\346\245\267\344\275\223\";\n"
"background-color:white;\n"
"color: black;   \n"
"border-radius: 12px;  \n"
"border: 2px groove gray;\n"
"border-style: outset;\n"
"hover{background-color:blue; color: black;}\n"
"background-color:rgb(85, 170, 255);\n"
"border-style: inset;"));
        GuiApplicationClass->setCentralWidget(centralWidget);
        label->raise();
        startButton->raise();
        closeButton->raise();
        menuBar = new QMenuBar(GuiApplicationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 910, 23));
        GuiApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GuiApplicationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GuiApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(GuiApplicationClass);

        QMetaObject::connectSlotsByName(GuiApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *GuiApplicationClass)
    {
        GuiApplicationClass->setWindowTitle(QApplication::translate("GuiApplicationClass", "GuiApplication", nullptr));
        startButton->setText(QApplication::translate("GuiApplicationClass", "Enter|\350\277\233\345\205\245", nullptr));
        label->setText(QString());
        closeButton->setText(QApplication::translate("GuiApplicationClass", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiApplicationClass: public Ui_GuiApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIAPPLICATION_H
