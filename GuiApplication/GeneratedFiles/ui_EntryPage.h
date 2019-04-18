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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EntryPage
{
public:

    void setupUi(QWidget *EntryPage)
    {
        if (EntryPage->objectName().isEmpty())
            EntryPage->setObjectName(QString::fromUtf8("EntryPage"));
        EntryPage->resize(400, 300);

        retranslateUi(EntryPage);

        QMetaObject::connectSlotsByName(EntryPage);
    } // setupUi

    void retranslateUi(QWidget *EntryPage)
    {
        EntryPage->setWindowTitle(QApplication::translate("EntryPage", "EntryPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EntryPage: public Ui_EntryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYPAGE_H
