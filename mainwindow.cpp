#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->setWindowTitle("彩虹快乐风男");
}
class MyWidget : public QWidget
{
public:
    QSize sizeHint() const
    {
        return QSize(270, 900); /* 在这里定义dock的初始大小 */
    }
};


MainWindow::~MainWindow()
{
    delete ui;
}

