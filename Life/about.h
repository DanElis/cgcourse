#ifndef ABOUT_H
#define ABOUT_H


#include <QDialog>

namespace Ui {
class About;
}

class About : public QDialog
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = 0);
};

#endif // ABOUT_H
