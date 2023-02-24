/********************************************************************************
** Form generated from reading UI file 'WgtShredder.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WGTSHREDDER_H
#define UI_WGTSHREDDER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WgtShredder
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *labShredderHeader;
    QLabel *labShredderDescription;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editShredderFilePath;
    QPushButton *btnChooseFile;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnEraseFile;

    void setupUi(QWidget *WgtShredder)
    {
        if (WgtShredder->objectName().isEmpty())
            WgtShredder->setObjectName(QString::fromUtf8("WgtShredder"));
        WgtShredder->resize(646, 326);
        verticalLayout_3 = new QVBoxLayout(WgtShredder);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labShredderHeader = new QLabel(WgtShredder);
        labShredderHeader->setObjectName(QString::fromUtf8("labShredderHeader"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        labShredderHeader->setFont(font);

        verticalLayout_2->addWidget(labShredderHeader);

        labShredderDescription = new QLabel(WgtShredder);
        labShredderDescription->setObjectName(QString::fromUtf8("labShredderDescription"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        labShredderDescription->setFont(font1);

        verticalLayout_2->addWidget(labShredderDescription);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editShredderFilePath = new QLineEdit(WgtShredder);
        editShredderFilePath->setObjectName(QString::fromUtf8("editShredderFilePath"));

        horizontalLayout->addWidget(editShredderFilePath);

        btnChooseFile = new QPushButton(WgtShredder);
        btnChooseFile->setObjectName(QString::fromUtf8("btnChooseFile"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/dgui/ico/bin.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnChooseFile->setIcon(icon);
        btnChooseFile->setIconSize(QSize(28, 28));
        btnChooseFile->setFlat(false);

        horizontalLayout->addWidget(btnChooseFile);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer);

        label = new QLabel(WgtShredder);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);
        label->setContextMenuPolicy(Qt::DefaultContextMenu);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        horizontalLayout_3->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnEraseFile = new QPushButton(WgtShredder);
        btnEraseFile->setObjectName(QString::fromUtf8("btnEraseFile"));
        btnEraseFile->setIcon(icon);
        btnEraseFile->setIconSize(QSize(24, 24));
        btnEraseFile->setFlat(false);

        horizontalLayout_2->addWidget(btnEraseFile);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(WgtShredder);

        QMetaObject::connectSlotsByName(WgtShredder);
    } // setupUi

    void retranslateUi(QWidget *WgtShredder)
    {
        WgtShredder->setWindowTitle(QCoreApplication::translate("WgtShredder", "Form", nullptr));
        labShredderHeader->setText(QCoreApplication::translate("WgtShredder", "Shredder", nullptr));
        labShredderDescription->setText(QCoreApplication::translate("WgtShredder", "Use unrecoverable data erasing if you want to prevent third parties from being able to recover the data.\n"
"Warning: Nobody can restore the original data after shredding.", nullptr));
        btnChooseFile->setText(QCoreApplication::translate("WgtShredder", "Choose file...", nullptr));
        label->setText(QString());
        btnEraseFile->setText(QCoreApplication::translate("WgtShredder", "  Erase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WgtShredder: public Ui_WgtShredder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WGTSHREDDER_H
