#include "WgtBankcards.h"
#include "ui_WgtBankcards.h"

//namespace view
//{


WgtBankcards::WgtBankcards(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WgtBankcards)
{
    ui->setupUi(this);
}

WgtBankcards::~WgtBankcards()
{
    delete ui;
}


//} // view
