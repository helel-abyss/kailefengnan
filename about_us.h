#ifndef ABOUT_US_H
#define ABOUT_US_H

#include <QDialog>

namespace Ui {
class About_Us;
}

class About_Us : public QDialog
{
    Q_OBJECT

public:
    explicit About_Us(QWidget *parent = nullptr);
    ~About_Us();

private:
    Ui::About_Us *ui;
};

#endif // ABOUT_US_H
