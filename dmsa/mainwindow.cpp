#include <iostream>

#include <QDesktopWidget>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dmsa.h"
#include "pessoa.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* Centraliza a Janela */
    QDesktopWidget *desktop = QApplication::desktop();
    this->move( (desktop->width() - this->width()) / 2, (desktop->height() - this->height()) / 2 );

    /* Preenche os campos do formulario */
    ui->padraoTextBox->setText(QString::number(dmsa.getPadrao()));
    ui->padraoAreaTextBox->setText(QString::number(dmsa.getPadraoArea()));
    ui->padraoBGTextBox->setText(QString::number(dmsa.getPadraoBG()));
    ui->padraoBGAreaTextBox->setText(QString::number(dmsa.getPadraoBGArea()));
    ui->padraoTempoTextBox->setText(QString::number(dmsa.getPadraoTempo()));

    ui->padraoSeringaCheiaTextBox->setText(QString::number(dmsa.getPadraoSeringaCheia()));
    ui->padraoSeringaVaziaTextBox->setText(QString::number(dmsa.getPadraoSeringaVazia()));
    ui->pacienteSeringaCheiaTextBox->setText(QString::number(dmsa.getPacienteSeringaCheia()));
    ui->pacienteSeringaVaziaTextBox->setText(QString::number(dmsa.getPacienteSeringaVazia()));

    ui->rimDireitoTextBox->setText(QString::number(dmsa.getRimDireito()));
    ui->rimDireitoBGTextBox->setText(QString::number(dmsa.getRimDireitoBG()));
    ui->rimDireitoAreaTextBox->setText(QString::number(dmsa.getRimDireitoArea()));
    ui->rimDireitoBGAreaTextBox->setText(QString::number(dmsa.getRimDireitoBGArea()));
    ui->rimDireitoTempoTextBox->setText(QString::number(dmsa.getRimDireitoTempo()));

    ui->rimEsquerdoTextBox->setText(QString::number(dmsa.getRimEsquerdo()));
    ui->rimEsquerdoBGTextBox->setText(QString::number(dmsa.getRimEsquerdoBG()));
    ui->rimEsquerdoAreaTextBox->setText(QString::number(dmsa.getRimEsquerdoArea()));
    ui->rimEsquerdoBGAreaTextBox->setText(QString::number(dmsa.getRimEsquerdoBGArea()));
    ui->rimEsquerdoTempoTextBox->setText(QString::number(dmsa.getRimEsquerdoTempo()));

    ui->idadeTextBox->setText(QString::number(pessoa.getIdade()));
    ui->pesoTextBox->setText(QString::number(pessoa.getPeso()));
    ui->alturaTextBox->setText(QString::number(pessoa.getAltura()));

    //ui->labelSrB->setStyleSheet(" background-color: yellow ");
    statusBar()->showMessage("DMSA v0.3 (c) 2014 - Sandro Boschetti");
    statusBar()->setStyleSheet("background-color: lightblue");

    /* Vincula o botao calcular com a respectiva funcao */
    QObject::connect(ui->pushButtonCalcular, SIGNAL(clicked()), this, SLOT(calcular()) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::validadeFields(){
    // Here is to put all the validation code for the fields.
    //ui->msgText->appendPlainText("Mensagem de erro! (Teste)");
}

/* This member functions must not live here. It must, perhaps, be in the Dmsa class. */

float MainWindow::calculaProfundidadeRenal(int idade, int peso, int altura){

    float a(0), b(0), c(0);

    if ((idade > 0) && (idade <= 9)) {
            a =  2.364F;
            b =  0.083F;
            c = -0.281F;
    } else if ((idade > 9) && (idade <= 19)) {
            a =  3.686F;
            b =  0.028F;
            c = -0.248F;
    } else {
            a = -1.017F;
            b =  0.049F;
            c =  2.198F;
    }

    // ?????? A altura deve passar de cm para metro ???????
    return a + (b * peso) + (c * (altura / 100.0F) );
}

float MainWindow::calculaFatorK(float profundidadeRenal){
    return ( 0.00023F * (profundidadeRenal * profundidadeRenal * profundidadeRenal) )
             + ( 0.0012F * ( profundidadeRenal * profundidadeRenal) )
             - ( 0.1332F * profundidadeRenal) + 1.5015F;
}

void MainWindow::calcular() {

    //validadeFields();

    pessoa.setIdade( ui->idadeTextBox->text().toInt() );
    pessoa.setPeso( ui->pesoTextBox->text().toInt() );
    pessoa.setAltura( ui->alturaTextBox->text().toInt() );
    dmsa.setPessoa(pessoa);

    profundidadeRenal = calculaProfundidadeRenal(pessoa.getIdade(), pessoa.getPeso(), pessoa.getAltura());

    fatorK = calculaFatorK(profundidadeRenal);

    ui->profundidadeRenalLabel->setText(QString::number(profundidadeRenal, 3, 3));
    ui->fatorKLabel->setText(QString::number(fatorK, 3, 3));

    float padraoSeringaCheia = ui->padraoSeringaCheiaTextBox->text().toInt();
    float padraoSeringaVazia = ui->padraoSeringaVaziaTextBox->text().toInt();
    float pacienteSeringaCheia = ui->pacienteSeringaCheiaTextBox->text().toInt();
    float pacienteSeringaVazia = ui->pacienteSeringaVaziaTextBox->text().toInt();

    float fatorCorrecao = ( (float)(padraoSeringaCheia - padraoSeringaVazia) ) /
                          ( (float)(pacienteSeringaCheia - pacienteSeringaVazia) );

    int rimDireito = ui->rimDireitoTextBox->text().toInt();
    int rimEsquerdo = ui->rimEsquerdoTextBox->text().toInt();
    float rimDireitoCorrigido = rimDireito * (fatorCorrecao / fatorK);
    float rimEsquerdoCorrigido = rimEsquerdo * (fatorCorrecao / fatorK);

    int padrao       = ui->padraoTextBox->text().toInt();
    int padraoArea   = ui->padraoAreaTextBox->text().toInt();
    int padraoBG     = ui->padraoBGTextBox->text().toInt();
    int padraoBGArea = ui->padraoBGAreaTextBox->text().toInt();

    float padraoCorrigido = padraoArea * ((padrao / padraoArea) - (padraoBG / padraoBGArea));

    int rimDireitoArea = ui->rimDireitoAreaTextBox->text().toInt();
    int rimDireitoBG = ui->rimDireitoBGTextBox->text().toInt();
    int rimDireitoBGArea = ui->rimDireitoBGAreaTextBox->text().toInt();

    int rimEsquerdoArea = ui->rimEsquerdoAreaTextBox->text().toInt();
    int rimEsquerdoBG = ui->rimEsquerdoBGTextBox->text().toInt();
    int rimEsquerdoBGArea = ui->rimEsquerdoBGAreaTextBox->text().toInt();


    rimDireitoCorrigido  = rimDireitoArea * ((rimDireitoCorrigido / rimDireitoArea) - (rimDireitoBG / rimDireitoBGArea));
    rimEsquerdoCorrigido = rimEsquerdoArea * ((rimEsquerdoCorrigido / rimEsquerdoArea) - (rimEsquerdoBG / rimEsquerdoBGArea));

    int padraoTempo = ui->padraoTempoTextBox->text().toInt();
    int rimDireitoTempo = ui->rimDireitoTempoTextBox->text().toInt();
    int rimEsquerdoTempo = ui->rimEsquerdoTempoTextBox->text().toInt();

    float rimDireitoCaptacao  = 100 * ( ((float)padraoTempo) / ((float)rimDireitoTempo) ) * (rimDireitoCorrigido / padraoCorrigido);
    float rimEsquerdoCaptacao = 100 * ( ((float)padraoTempo) / ((float)rimEsquerdoTempo) ) * (rimEsquerdoCorrigido / padraoCorrigido);

    ui->rimDireitoCaptacaoLabel->setText(QString::number(rimDireitoCaptacao, 3, 2));
    ui->rimEsquerdoCaptacaoLabel->setText(QString::number(rimEsquerdoCaptacao, 3, 2));

}

