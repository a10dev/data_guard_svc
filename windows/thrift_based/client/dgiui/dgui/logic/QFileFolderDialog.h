#ifndef QFILEFOLDERDIALOG_H
#define QFILEFOLDERDIALOG_H

#include <QMessageBox>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QDialog>
#include <QGridLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QListView>
#include <QPushButton>
#include <QSpacerItem>
#include <QSplitter>
#include <QTreeView>
//#include <QtWidgets>


class QFileFolderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QFileFolderDialog(QWidget *parent = 0);
    ~QFileFolderDialog();

    QString getChosenFilePath() const;
    void setChosenFilePath(const QString &value);

private slots:
    void on_btnCancel_clicked();
    void on_btnSelect_clicked();
    void on_cmbxFileExtension_currentIndexChanged(const QString &arg1);
    void on_treeViewFolders_clicked(const QModelIndex &index);

private:
    // UI
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTreeView *treeViewFolders;
    QListView *listViewFiles;
    QLabel *labelFullPath;
    QLineEdit *editFullPath;
    QComboBox *cmbxFileExtension;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSelect;
    QPushButton *btnCancel;

    void setupUi(QDialog *QFileFolderDialog);
    void retranslateUi(QDialog *QFileFolderDialog);

    // User variables
    QString chosenFilePath;

    QFileSystemModel* dirmodel;
    void setQDirFilterFromInt(int iFilter);
    QMap<QString, int> filtersNames;

};

#endif // QFILEFOLDERDIALOG_H
