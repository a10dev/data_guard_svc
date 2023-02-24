//
//	Author:
//			Burlutsky Stanislav
//			burluckij@gmail.com
//	
//  Copyright (C) Burlutsky Stanislav (burluckij@gmail.com). All Rights Reserved.
//

#pragma once

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QGroupBox>
#include <QTreeWidget>
#include <QProgressBar>
#include <QStylePainter>
#include <QSystemTrayIcon>
#include <QTreeWidget.h>
#include <QTableWidgetItem>
#include <qmenu.h>
#include <qmenubar.h>

#include "../ExtendedTree.h"

#define TXT_ACT_ADD_FILE	QObject::tr("Add file")
#define TXT_ACT_ADD_DIR		QObject::tr("Add directory")

#define TXT_ACT_CHOOSE_FILE	QObject::tr("Choose file")
#define TXT_ACT_CHOOSE_DIR	QObject::tr("Choose directory")

namespace view
{
    class WgtFLockContextAddNew : public QWidget
    {
        Q_OBJECT

    private:
        QMenu* m_contextMenu;
        QAction* m_actAddFile;
        QAction* m_actAddDir;
		
		QAction* m_actChooseFile;
		QAction* m_actChooseDir;

    public:
        WgtFLockContextAddNew()
        {
            m_contextMenu = new QMenu(this);
        }

		void prepareAddMenu()
		{
			m_actAddFile = m_contextMenu->addAction(TXT_ACT_ADD_FILE);
			m_actAddDir  = m_contextMenu->addAction(TXT_ACT_ADD_DIR);

			m_actAddFile->setIcon(QIcon(":dgui/ico/file_24x24.ico"));
			m_actAddDir->setIcon( QIcon(":dgui/ico/folder.ico"));

			//m_actLock->setIcon(UiResources::GetMe().icoOk());

			connect(m_contextMenu, SIGNAL(triggered(QAction*)), this, SLOT(slotActivated(QAction*)));
		}

		void prepareChooseMenu()
		{
			m_actChooseFile = m_contextMenu->addAction(TXT_ACT_CHOOSE_FILE);
			m_actChooseDir = m_contextMenu->addAction(TXT_ACT_CHOOSE_DIR);

			m_actChooseFile->setIcon(QIcon(":dgui/ico/file_24x24.ico"));
			m_actChooseDir->setIcon( QIcon(":dgui/ico/folder.ico"));

			//m_actLock->setIcon(UiResources::GetMe().icoOk());

			connect(m_contextMenu, SIGNAL(triggered(QAction*)), this, SLOT(slotActivated(QAction*)));
		}

        QMenu* Get()
        {
            return m_contextMenu;
        }

        //
        //  Qualifiers object's type and builds menu
        //

        void ShowMenu()
        {
            m_contextMenu->exec(QCursor::pos());
        }

    signals:
        void signalAddFile();
        void signalAddDir();

		void signalChooseFile();
		void signalChooseDir();

    public slots:

        void slotActivated(QAction* _pAction)
        {
            if (_pAction == m_actAddFile)
            {
                emit signalAddFile();
            }
            else if (_pAction == m_actAddDir)
            {
                emit signalAddDir();
            }

			else if (_pAction == m_actChooseFile)
			{
				emit signalChooseFile();
			}
			else if (_pAction == m_actChooseDir)
			{
				emit signalChooseDir();
			}
		}
    };
}

