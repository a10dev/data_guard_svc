#include <QFileDialog>
#include <QFileSystemModel>
#include <QMessageBox>

#include "WgtShredder.h"
#include "ui_WgtShredder.h"

#include "../../logic/DgiCommon.h"
#include "../../logic/DgiEngine.h"
#include "../../../../service/DgiService/helpers/internal/helpers.h"


//namespace view
//{

#define TXT_SHREDD_CHOOSE_DIALOG             QObject::tr("Please choose directory which you want to protect")
#define TXT_SHREDD_CHOOSE_FILE_DIALOG        QObject::tr("Please choose file which you want to protect")

#define TXT_SHREDD_MSG_CAPTION               QObject::tr("Folder Lock")
#define TXT_SHREDD_ADD_FS_NOT_SUPPORTED      QObject::tr("Sorry, but the target file system is not supported.\nYou can protect files and directories only for NTFS and ReFS.\nOld file systems as FAT and FAT32 are not supported.")



WgtShredder::WgtShredder(QWidget *parent) :
    QWidget(parent),
	m_conextChoose(new view::WgtFLockContextAddNew),
    ui(new Ui::WgtShredder)
{
	m_conextChoose->prepareChooseMenu();

    ui->setupUi(this);

	initUi();
	initCompleter();

	connect(ui->btnChooseFile, SIGNAL(clicked()), this, SLOT(slotChooseFileOrFolder()));
	connect(ui->btnEraseFile,  SIGNAL(clicked()), this, SLOT(slotEraseFileOrFolder()));

	connect(this->m_conextChoose, SIGNAL(signalChooseFile()), this, SLOT(handlerChooseFile()), Qt::DirectConnection);
	connect(this->m_conextChoose, SIGNAL(signalChooseDir()), this, SLOT(handlerChooseDir()), Qt::DirectConnection);
}


WgtShredder::~WgtShredder()
{
    delete ui;
}


void WgtShredder::initUi()
{
	ui->btnChooseFile->setIcon( QIcon(":dgui/ico/scan.ico") );
	ui->btnEraseFile->setIcon(QIcon(":dgui/ico/remove.ico"));
}

void WgtShredder::initCompleter()
{
	//m_completer = new QCompleter(this);

	m_completer.setMaxVisibleItems(10);

	m_completer.setCaseSensitivity(Qt::CaseInsensitive);

	QCompleter::CompletionMode mode;
	//mode = QCompleter::InlineCompletion;
	mode = QCompleter::PopupCompletion;
	m_completer.setCompletionMode(mode);

	QFileSystemModel *fsModel = new QFileSystemModel( &m_completer );
	fsModel->setRootPath("");
	m_completer.setModel(fsModel);

	
	ui->editShredderFilePath->setCompleter( &m_completer );
}


void WgtShredder::slotChooseFileOrFolder()
{
	this->m_conextChoose->ShowMenu();
}



void WgtShredder::handlerChooseFile()
{
	QString filepath = QFileDialog::getOpenFileName(this,
		TXT_SHREDD_CHOOSE_FILE_DIALOG,
		"",
		tr("Any files (*.*)"),
		NULL,
		QFileDialog::DontUseNativeDialog);

	if (!filepath.length()) {
		return;
	}

	for (int i = 0; i < filepath.size(); ++i) {
		if (filepath[i] == '/') {
			filepath[i] = '\\';
		}
	}

	/*
	bool supportedFs = false;
	std::wstring ws = filepath.toStdWString();
	bool exec = dguard::GetEngine().flockIsSupportedFs(ws, supportedFs);
	if (exec)
	{
		if (!supportedFs)
		{
			QMessageBox msgBox;
			msgBox.setWindowTitle(TXT_SHREDD_MSG_CAPTION);
			msgBox.setText(TXT_SHREDD_ADD_FS_NOT_SUPPORTED);
			msgBox.setIcon(QMessageBox::Warning);
			msgBox.setStandardButtons(QMessageBox::Ok);
			msgBox.exec();
		}
	}
	else
	{
		//
		//  Something went wrong and we could not verify target file system where object resides.
		//
	}
	*/

	ui->editShredderFilePath->setText( filepath );

}


void WgtShredder::handlerChooseDir()
{
	QString dirpath = QFileDialog::getExistingDirectory
	(
		this, TXT_SHREDD_CHOOSE_DIALOG, "", QFileDialog::DontUseNativeDialog
	);

	if (!dirpath.length()) {
		return;
	}

	for (int i = 0; i < dirpath.size(); ++i) {
		if (dirpath[i] == '/') {
			dirpath[i] = '\\';
		}
	}

	/*
	bool supportedFs = false;
	if (dguard::GetEngine().flockIsSupportedFs(dirpath.toStdWString(), supportedFs))
	{
		if (!supportedFs)
		{
			QMessageBox msgBox;
			msgBox.setWindowTitle(TXT_SHREDD_MSG_CAPTION);
			msgBox.setText(TXT_SHREDD_ADD_FS_NOT_SUPPORTED);
			msgBox.setIcon(QMessageBox::Warning);
			msgBox.setStandardButtons(QMessageBox::Ok);
			msgBox.exec();
		}
	}
	else
	{
		//
		//  Something went wrong and we could not verify target file system where object resides.
		//
	}
	*/

	ui->editShredderFilePath->setText( dirpath );
}


void WgtShredder::slotEraseFileOrFolder()
{
	QString pathFileFolder = ui->editShredderFilePath->text();

	bool success = false;
	//dguard::GetEngine().shredEraseFileOrDir(pathFileFolder);
}


//} // view
