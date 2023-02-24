#ifndef WGTOPTIONS_H
#define WGTOPTIONS_H

#include <QWidget>

// view::WgtOptions

//namespace view
//{


namespace Ui {
class WgtOptions;
}

class WgtOptions : public QWidget
{
    Q_OBJECT

public:
    explicit WgtOptions(QWidget *parent = nullptr);
    ~WgtOptions();

private:
    Ui::WgtOptions *ui;
};


//} // view

#endif // WGTOPTIONS_H

