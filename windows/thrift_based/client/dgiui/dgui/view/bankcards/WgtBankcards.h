#ifndef WGTBANKCARDS_H
#define WGTBANKCARDS_H

#include <QWidget>

// view::WgtBankcards

//namespace view
//{


namespace Ui {
class WgtBankcards;
}

class WgtBankcards : public QWidget
{
    Q_OBJECT

public:
    explicit WgtBankcards(QWidget *parent = nullptr);
    ~WgtBankcards();

private:
    Ui::WgtBankcards *ui;
};


//} // view

#endif // WGTBANKCARDS_H
