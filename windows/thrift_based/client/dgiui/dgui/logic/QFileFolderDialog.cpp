#include "QFileFolderDialog.h"

QFileFolderDialog::QFileFolderDialog(QWidget *parent) :
    QDialog(parent)
    //, ui(new Ui::QFileFolderDialog)
    , dirmodel(new QFileSystemModel(this))
{
    setupUi(this);
    setWindowTitle("Choose file or folder");

    QObject::connect(btnCancel, SIGNAL(clicked()), this, SLOT(reject()));

    listViewFiles->setVisible(false); // MUST BE SET TO FALSE

    //filtersNames["*.* Files only"]   = static_cast<int>(QDir::NoDotAndDotDot | QDir::Files);
    filtersNames["Directories only"] = static_cast<int>(QDir::NoDotAndDotDot | QDir::AllDirs);
    filtersNames["Files and folders"]= static_cast<int>(QDir::Filter::NoFilter);
    // TO DO // Add some default filters ... maybe
    //<< "*.exe"
    //<< "*.docx, *.doc"

    cmbxFileExtension->addItems(filtersNames.keys());
    int index = cmbxFileExtension->findText("Files and folders");
    if ( index != -1 )
        cmbxFileExtension->setCurrentIndex(index);
}

QFileFolderDialog::~QFileFolderDialog()
{
    //delete ui;
}

void QFileFolderDialog::on_btnCancel_clicked()
{
    close();
}

void QFileFolderDialog::on_btnSelect_clicked()
{
    QFileInfo objectInfo( editFullPath->text() );
    if (!objectInfo.exists())
    {
        QMessageBox::critical(  this
            , "Not found!"
            , "Chosen object does not exist!"
            );
        editFullPath->setFocus();

        return;
    }


//    QMessageBox::StandardButton reply;
//    reply = QMessageBox::question(  this
//                                  , "Attention!"
//                                  , "Remove chosen data beyond recovery?"
//                                  , QMessageBox::Yes|QMessageBox::No);
//    if (reply == QMessageBox::Yes)
//    {
        setChosenFilePath( editFullPath->text().replace('/', '\\') );

//        //go to Shredding, De/Crypting
        QDialog::accept();
//    }
}

void QFileFolderDialog::on_cmbxFileExtension_currentIndexChanged(const QString &curFilterName)
{
    // Unit Tests
    //QString curFilterName = "Files and folders";
    //QString curFilterName = "Directories only";
    int iFilter = filtersNames[curFilterName];
    setQDirFilterFromInt(iFilter);
}

void QFileFolderDialog::on_treeViewFolders_clicked(const QModelIndex &index)
{
    editFullPath->setText( dirmodel->filePath(index).replace('/', '\\') );
}

QString QFileFolderDialog::getChosenFilePath() const
{
	//chosenFilePath = chosenFilePath.replace('/', '\\');
	return chosenFilePath;
}

void QFileFolderDialog::setChosenFilePath(const QString &value)
{
    QString defalutPath = "C:\\"; // TO DO //
    if(value.isEmpty())
    {
        chosenFilePath = defalutPath;
    }
    else // restore
    {
        chosenFilePath = value;
    }

    dirmodel->setRootPath(chosenFilePath);
    treeViewFolders->setModel(dirmodel);
    treeViewFolders->setColumnWidth(0, 230);

    if(chosenFilePath != defalutPath)
    {
        QModelIndex mindex = dirmodel->index(chosenFilePath);
        treeViewFolders->expand(mindex);
        treeViewFolders->scrollTo(mindex);
        treeViewFolders->setCurrentIndex(mindex);
        //treeViewFolders->resizeColumnToContents(0); // Optional
		
		editFullPath->setText( dirmodel->filePath(mindex).replace('/', '\\') );
    }
}



void QFileFolderDialog::setQDirFilterFromInt(int iFilter)
{
	if (false) {}
	else if (iFilter == static_cast<int>(QDir::Filter::NoFilter) )
	{
		dirmodel->setFilter(QDir::Filter::NoFilter);
	}
	else if (iFilter == static_cast<int>(QDir::Filter::NoDotAndDotDot | QDir::Filter::AllDirs))
	{
		dirmodel->setFilter(QDir::Filter::NoDotAndDotDot | QDir::Filter::AllDirs);
	}
	else if (iFilter == static_cast<int>(QDir::NoDotAndDotDot | QDir::Files))
	{
		dirmodel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
	}
	else
	{
		dirmodel->setFilter( QDir::Filter::NoFilter );
	}


    /* // TO DO // Add more options if needed
        , static_cast<int>(QDir::Filter::Dirs           )
        , static_cast<int>(QDir::Filter::Files          )
        , static_cast<int>(QDir::Filter::Drives         )
        , static_cast<int>(QDir::Filter::NoSymLinks     )
        , static_cast<int>(QDir::Filter::AllEntries     )
        , static_cast<int>(QDir::Filter::TypeMask       )
        //static_cast<int>(,                            )
        , static_cast<int>(QDir::Filter::Readable       )
        , static_cast<int>(QDir::Filter::Writable       )
        , static_cast<int>(QDir::Filter::Executable     )
        , static_cast<int>(QDir::Filter::PermissionMask )
        //static_cast<int>(,                            )
        , static_cast<int>(QDir::Filter::Modified       )
        , static_cast<int>(QDir::Filter::Hidden         )
        , static_cast<int>(QDir::Filter::System         )
        , static_cast<int>(QDir::Filter::AccessMask     )
        , static_cast<int>(QDir::Filter::AllDirs        )
        , static_cast<int>(QDir::Filter::CaseSensitive  )
        , static_cast<int>(QDir::Filter::NoDot          )
        , static_cast<int>(QDir::Filter::NoDotDot       )
        , static_cast<int>(QDir::Filter::NoDotAndDotDot )
    */
}


void QFileFolderDialog::setupUi(QDialog *QFileFolderDialog)
{
    if (QFileFolderDialog->objectName().isEmpty())
        QFileFolderDialog->setObjectName(QStringLiteral("QFileFolderDialog"));
    QFileFolderDialog->resize(573, 311);
    gridLayout = new QGridLayout(QFileFolderDialog);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    splitter = new QSplitter(QFileFolderDialog);
    splitter->setObjectName(QStringLiteral("splitter"));
    splitter->setOrientation(Qt::Horizontal);
    treeViewFolders = new QTreeView(splitter);
    treeViewFolders->setObjectName(QStringLiteral("treeViewFolders"));
    splitter->addWidget(treeViewFolders);
    listViewFiles = new QListView(splitter);
    listViewFiles->setObjectName(QStringLiteral("listViewFiles"));
    splitter->addWidget(listViewFiles);

    gridLayout->addWidget(splitter, 0, 0, 1, 4);

    labelFullPath = new QLabel(QFileFolderDialog);
    labelFullPath->setObjectName(QStringLiteral("labelFullPath"));

    gridLayout->addWidget(labelFullPath, 1, 0, 1, 1);

    editFullPath = new QLineEdit(QFileFolderDialog);
    editFullPath->setObjectName(QStringLiteral("editFullPath"));

    gridLayout->addWidget(editFullPath, 1, 1, 1, 1);

    cmbxFileExtension = new QComboBox(QFileFolderDialog);
    cmbxFileExtension->setObjectName(QStringLiteral("cmbxFileExtension"));

    gridLayout->addWidget(cmbxFileExtension, 1, 2, 1, 2);

    horizontalSpacer = new QSpacerItem(390, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

    btnSelect = new QPushButton(QFileFolderDialog);
    btnSelect->setObjectName(QStringLiteral("btnSelect"));

    gridLayout->addWidget(btnSelect, 2, 2, 1, 1);

    btnCancel = new QPushButton(QFileFolderDialog);
    btnCancel->setObjectName(QStringLiteral("btnCancel"));

    gridLayout->addWidget(btnCancel, 2, 3, 1, 1);


    retranslateUi(QFileFolderDialog);

    QMetaObject::connectSlotsByName(QFileFolderDialog);
} // setupUi

void QFileFolderDialog::retranslateUi(QDialog *QFileFolderDialog)
{
    QFileFolderDialog->setWindowTitle(QApplication::translate("QFileFolderDialog", "Dialog", Q_NULLPTR));
    labelFullPath->setText(QApplication::translate("QFileFolderDialog", "File or folder", Q_NULLPTR));
    btnSelect->setText(QApplication::translate("QFileFolderDialog", "Select", Q_NULLPTR));
    btnCancel->setText(QApplication::translate("QFileFolderDialog", "Cancel", Q_NULLPTR));
} // retranslateUi


