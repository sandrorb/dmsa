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

    QString bgErrorField = "QLineEdit{background: orange;}";
    QString bgField = "QLineEdit{background: white;}";

// Set back all BG fields to the normal color.
    for (size_t i = 0; i < fields.size(); i++) {
        fields[i]->setStyleSheet(bgField);
    }

    bool ok = false;
    bool valide = true;
    QString fieldStr;
    int numberField(0);

    // For all input fields, only accept integer. No dot. No comma.
    for (size_t i = 0; i < fields.size(); i++) {
        fieldStr = fields[i]->text();
        numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
        if (!ok) {
            valide = ok;
            fields[i]->setStyleSheet(bgErrorField);
        }
    }

    if (!valide) {
        myMsg = QString::fromUtf8("Há dado(s) não válido(s)! Digite somente números sem pontos e sem vírgulas.\n");
        return valide;
    }

    // Range tests for all input fields.
    valide = true;

    fieldStr = ui->padraoTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = myMsg + QString::fromUtf8("Contagem do padrão deve ser maior que zero!\n");
        valide = false;
        ui->padraoTextBox->setStyleSheet(bgErrorField);
    } else {
        ui->padraoTextBox->setStyleSheet(bgField);
    }

    fieldStr = ui->padraoAreaTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = myMsg + QString::fromUtf8("Área do padrão deve ser maior que zero!\n");
        valide = false;
        ui->padraoAreaTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->padraoAreaTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->padraoBGTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField < 0) {
        myMsg = myMsg + QString::fromUtf8("Contagem do BG deve ser maior ou igual a zero!\n");
        valide = false;
        ui->padraoBGTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->padraoBGTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->padraoBGAreaTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = myMsg + QString::fromUtf8("Área do BG deve ser maior que zero!\n");
        valide = false;
        ui->padraoBGAreaTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->padraoBGAreaTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->padraoTempoTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = myMsg + QString::fromUtf8("Tempo do padrão deve ser maior que zero!\n");
        valide = false;
        ui->padraoTempoTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->padraoTempoTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->padraoSeringaCheiaTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) { // doesn't make sense a empty seringe for the standard
        myMsg = myMsg + QString::fromUtf8("Contagem da seringa cheia do padrão deve ser maior que zero!\n");
        valide = false;
        ui->padraoSeringaCheiaTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->padraoSeringaCheiaTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->padraoSeringaVaziaTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField < 0) {
        myMsg = myMsg + QString::fromUtf8("Contagem da seringa vazia do padrão deve ser maior ou igual a zero!\n");
        valide = false;
        ui->padraoSeringaVaziaTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->padraoSeringaVaziaTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->pacienteSeringaCheiaTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) { // doesn't make sense a empty seringe for the standard
        myMsg = myMsg + QString::fromUtf8("Contagem da seringa cheia do paciente deve ser maior que zero!\n");
        valide = false;
        ui->pacienteSeringaCheiaTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->pacienteSeringaCheiaTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->pacienteSeringaVaziaTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField < 0) {
        myMsg = myMsg + QString::fromUtf8("Contagem da seringa vazia do paciente deve ser maior ou igual a zero!\n");
        valide = false;
        ui->pacienteSeringaVaziaTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->pacienteSeringaVaziaTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimDireitoTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField < 0) {
        myMsg = myMsg + QString::fromUtf8("Contagem do rim direito deve ser maior ou igual a zero!\n");
        valide = false;
        ui->rimDireitoTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimDireitoTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimDireitoBGTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField < 0) {
        myMsg = myMsg + QString::fromUtf8("Contagem do BG do rim direito deve ser maior ou igual a zero!\n");
        valide = false;
        ui->rimDireitoBGTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimDireitoBGTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimDireitoAreaTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = myMsg + QString::fromUtf8("Área do rim direito deve ser maior que zero!\n");
        valide = false;
        ui->rimDireitoAreaTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimDireitoAreaTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimDireitoBGAreaTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = myMsg + QString::fromUtf8("Área do BG do rim direito deve ser maior que zero!\n");
        valide = false;
        ui->rimDireitoBGAreaTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimDireitoBGAreaTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimDireitoTempoTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = myMsg + QString::fromUtf8("Tempo não pode ser menor ou igual a zero!\n");
        valide = false;
        ui->rimDireitoTempoTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimDireitoTempoTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimEsquerdoTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField < 0) {
        myMsg = myMsg + QString::fromUtf8("Contagem do rim esquerdo deve ser maior ou igual a zero!\n");
        valide = false;
        ui->rimEsquerdoTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimEsquerdoTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimEsquerdoBGTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField < 0) {
        myMsg = myMsg + QString::fromUtf8("Contagem do BG do rim esquerdo deve ser maior ou igual a zero!\n");
        valide = false;
        ui->rimEsquerdoBGTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimEsquerdoBGTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimEsquerdoAreaTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = myMsg + QString::fromUtf8("Área do rim esquerdo deve ser maior que zero!\n");
        valide = false;
        ui->rimEsquerdoAreaTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimEsquerdoAreaTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimEsquerdoBGAreaTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = myMsg + QString::fromUtf8("Área do BG do rim esquerdo deve ser maior que zero!\n");
        valide = false;
        ui->rimEsquerdoBGAreaTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimEsquerdoBGAreaTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->rimEsquerdoTempoTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if (numberField <= 0) {
        myMsg = myMsg + QString::fromUtf8("Tempo não pode ser menor ou igual a zero!\n");
        valide = false;
        ui->rimEsquerdoTempoTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->rimEsquerdoTempoTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->idadeTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if ( (numberField <= 0) || (numberField > 120)) {
        myMsg = myMsg + QString::fromUtf8("Idade deve ser maior que 0 e menor que 120 anos!\n");
        valide = false;
        ui->idadeTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->idadeTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->pesoTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if ( (numberField <= 0) || (numberField > 200)) {
        myMsg = myMsg + QString::fromUtf8("Peso deve ser maior que 0 e menor que 200 anos!\n");
        valide = false;
        ui->pesoTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->pesoTextBox->setStyleSheet("QLineEdit{background: white;}");
    }

    fieldStr = ui->alturaTextBox->text();
    numberField = fieldStr.toInt(&ok,10); // ok = true if conversion succeeds.
    if ( (numberField <= 10) || (numberField > 250)) {
        myMsg = myMsg + QString::fromUtf8("Altura deve ser maior que 10 cm e menor que 250 cm!\n");
        valide = false;
        ui->alturaTextBox->setStyleSheet("QLineEdit{background: orange;}");
    } else {
        ui->alturaTextBox->setStyleSheet("QLineEdit{background: white;}");
    }


    return valide;
}

QString Validate::getMsg(){
    return this->myMsg;
}

//void Validate::setFields(std::vector<QLineEdit *> fields){
//    this->fields = fields;
//}

