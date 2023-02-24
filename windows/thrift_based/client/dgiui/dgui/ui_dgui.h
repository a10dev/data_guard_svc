/********************************************************************************
** Form generated from reading UI file 'dgui.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DGUI_H
#define UI_DGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <view\bankcards\WgtBankcards.h>
#include <view\encryption\WgtEncryption.h>
#include <view\options\WgtOptions.h>
#include <view\shredder\WgtShredder.h>

QT_BEGIN_NAMESPACE

class Ui_dgui
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tabFolderLock;
    QVBoxLayout *verticalLayout_2;
    WgtShredder *tabShredder;
    QVBoxLayout *verticalLayout_3;
    WgtEncryption *tabFileEncryption;
    WgtBankcards *tabBankCards;
    WgtOptions *tabOptions;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dgui)
    {
        if (dgui->objectName().isEmpty())
            dgui->setObjectName(QString::fromUtf8("dgui"));

        dgui->resize(579, 446);
        centralWidget = new QWidget(dgui);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setInputMethodHints(Qt::ImhNone);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(24, 24));
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tabFolderLock = new QWidget();
        tabFolderLock->setObjectName(QString::fromUtf8("tabFolderLock"));
        verticalLayout_2 = new QVBoxLayout(tabFolderLock);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/dgui/ico/folderlock_32x32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabFolderLock, icon, QString());
        tabShredder = new WgtShredder();
        tabShredder->setObjectName(QString::fromUtf8("tabShredder"));
        verticalLayout_3 = new QVBoxLayout(tabShredder);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/dgui/ico/shredder_32x32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabShredder, icon1, QString());
        tabFileEncryption = new WgtEncryption();
        tabFileEncryption->setObjectName(QString::fromUtf8("tabFileEncryption"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/dgui/ico/encryption_32x32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabFileEncryption, icon2, QString());
        tabBankCards = new WgtBankcards();
        tabBankCards->setObjectName(QString::fromUtf8("tabBankCards"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/dgui/ico/card.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabBankCards, icon3, QString());
        tabOptions = new WgtOptions();
        tabOptions->setObjectName(QString::fromUtf8("tabOptions"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/dgui/ico/settings.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tabOptions, icon4, QString());

        horizontalLayout->addWidget(tabWidget);

        dgui->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(dgui);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 579, 21));
        dgui->setMenuBar(menuBar);
        mainToolBar = new QToolBar(dgui);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        dgui->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(dgui);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        dgui->setStatusBar(statusBar);

        retranslateUi(dgui);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(dgui);
    } // setupUi

    void retranslateUi(QMainWindow *dgui)
    {
        dgui->setWindowTitle(QCoreApplication::translate("dgui", "dgui", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFolderLock), QCoreApplication::translate("dgui", "Folder Lock", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabShredder), QCoreApplication::translate("dgui", "Shredder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFileEncryption), QCoreApplication::translate("dgui", "File encryption", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabBankCards), QCoreApplication::translate("dgui", "Bank cards", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabOptions), QCoreApplication::translate("dgui", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dgui: public Ui_dgui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DGUI_H
