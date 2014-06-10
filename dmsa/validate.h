#ifndef VALIDATE_H
#define VALIDATE_H

#include "mainwindow.h"

class Validate {

public:
    Validate(Ui::MainWindow * ui);
    bool validate();
    QString getMsg();

private:
    Ui::MainWindow * ui;
    std::vector<QLineEdit*> fields;
    QString myMsg;
};

#endif // VALIDATE_H
