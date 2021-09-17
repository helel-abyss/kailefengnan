#include "about_us.h"
#include "ui_about_us.h"

About_Us::About_Us(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About_Us)
{
    ui->setupUi(this);
}

About_Us::~About_Us()
{
    delete ui;
}
