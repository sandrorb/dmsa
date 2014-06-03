#include <iostream>

#include <QDesktopWidget>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dmsa.h"
#include "pessoa.h"

#include <string>
#include <sstream>

#include <stdexcept>

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

    statusBar()->showMessage("DMSA v0.3 (c) 2014 - by Sandro Boschetti");
    statusBar()->setStyleSheet("background-color: lightgray");

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

int MainWindow::convertTextToInt(QString intString){
    bool ok = false;
    int result = intString.toInt(&ok,10);
    if (!ok) {
        //std::cout << "Conversão de "<< intString.toStdString() << " em número falou!" << std::endl;
        std::stringstream ss;
        ss << "Conversão de \""<< intString.toStdString() << "\" em número falou!"
           << " No campo idade só é permitido números!" << std::endl;
        std::string myMsg = ss.str();
        ui->msgText->appendPlainText(QString::fromStdString(myMsg));
    } else{
        ui->msgText->setPlainText("Ok!");
    }
    return result;
}

void MainWindow::calcular() {

    //validadeFields();

    pessoa.setIdade( convertTextToInt( ui->idadeTextBox->text() ) );

    pessoa.setPeso( ui->pesoTextBox->text().toInt() );
    pessoa.setAltura( ui->alturaTextBox->text().toInt() );

    dmsa.setPessoa(pessoa);

    /* No need for this function get from pessoa since pessoa is already in dmsa (???) */
    profundidadeRenal = dmsa.calculaProfundidadeRenal(pessoa.getIdade(), pessoa.getPeso(), pessoa.getAltura());
    fatorK = dmsa.calculaFatorK(profundidadeRenal);

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

