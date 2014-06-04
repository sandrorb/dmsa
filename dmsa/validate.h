#ifndef VALIDATE_H
#define VALIDATE_H

#include "mainwindow.h"
#include "QLineEdit.h"
#include <vector>


class Validate {

public:
    Validate(Ui::MainWindow * ui);
    bool validate();
    //void setFields(std::vector<QLineEdit *> fields);

private:
    Ui::MainWindow * ui;
    bool isFieldsOk;
    //std::vector<QLineEdit *> fields;

};

#endif // VALIDATE_H
