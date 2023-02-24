/********************************************************************************
** Form generated from reading UI file 'WgtEncryption.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WGTENCRYPTION_H
#define UI_WGTENCRYPTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WgtEncryption
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labFileEncryptionHeader;
    QLabel *labFileEncryptionDescription;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editShredderFilePath;
    QPushButton *btnChooseFile;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnCryptFile;

    void setupUi(QWidget *WgtEncryption)
    {
        if (WgtEncryption->objectName().isEmpty())
            WgtEncryption->setObjectName(QString::fromUtf8("WgtEncryption"));
        WgtEncryption->resize(574, 363);
        verticalLayout = new QVBoxLayout(WgtEncryption);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labFileEncryptionHeader = new QLabel(WgtEncryption);
        labFileEncryptionHeader->setObjectName(QString::fromUtf8("labFileEncryptionHeader"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        labFileEncryptionHeader->setFont(font);

        verticalLayout_2->addWidget(labFileEncryptionHeader);

        labFileEncryptionDescription = new QLabel(WgtEncryption);
        labFileEncryptionDescription->setObjectName(QString::fromUtf8("labFileEncryptionDescription"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        labFileEncryptionDescription->setFont(font1);

        verticalLayout_2->addWidget(labFileEncryptionDescription);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editShredderFilePath = new QLineEdit(WgtEncryption);
        editShredderFilePath->setObjectName(QString::fromUtf8("editShredderFilePath"));

        horizontalLayout->addWidget(editShredderFilePath);

        btnChooseFile = new QPushButton(WgtEncryption);
        btnChooseFile->setObjectName(QString::fromUtf8("btnChooseFile"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/dgui/ico/bin.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnChooseFile->setIcon(icon);
        btnChooseFile->setIconSize(QSize(28, 28));
        btnChooseFile->setFlat(true);

        horizontalLayout->addWidget(btnChooseFile);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tabWidget = new QTabWidget(WgtEncryption);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_3->addWidget(tabWidget);

        label = new QLabel(WgtEncryption);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);
        label->setContextMenuPolicy(Qt::DefaultContextMenu);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnCryptFile = new QPushButton(WgtEncryption);
        btnCryptFile->setObjectName(QString::fromUtf8("btnCryptFile"));
        btnCryptFile->setIcon(icon);
        btnCryptFile->setIconSize(QSize(24, 24));
        btnCryptFile->setFlat(true);

        horizontalLayout_2->addWidget(btnCryptFile);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(WgtEncryption);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(WgtEncryption);
    } // setupUi

    void retranslateUi(QWidget *WgtEncryption)
    {
        WgtEncryption->setWindowTitle(QCoreApplication::translate("WgtEncryption", "Form", nullptr));
        labFileEncryptionHeader->setText(QCoreApplication::translate("WgtEncryption", "File encryption", nullptr));
        labFileEncryptionDescription->setText(QCoreApplication::translate("WgtEncryption", "For secure data transfer use file encryption with modern\n"
"and powerful encryption algorithms.", nullptr));
        btnChooseFile->setText(QCoreApplication::translate("WgtEncryption", "Choose file...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("WgtEncryption", "                                     Crypt                                    ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("WgtEncryption", "                                  Decrypt                                  ", nullptr));
        label->setText(QString());
        btnCryptFile->setText(QCoreApplication::translate("WgtEncryption", "  Crypt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WgtEncryption: public Ui_WgtEncryption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WGTENCRYPTION_H
