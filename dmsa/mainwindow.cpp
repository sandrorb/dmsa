#include <QDesktopWidget>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dmsa.h"
#include "pessoa.h"
#include "validate.h"

// It necessary for exceptions
//#include <stdexcept>

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

    statusBar()->showMessage("DMSA v0.4.3 (c) 2014 - by Sandro Boschetti");
    statusBar()->setStyleSheet("background-color: lightgray");

    QObject::connect(ui->pushButtonCalcular, SIGNAL(clicked()), this, SLOT(calcular()) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calcular() {

/* The following four line is just for test */
//    std::vector<QLineEdit *> fields;
//    fields.push_back(ui->idadeTextBox);
//    validadeFields.setFields(fields); //(this->fields[0])->setText("Dentro de teste()");

    Validate validadeFields(ui);
    if (!validadeFields.validate()) {
        QString errorMsg = QString::fromUtf8("Há dado(s) não válido(s)! Digite somente números sem pontos e sem vírgulas.");
        ui->msgText->setPlainText(errorMsg);
        ui->profundidadeRenalLabel->setText("");
        ui->fatorKLabel->setText("");
        ui->rimDireitoCaptacaoLabel->setText("");
        ui->rimEsquerdoCaptacaoLabel->setText("");
    } else {

/* Pessoa doesn't need to be in the ui. It shall live in dmsa only (???) */
    pessoa.setIdade( ui->idadeTextBox->text().toInt() );
    pessoa.setPeso( ui->pesoTextBox->text().toInt() );
    pessoa.setAltura( ui->alturaTextBox->text().toInt() );
    dmsa.setPessoa(pessoa);

/* Dmsa shouldn't know about ui. Maybe the best approach is the ui set and get all
   information from/to dmsa. Dmsa shouldn't write/read to/from ui. Up to now, I choose
   to do so beacause Dmsa has to many fields. A similar reasoning should be made about
   Validade. */
    dmsa.calculaCaptacao(ui);
    } // If

}

