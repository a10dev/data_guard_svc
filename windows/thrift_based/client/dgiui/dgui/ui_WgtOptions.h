/********************************************************************************
** Form generated from reading UI file 'WgtOptions.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WGTOPTIONS_H
#define UI_WGTOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WgtOptions
{
public:

    void setupUi(QWidget *WgtOptions)
    {
        if (WgtOptions->objectName().isEmpty())
            WgtOptions->setObjectName(QString::fromUtf8("WgtOptions"));
        WgtOptions->resize(400, 300);

        retranslateUi(WgtOptions);

        QMetaObject::connectSlotsByName(WgtOptions);
    } // setupUi

    void retranslateUi(QWidget *WgtOptions)
    {
        WgtOptions->setWindowTitle(QCoreApplication::translate("WgtOptions", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WgtOptions: public Ui_WgtOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WGTOPTIONS_H
