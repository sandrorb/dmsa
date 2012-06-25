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
    Dmsa dmsa;
    Pessoa pessoa;
    float a, b, c, profundidadeRenal, fatorK;

public slots:
    void calcular();
//    void calcularCaptacao();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
