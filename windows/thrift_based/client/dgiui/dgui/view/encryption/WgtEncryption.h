#ifndef WGTENCRYPTION_H
#define WGTENCRYPTION_H

#include <QWidget>

// view::WgtEncryption

//namespace view
//{


namespace Ui {
class WgtEncryption;
}

class WgtEncryption : public QWidget
{
    Q_OBJECT

public:
    explicit WgtEncryption(QWidget *parent = nullptr);
    ~WgtEncryption();

private:
    Ui::WgtEncryption *ui;
};


//} // view

#endif // WGTENCRYPTION_H
