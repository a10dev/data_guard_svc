/********************************************************************************
** Form generated from reading UI file 'WgtBankcards.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WGTBANKCARDS_H
#define UI_WGTBANKCARDS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WgtBankcards
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labBankCardsHeader;
    QLabel *labBankCardsDescription;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRemoveAll;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *WgtBankcards)
    {
        if (WgtBankcards->objectName().isEmpty())
            WgtBankcards->setObjectName(QString::fromUtf8("WgtBankcards"));
        WgtBankcards->resize(647, 314);
        verticalLayout = new QVBoxLayout(WgtBankcards);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labBankCardsHeader = new QLabel(WgtBankcards);
        labBankCardsHeader->setObjectName(QString::fromUtf8("labBankCardsHeader"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        labBankCardsHeader->setFont(font);

        verticalLayout_2->addWidget(labBankCardsHeader);

        labBankCardsDescription = new QLabel(WgtBankcards);
        labBankCardsDescription->setObjectName(QString::fromUtf8("labBankCardsDescription"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        labBankCardsDescription->setFont(font1);

        verticalLayout_2->addWidget(labBankCardsDescription);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAdd = new QPushButton(WgtBankcards);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/dgui/ico/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon);
        btnAdd->setIconSize(QSize(24, 24));
        btnAdd->setFlat(true);

        horizontalLayout->addWidget(btnAdd);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRemoveAll = new QPushButton(WgtBankcards);
        btnRemoveAll->setObjectName(QString::fromUtf8("btnRemoveAll"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/dgui/ico/bin.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveAll->setIcon(icon1);
        btnRemoveAll->setIconSize(QSize(24, 24));
        btnRemoveAll->setFlat(true);

        horizontalLayout->addWidget(btnRemoveAll);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer);

        label = new QLabel(WgtBankcards);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        label->setLineWidth(2);
        label->setMidLineWidth(0);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(WgtBankcards);

        QMetaObject::connectSlotsByName(WgtBankcards);
    } // setupUi

    void retranslateUi(QWidget *WgtBankcards)
    {
        WgtBankcards->setWindowTitle(QCoreApplication::translate("WgtBankcards", "Form", nullptr));
        labBankCardsHeader->setText(QCoreApplication::translate("WgtBankcards", "Bank cards", nullptr));
        labBankCardsDescription->setText(QCoreApplication::translate("WgtBankcards", "Here you can secure sensitive information about your credit cards.\n"
"Without a master-password information is unavailable, all data is encrypted.", nullptr));
        btnAdd->setText(QCoreApplication::translate("WgtBankcards", "Add", nullptr));
        btnRemoveAll->setText(QCoreApplication::translate("WgtBankcards", "Delete all", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WgtBankcards: public Ui_WgtBankcards {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WGTBANKCARDS_H
