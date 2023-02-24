#include "WgtEncryption.h"
#include "ui_WgtEncryption.h"

//namespace view
//{


WgtEncryption::WgtEncryption(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WgtEncryption)
{
    ui->setupUi(this);
}

WgtEncryption::~WgtEncryption()
{
    delete ui;
}


//} // view
