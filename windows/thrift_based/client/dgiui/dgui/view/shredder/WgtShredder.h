#ifndef WGTSHREDDER_H
#define WGTSHREDDER_H

#include <QWidget>
#include <QCompleter>

#include "../flock/WgtFLockContextAddNew.h"
//namespace view
//{


namespace Ui {
class WgtShredder;
}

class WgtShredder : public QWidget
{
    Q_OBJECT

public:
    explicit WgtShredder(QWidget *parent = nullptr);
    ~WgtShredder();

private:
    Ui::WgtShredder *ui;

	QCompleter m_completer;
	view::WgtFLockContextAddNew* m_conextChoose;


	void initUi();
	void initCompleter();

public slots:
	void slotChooseFileOrFolder();
	void slotEraseFileOrFolder();

	void handlerChooseFile();
	void handlerChooseDir();

};


//} // view

#endif // WGTSHREDDER_H
