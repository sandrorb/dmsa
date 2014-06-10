#include "validate.h"
#include "mainwindow.h"

// This following include, ui_mainwindow.h, is mandatory
// to pass the ui reference to this class.
#include "ui_mainwindow.h"

#include <iostream>

Validate::Validate(Ui::MainWindow * ui) {
    this->ui = ui;

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
}

bool Validate::validate(){

    bool ok = false;
    bool valide = true;
    QString fieldStr;
    int numberField(0);

    for (size_t i = 0; i < fields.size(); i++) {
        fieldStr = fields[i]->text();
        numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
        valide = ok;
        if (!valide) {
            myMsg = QString::fromUtf8("Há dado(s) não válido(s)! Digite somente números sem pontos e sem vírgulas.");
            return valide;
        }
    }

    valide = true;
    fieldStr = ui->padraoTempoTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = QString::fromUtf8("Tempo não pode ser menor ou igual a zero!");
        valide = false;
        ui->padraoTempoTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->padraoTempoTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimEsquerdoTempoTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = QString::fromUtf8("Tempo não pode ser menor ou igual a zero!");
        valide = false;
        ui->rimEsquerdoTempoTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimEsquerdoTempoTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimDireitoTempoTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = QString::fromUtf8("Tempo não pode ser menor ou igual a zero!");
        valide = false;
        ui->rimDireitoTempoTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimDireitoTempoTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    return valide;
}

QString Validate::getMsg(){
    return this->myMsg;
}

//void Validate::setFields(std::vector<QLineEdit *> fields){
//    this->fields = fields;
//}

