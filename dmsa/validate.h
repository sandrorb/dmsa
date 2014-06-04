#ifndef VALIDATE_H
#define VALIDATE_H

#include "mainwindow.h"

class Validate {

public:
    Validate(Ui::MainWindow * ui);
    bool validate();


private:
    Ui::MainWindow * ui;
};

#endif // VALIDATE_H
