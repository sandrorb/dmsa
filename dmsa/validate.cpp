#include "validate.h"
#include "mainwindow.h"

// This following include, ui_mainwindow.h, is mandatory
// to pass the ui reference to this class.
#include "ui_mainwindow.h"

Validate::Validate(Ui::MainWindow * ui) {
    this->ui = ui;
}

bool Validate::validate(){
    bool ok = false;
    QString fieldStr;

    std::vector<QLineEdit*> fields;
    fields.push_back(ui->padraoTextBox);
    fields.push_back(ui->padraoAreaTextBox);
    fields.push_back(ui->padraoBGTextBox);
    fields.push_back(ui->padraoBGAreaTextBox);
    fields.push_back(ui->padraoTempoTextBox);

    fields.push_back(ui->padraoSeringaCheiaTextBox);
    fields.push_back(ui->padraoSeringaVaziaTextBox);
    fields.push_back(ui->pacienteSeringaCheiaTextBox);
    fields.push_back(ui->pacienteSeringaVaziaTextBox);

    fields.push_back(ui->rimDireitoTextBox);
    fields.push_back(ui->rimDireitoBGTextBox);
    fields.push_back(ui->rimDireitoAreaTextBox);
    fields.push_back(ui->rimDireitoBGAreaTextBox);
    fields.push_back(ui->rimDireitoTempoTextBox);

    fields.push_back(ui->rimEsquerdoTextBox);
    fields.push_back(ui->rimEsquerdoBGTextBox);
    fields.push_back(ui->rimEsquerdoAreaTextBox);
    fields.push_back(ui->rimEsquerdoBGAreaTextBox);
    fields.push_back(ui->rimEsquerdoTempoTextBox);

    fields.push_back(ui->idadeTextBox);
    fields.push_back(ui->pesoTextBox);
    fields.push_back(ui->alturaTextBox);

    for (size_t i = 0; i < fields.size(); i++) {
        fieldStr = fields[i]->text();
        fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
        if (!ok)
            break;
    }
    return ok;
}

//void Validate::setFields(std::vector<QLineEdit *> fields){
//    this->fields = fields;
//}

