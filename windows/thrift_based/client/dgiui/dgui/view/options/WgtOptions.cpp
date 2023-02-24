#include "WgtOptions.h"
#include "ui_WgtOptions.h"

//namespace view
//{


WgtOptions::WgtOptions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WgtOptions)
{
    ui->setupUi(this);
}

WgtOptions::~WgtOptions()
{
    delete ui;
}


//} // view
