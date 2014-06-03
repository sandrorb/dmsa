#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "dmsa.h"
#include "pessoa.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    float profundidadeRenal, fatorK;

    int convertTextToInt(QString intString);

    void  validadeFields();

    //void calculaFatorK();

public slots:
    void calcular();
//    void calcularCaptacao();

private:
    Ui::MainWindow *ui;
    Pessoa pessoa;
    Dmsa dmsa;

};

#endif // MAINWINDOW_H
