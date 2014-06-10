/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonCalcular;
    QLabel *profundidadeRenalNomeLabel;
    QLabel *fatorKNomeLabel;
    QLabel *rimDireitoCaptacaoNomeLabel;
    QLabel *rimEsquerdoCaptacaoNomeLabel;
    QLabel *rimDireitoCaptacaoUnidadeLabel;
    QLabel *rimEsquerdoCaptacaoUnidadeLabel;
    QLabel *rimDireitoCaptacaoLabel;
    QLabel *rimEsquerdoCaptacaoLabel;
    QLabel *profundidadeRenalLabel;
    QLabel *fatorKLabel;
    QWidget *layoutWidgetRimEsquerdo;
    QFormLayout *formLayoutRimEsquerdo;
    QLabel *rimEsquerdoLabel;
    QLineEdit *rimEsquerdoTextBox;
    QLabel *rimEsquerdoAreaLabel;
    QLineEdit *rimEsquerdoAreaTextBox;
    QLabel *rimEsquerdoBGLabel;
    QLineEdit *rimEsquerdoBGTextBox;
    QLabel *rimEsquerdoBGAreaLabel;
    QLineEdit *rimEsquerdoBGAreaTextBox;
    QLabel *rimEsquerdoTempoLabel;
    QLineEdit *rimEsquerdoTempoTextBox;
    QWidget *layoutWidgetRimDireito;
    QFormLayout *formLayoutRimDireito;
    QLabel *rimDireitoLabel;
    QLineEdit *rimDireitoTextBox;
    QLabel *rimDireitoAreaLabel;
    QLineEdit *rimDireitoAreaTextBox;
    QLabel *rimDireitoBGLabel;
    QLineEdit *rimDireitoBGTextBox;
    QLabel *rimDireitoBGAreaLabel;
    QLineEdit *rimDireitoBGAreaTextBox;
    QLabel *rimDireitoTempoLabel;
    QLineEdit *rimDireitoTempoTextBox;
    QWidget *layoutWidgetPaciente;
    QGridLayout *gridLayoutPaciente;
    QLabel *idadeNomeLabel;
    QLineEdit *idadeTextBox;
    QLabel *idadeUnidadeLabel;
    QLabel *pesoNomeLabel;
    QLineEdit *pesoTextBox;
    QLabel *pesoUnidadeLabel;
    QLabel *alturaNomeLabel;
    QLineEdit *alturaTextBox;
    QLabel *alturaUnidadeLabel;
    QWidget *layoutWidgetPadrao;
    QFormLayout *formLayoutPadrao;
    QLabel *padraoNomeLabel;
    QLineEdit *padraoTextBox;
    QLabel *padraoAreaNomeLabel;
    QLineEdit *padraoAreaTextBox;
    QLabel *padraoBGNomeLabel;
    QLineEdit *padraoBGTextBox;
    QLabel *padraoBGAreaNomeLabel;
    QLineEdit *padraoBGAreaTextBox;
    QLineEdit *padraoTempoTextBox;
    QLabel *padraoTempoNomeLabel;
    QWidget *layoutWidgetSeringas;
    QFormLayout *layoutSeringas;
    QLabel *padraoSeringaCheiaLabel;
    QLineEdit *padraoSeringaCheiaTextBox;
    QLabel *padraoSeringaVaziaLabel;
    QLineEdit *padraoSeringaVaziaTextBox;
    QLabel *pacienteSeringaCheiaLabel;
    QLineEdit *pacienteSeringaCheiaTextBox;
    QLabel *pacienteSeringaVaziaLabel;
    QLineEdit *pacienteSeringaVaziaTextBox;
    QPlainTextEdit *msgText;
    QLabel *profundidadeRenalUnidadeLabel;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(690, 545);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonCalcular = new QPushButton(centralWidget);
        pushButtonCalcular->setObjectName(QStringLiteral("pushButtonCalcular"));
        pushButtonCalcular->setGeometry(QRect(300, 330, 114, 32));
        profundidadeRenalNomeLabel = new QLabel(centralWidget);
        profundidadeRenalNomeLabel->setObjectName(QStringLiteral("profundidadeRenalNomeLabel"));
        profundidadeRenalNomeLabel->setGeometry(QRect(100, 370, 141, 20));
        profundidadeRenalNomeLabel->setLayoutDirection(Qt::RightToLeft);
        profundidadeRenalNomeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        fatorKNomeLabel = new QLabel(centralWidget);
        fatorKNomeLabel->setObjectName(QStringLiteral("fatorKNomeLabel"));
        fatorKNomeLabel->setGeometry(QRect(100, 400, 141, 20));
        fatorKNomeLabel->setLayoutDirection(Qt::RightToLeft);
        fatorKNomeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rimDireitoCaptacaoNomeLabel = new QLabel(centralWidget);
        rimDireitoCaptacaoNomeLabel->setObjectName(QStringLiteral("rimDireitoCaptacaoNomeLabel"));
        rimDireitoCaptacaoNomeLabel->setGeometry(QRect(370, 370, 91, 20));
        rimDireitoCaptacaoNomeLabel->setLayoutDirection(Qt::RightToLeft);
        rimDireitoCaptacaoNomeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rimDireitoCaptacaoNomeLabel->setIndent(-1);
        rimEsquerdoCaptacaoNomeLabel = new QLabel(centralWidget);
        rimEsquerdoCaptacaoNomeLabel->setObjectName(QStringLiteral("rimEsquerdoCaptacaoNomeLabel"));
        rimEsquerdoCaptacaoNomeLabel->setGeometry(QRect(360, 400, 101, 20));
        rimEsquerdoCaptacaoNomeLabel->setLayoutDirection(Qt::RightToLeft);
        rimEsquerdoCaptacaoNomeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rimDireitoCaptacaoUnidadeLabel = new QLabel(centralWidget);
        rimDireitoCaptacaoUnidadeLabel->setObjectName(QStringLiteral("rimDireitoCaptacaoUnidadeLabel"));
        rimDireitoCaptacaoUnidadeLabel->setGeometry(QRect(540, 370, 21, 20));
        rimEsquerdoCaptacaoUnidadeLabel = new QLabel(centralWidget);
        rimEsquerdoCaptacaoUnidadeLabel->setObjectName(QStringLiteral("rimEsquerdoCaptacaoUnidadeLabel"));
        rimEsquerdoCaptacaoUnidadeLabel->setGeometry(QRect(540, 400, 21, 20));
        rimDireitoCaptacaoLabel = new QLabel(centralWidget);
        rimDireitoCaptacaoLabel->setObjectName(QStringLiteral("rimDireitoCaptacaoLabel"));
        rimDireitoCaptacaoLabel->setGeometry(QRect(470, 370, 61, 20));
        rimDireitoCaptacaoLabel->setStyleSheet(QStringLiteral("background-color: lightgreen"));
        rimDireitoCaptacaoLabel->setFrameShape(QFrame::Box);
        rimDireitoCaptacaoLabel->setScaledContents(false);
        rimEsquerdoCaptacaoLabel = new QLabel(centralWidget);
        rimEsquerdoCaptacaoLabel->setObjectName(QStringLiteral("rimEsquerdoCaptacaoLabel"));
        rimEsquerdoCaptacaoLabel->setGeometry(QRect(470, 400, 61, 20));
        QPalette palette;
        QBrush brush(QColor(144, 238, 144, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(69, 69, 69, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        rimEsquerdoCaptacaoLabel->setPalette(palette);
        rimEsquerdoCaptacaoLabel->setStyleSheet(QStringLiteral("background-color: lightgreen"));
        rimEsquerdoCaptacaoLabel->setFrameShape(QFrame::Box);
        rimEsquerdoCaptacaoLabel->setScaledContents(false);
        profundidadeRenalLabel = new QLabel(centralWidget);
        profundidadeRenalLabel->setObjectName(QStringLiteral("profundidadeRenalLabel"));
        profundidadeRenalLabel->setGeometry(QRect(250, 370, 61, 20));
        profundidadeRenalLabel->setStyleSheet(QStringLiteral("background-color: lightgray"));
        profundidadeRenalLabel->setFrameShape(QFrame::Box);
        profundidadeRenalLabel->setScaledContents(false);
        fatorKLabel = new QLabel(centralWidget);
        fatorKLabel->setObjectName(QStringLiteral("fatorKLabel"));
        fatorKLabel->setGeometry(QRect(250, 400, 61, 20));
        fatorKLabel->setStyleSheet(QStringLiteral("background-color: lightgray"));
        fatorKLabel->setFrameShape(QFrame::Box);
        fatorKLabel->setScaledContents(false);
        layoutWidgetRimEsquerdo = new QWidget(centralWidget);
        layoutWidgetRimEsquerdo->setObjectName(QStringLiteral("layoutWidgetRimEsquerdo"));
        layoutWidgetRimEsquerdo->setGeometry(QRect(90, 170, 251, 152));
        formLayoutRimEsquerdo = new QFormLayout(layoutWidgetRimEsquerdo);
        formLayoutRimEsquerdo->setSpacing(6);
        formLayoutRimEsquerdo->setContentsMargins(11, 11, 11, 11);
        formLayoutRimEsquerdo->setObjectName(QStringLiteral("formLayoutRimEsquerdo"));
        formLayoutRimEsquerdo->setContentsMargins(0, 0, 0, 0);
        rimEsquerdoLabel = new QLabel(layoutWidgetRimEsquerdo);
        rimEsquerdoLabel->setObjectName(QStringLiteral("rimEsquerdoLabel"));
        rimEsquerdoLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimEsquerdo->setWidget(0, QFormLayout::LabelRole, rimEsquerdoLabel);

        rimEsquerdoTextBox = new QLineEdit(layoutWidgetRimEsquerdo);
        rimEsquerdoTextBox->setObjectName(QStringLiteral("rimEsquerdoTextBox"));

        formLayoutRimEsquerdo->setWidget(0, QFormLayout::FieldRole, rimEsquerdoTextBox);

        rimEsquerdoAreaLabel = new QLabel(layoutWidgetRimEsquerdo);
        rimEsquerdoAreaLabel->setObjectName(QStringLiteral("rimEsquerdoAreaLabel"));
        rimEsquerdoAreaLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimEsquerdo->setWidget(1, QFormLayout::LabelRole, rimEsquerdoAreaLabel);

        rimEsquerdoAreaTextBox = new QLineEdit(layoutWidgetRimEsquerdo);
        rimEsquerdoAreaTextBox->setObjectName(QStringLiteral("rimEsquerdoAreaTextBox"));

        formLayoutRimEsquerdo->setWidget(1, QFormLayout::FieldRole, rimEsquerdoAreaTextBox);

        rimEsquerdoBGLabel = new QLabel(layoutWidgetRimEsquerdo);
        rimEsquerdoBGLabel->setObjectName(QStringLiteral("rimEsquerdoBGLabel"));
        rimEsquerdoBGLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimEsquerdo->setWidget(2, QFormLayout::LabelRole, rimEsquerdoBGLabel);

        rimEsquerdoBGTextBox = new QLineEdit(layoutWidgetRimEsquerdo);
        rimEsquerdoBGTextBox->setObjectName(QStringLiteral("rimEsquerdoBGTextBox"));

        formLayoutRimEsquerdo->setWidget(2, QFormLayout::FieldRole, rimEsquerdoBGTextBox);

        rimEsquerdoBGAreaLabel = new QLabel(layoutWidgetRimEsquerdo);
        rimEsquerdoBGAreaLabel->setObjectName(QStringLiteral("rimEsquerdoBGAreaLabel"));
        rimEsquerdoBGAreaLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimEsquerdo->setWidget(3, QFormLayout::LabelRole, rimEsquerdoBGAreaLabel);

        rimEsquerdoBGAreaTextBox = new QLineEdit(layoutWidgetRimEsquerdo);
        rimEsquerdoBGAreaTextBox->setObjectName(QStringLiteral("rimEsquerdoBGAreaTextBox"));

        formLayoutRimEsquerdo->setWidget(3, QFormLayout::FieldRole, rimEsquerdoBGAreaTextBox);

        rimEsquerdoTempoLabel = new QLabel(layoutWidgetRimEsquerdo);
        rimEsquerdoTempoLabel->setObjectName(QStringLiteral("rimEsquerdoTempoLabel"));
        rimEsquerdoTempoLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimEsquerdo->setWidget(4, QFormLayout::LabelRole, rimEsquerdoTempoLabel);

        rimEsquerdoTempoTextBox = new QLineEdit(layoutWidgetRimEsquerdo);
        rimEsquerdoTempoTextBox->setObjectName(QStringLiteral("rimEsquerdoTempoTextBox"));

        formLayoutRimEsquerdo->setWidget(4, QFormLayout::FieldRole, rimEsquerdoTempoTextBox);

        layoutWidgetRimDireito = new QWidget(centralWidget);
        layoutWidgetRimDireito->setObjectName(QStringLiteral("layoutWidgetRimDireito"));
        layoutWidgetRimDireito->setGeometry(QRect(370, 170, 231, 151));
        formLayoutRimDireito = new QFormLayout(layoutWidgetRimDireito);
        formLayoutRimDireito->setSpacing(6);
        formLayoutRimDireito->setContentsMargins(11, 11, 11, 11);
        formLayoutRimDireito->setObjectName(QStringLiteral("formLayoutRimDireito"));
        formLayoutRimDireito->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayoutRimDireito->setContentsMargins(0, 0, 0, 0);
        rimDireitoLabel = new QLabel(layoutWidgetRimDireito);
        rimDireitoLabel->setObjectName(QStringLiteral("rimDireitoLabel"));
        rimDireitoLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimDireito->setWidget(0, QFormLayout::LabelRole, rimDireitoLabel);

        rimDireitoTextBox = new QLineEdit(layoutWidgetRimDireito);
        rimDireitoTextBox->setObjectName(QStringLiteral("rimDireitoTextBox"));

        formLayoutRimDireito->setWidget(0, QFormLayout::FieldRole, rimDireitoTextBox);

        rimDireitoAreaLabel = new QLabel(layoutWidgetRimDireito);
        rimDireitoAreaLabel->setObjectName(QStringLiteral("rimDireitoAreaLabel"));
        rimDireitoAreaLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimDireito->setWidget(1, QFormLayout::LabelRole, rimDireitoAreaLabel);

        rimDireitoAreaTextBox = new QLineEdit(layoutWidgetRimDireito);
        rimDireitoAreaTextBox->setObjectName(QStringLiteral("rimDireitoAreaTextBox"));

        formLayoutRimDireito->setWidget(1, QFormLayout::FieldRole, rimDireitoAreaTextBox);

        rimDireitoBGLabel = new QLabel(layoutWidgetRimDireito);
        rimDireitoBGLabel->setObjectName(QStringLiteral("rimDireitoBGLabel"));
        rimDireitoBGLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimDireito->setWidget(2, QFormLayout::LabelRole, rimDireitoBGLabel);

        rimDireitoBGTextBox = new QLineEdit(layoutWidgetRimDireito);
        rimDireitoBGTextBox->setObjectName(QStringLiteral("rimDireitoBGTextBox"));

        formLayoutRimDireito->setWidget(2, QFormLayout::FieldRole, rimDireitoBGTextBox);

        rimDireitoBGAreaLabel = new QLabel(layoutWidgetRimDireito);
        rimDireitoBGAreaLabel->setObjectName(QStringLiteral("rimDireitoBGAreaLabel"));
        rimDireitoBGAreaLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimDireito->setWidget(3, QFormLayout::LabelRole, rimDireitoBGAreaLabel);

        rimDireitoBGAreaTextBox = new QLineEdit(layoutWidgetRimDireito);
        rimDireitoBGAreaTextBox->setObjectName(QStringLiteral("rimDireitoBGAreaTextBox"));

        formLayoutRimDireito->setWidget(3, QFormLayout::FieldRole, rimDireitoBGAreaTextBox);

        rimDireitoTempoLabel = new QLabel(layoutWidgetRimDireito);
        rimDireitoTempoLabel->setObjectName(QStringLiteral("rimDireitoTempoLabel"));
        rimDireitoTempoLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimDireito->setWidget(4, QFormLayout::LabelRole, rimDireitoTempoLabel);

        rimDireitoTempoTextBox = new QLineEdit(layoutWidgetRimDireito);
        rimDireitoTempoTextBox->setObjectName(QStringLiteral("rimDireitoTempoTextBox"));

        formLayoutRimDireito->setWidget(4, QFormLayout::FieldRole, rimDireitoTempoTextBox);

        layoutWidgetPaciente = new QWidget(centralWidget);
        layoutWidgetPaciente->setObjectName(QStringLiteral("layoutWidgetPaciente"));
        layoutWidgetPaciente->setGeometry(QRect(490, 11, 171, 121));
        gridLayoutPaciente = new QGridLayout(layoutWidgetPaciente);
        gridLayoutPaciente->setSpacing(6);
        gridLayoutPaciente->setContentsMargins(11, 11, 11, 11);
        gridLayoutPaciente->setObjectName(QStringLiteral("gridLayoutPaciente"));
        gridLayoutPaciente->setVerticalSpacing(-1);
        gridLayoutPaciente->setContentsMargins(0, 0, 0, 0);
        idadeNomeLabel = new QLabel(layoutWidgetPaciente);
        idadeNomeLabel->setObjectName(QStringLiteral("idadeNomeLabel"));
        idadeNomeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayoutPaciente->addWidget(idadeNomeLabel, 0, 0, 1, 1);

        idadeTextBox = new QLineEdit(layoutWidgetPaciente);
        idadeTextBox->setObjectName(QStringLiteral("idadeTextBox"));

        gridLayoutPaciente->addWidget(idadeTextBox, 0, 1, 1, 1);

        idadeUnidadeLabel = new QLabel(layoutWidgetPaciente);
        idadeUnidadeLabel->setObjectName(QStringLiteral("idadeUnidadeLabel"));

        gridLayoutPaciente->addWidget(idadeUnidadeLabel, 0, 2, 1, 1);

        pesoNomeLabel = new QLabel(layoutWidgetPaciente);
        pesoNomeLabel->setObjectName(QStringLiteral("pesoNomeLabel"));
        pesoNomeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayoutPaciente->addWidget(pesoNomeLabel, 1, 0, 1, 1);

        pesoTextBox = new QLineEdit(layoutWidgetPaciente);
        pesoTextBox->setObjectName(QStringLiteral("pesoTextBox"));

        gridLayoutPaciente->addWidget(pesoTextBox, 1, 1, 1, 1);

        pesoUnidadeLabel = new QLabel(layoutWidgetPaciente);
        pesoUnidadeLabel->setObjectName(QStringLiteral("pesoUnidadeLabel"));

        gridLayoutPaciente->addWidget(pesoUnidadeLabel, 1, 2, 1, 1);

        alturaNomeLabel = new QLabel(layoutWidgetPaciente);
        alturaNomeLabel->setObjectName(QStringLiteral("alturaNomeLabel"));
        alturaNomeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayoutPaciente->addWidget(alturaNomeLabel, 2, 0, 1, 1);

        alturaTextBox = new QLineEdit(layoutWidgetPaciente);
        alturaTextBox->setObjectName(QStringLiteral("alturaTextBox"));

        gridLayoutPaciente->addWidget(alturaTextBox, 2, 1, 1, 1);

        alturaUnidadeLabel = new QLabel(layoutWidgetPaciente);
        alturaUnidadeLabel->setObjectName(QStringLiteral("alturaUnidadeLabel"));

        gridLayoutPaciente->addWidget(alturaUnidadeLabel, 2, 2, 1, 1);

        layoutWidgetPadrao = new QWidget(centralWidget);
        layoutWidgetPadrao->setObjectName(QStringLiteral("layoutWidgetPadrao"));
        layoutWidgetPadrao->setGeometry(QRect(10, 10, 211, 151));
        formLayoutPadrao = new QFormLayout(layoutWidgetPadrao);
        formLayoutPadrao->setSpacing(6);
        formLayoutPadrao->setContentsMargins(11, 11, 11, 11);
        formLayoutPadrao->setObjectName(QStringLiteral("formLayoutPadrao"));
        formLayoutPadrao->setContentsMargins(0, 0, 0, 0);
        padraoNomeLabel = new QLabel(layoutWidgetPadrao);
        padraoNomeLabel->setObjectName(QStringLiteral("padraoNomeLabel"));

        formLayoutPadrao->setWidget(0, QFormLayout::LabelRole, padraoNomeLabel);

        padraoTextBox = new QLineEdit(layoutWidgetPadrao);
        padraoTextBox->setObjectName(QStringLiteral("padraoTextBox"));
        padraoTextBox->setLayoutDirection(Qt::LeftToRight);
        padraoTextBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayoutPadrao->setWidget(0, QFormLayout::FieldRole, padraoTextBox);

        padraoAreaNomeLabel = new QLabel(layoutWidgetPadrao);
        padraoAreaNomeLabel->setObjectName(QStringLiteral("padraoAreaNomeLabel"));

        formLayoutPadrao->setWidget(1, QFormLayout::LabelRole, padraoAreaNomeLabel);

        padraoAreaTextBox = new QLineEdit(layoutWidgetPadrao);
        padraoAreaTextBox->setObjectName(QStringLiteral("padraoAreaTextBox"));
        padraoAreaTextBox->setLayoutDirection(Qt::LeftToRight);
        padraoAreaTextBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayoutPadrao->setWidget(1, QFormLayout::FieldRole, padraoAreaTextBox);

        padraoBGNomeLabel = new QLabel(layoutWidgetPadrao);
        padraoBGNomeLabel->setObjectName(QStringLiteral("padraoBGNomeLabel"));

        formLayoutPadrao->setWidget(2, QFormLayout::LabelRole, padraoBGNomeLabel);

        padraoBGTextBox = new QLineEdit(layoutWidgetPadrao);
        padraoBGTextBox->setObjectName(QStringLiteral("padraoBGTextBox"));

        formLayoutPadrao->setWidget(2, QFormLayout::FieldRole, padraoBGTextBox);

        padraoBGAreaNomeLabel = new QLabel(layoutWidgetPadrao);
        padraoBGAreaNomeLabel->setObjectName(QStringLiteral("padraoBGAreaNomeLabel"));

        formLayoutPadrao->setWidget(3, QFormLayout::LabelRole, padraoBGAreaNomeLabel);

        padraoBGAreaTextBox = new QLineEdit(layoutWidgetPadrao);
        padraoBGAreaTextBox->setObjectName(QStringLiteral("padraoBGAreaTextBox"));

        formLayoutPadrao->setWidget(3, QFormLayout::FieldRole, padraoBGAreaTextBox);

        padraoTempoTextBox = new QLineEdit(layoutWidgetPadrao);
        padraoTempoTextBox->setObjectName(QStringLiteral("padraoTempoTextBox"));

        formLayoutPadrao->setWidget(4, QFormLayout::FieldRole, padraoTempoTextBox);

        padraoTempoNomeLabel = new QLabel(layoutWidgetPadrao);
        padraoTempoNomeLabel->setObjectName(QStringLiteral("padraoTempoNomeLabel"));

        formLayoutPadrao->setWidget(4, QFormLayout::LabelRole, padraoTempoNomeLabel);

        layoutWidgetSeringas = new QWidget(centralWidget);
        layoutWidgetSeringas->setObjectName(QStringLiteral("layoutWidgetSeringas"));
        layoutWidgetSeringas->setGeometry(QRect(230, 10, 241, 121));
        layoutSeringas = new QFormLayout(layoutWidgetSeringas);
        layoutSeringas->setSpacing(6);
        layoutSeringas->setContentsMargins(11, 11, 11, 11);
        layoutSeringas->setObjectName(QStringLiteral("layoutSeringas"));
        layoutSeringas->setContentsMargins(0, 0, 0, 0);
        padraoSeringaCheiaLabel = new QLabel(layoutWidgetSeringas);
        padraoSeringaCheiaLabel->setObjectName(QStringLiteral("padraoSeringaCheiaLabel"));

        layoutSeringas->setWidget(0, QFormLayout::LabelRole, padraoSeringaCheiaLabel);

        padraoSeringaCheiaTextBox = new QLineEdit(layoutWidgetSeringas);
        padraoSeringaCheiaTextBox->setObjectName(QStringLiteral("padraoSeringaCheiaTextBox"));

        layoutSeringas->setWidget(0, QFormLayout::FieldRole, padraoSeringaCheiaTextBox);

        padraoSeringaVaziaLabel = new QLabel(layoutWidgetSeringas);
        padraoSeringaVaziaLabel->setObjectName(QStringLiteral("padraoSeringaVaziaLabel"));

        layoutSeringas->setWidget(1, QFormLayout::LabelRole, padraoSeringaVaziaLabel);

        padraoSeringaVaziaTextBox = new QLineEdit(layoutWidgetSeringas);
        padraoSeringaVaziaTextBox->setObjectName(QStringLiteral("padraoSeringaVaziaTextBox"));

        layoutSeringas->setWidget(1, QFormLayout::FieldRole, padraoSeringaVaziaTextBox);

        pacienteSeringaCheiaLabel = new QLabel(layoutWidgetSeringas);
        pacienteSeringaCheiaLabel->setObjectName(QStringLiteral("pacienteSeringaCheiaLabel"));

        layoutSeringas->setWidget(2, QFormLayout::LabelRole, pacienteSeringaCheiaLabel);

        pacienteSeringaCheiaTextBox = new QLineEdit(layoutWidgetSeringas);
        pacienteSeringaCheiaTextBox->setObjectName(QStringLiteral("pacienteSeringaCheiaTextBox"));

        layoutSeringas->setWidget(2, QFormLayout::FieldRole, pacienteSeringaCheiaTextBox);

        pacienteSeringaVaziaLabel = new QLabel(layoutWidgetSeringas);
        pacienteSeringaVaziaLabel->setObjectName(QStringLiteral("pacienteSeringaVaziaLabel"));

        layoutSeringas->setWidget(3, QFormLayout::LabelRole, pacienteSeringaVaziaLabel);

        pacienteSeringaVaziaTextBox = new QLineEdit(layoutWidgetSeringas);
        pacienteSeringaVaziaTextBox->setObjectName(QStringLiteral("pacienteSeringaVaziaTextBox"));

        layoutSeringas->setWidget(3, QFormLayout::FieldRole, pacienteSeringaVaziaTextBox);

        msgText = new QPlainTextEdit(centralWidget);
        msgText->setObjectName(QStringLiteral("msgText"));
        msgText->setGeometry(QRect(10, 440, 671, 61));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Grande"));
        msgText->setFont(font);
        msgText->setStyleSheet(QStringLiteral("background-color: lightblue; color: red;"));
        msgText->setLocale(QLocale(QLocale::Portuguese, QLocale::Brazil));
        msgText->setFrameShape(QFrame::StyledPanel);
        msgText->setReadOnly(true);
        profundidadeRenalUnidadeLabel = new QLabel(centralWidget);
        profundidadeRenalUnidadeLabel->setObjectName(QStringLiteral("profundidadeRenalUnidadeLabel"));
        profundidadeRenalUnidadeLabel->setGeometry(QRect(320, 370, 31, 16));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 690, 22));
        sizePolicy.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
        menuBar->setSizePolicy(sizePolicy);
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButtonCalcular->setText(QApplication::translate("MainWindow", "Calcular", 0));
        profundidadeRenalNomeLabel->setText(QApplication::translate("MainWindow", "Profundidade Renal:", 0));
        fatorKNomeLabel->setText(QApplication::translate("MainWindow", "Fator K:", 0));
        rimDireitoCaptacaoNomeLabel->setText(QApplication::translate("MainWindow", "Rim Direito:", 0));
        rimEsquerdoCaptacaoNomeLabel->setText(QApplication::translate("MainWindow", "Rim Esquerdo:", 0));
        rimDireitoCaptacaoUnidadeLabel->setText(QApplication::translate("MainWindow", "%", 0));
        rimEsquerdoCaptacaoUnidadeLabel->setText(QApplication::translate("MainWindow", "%", 0));
        rimDireitoCaptacaoLabel->setText(QString());
        rimEsquerdoCaptacaoLabel->setText(QString());
        profundidadeRenalLabel->setText(QString());
        fatorKLabel->setText(QString());
        rimEsquerdoLabel->setText(QApplication::translate("MainWindow", "Rim Esquerdo:", 0));
        rimEsquerdoAreaLabel->setText(QApplication::translate("MainWindow", "\303\201rea do Rim Esquerdo:", 0));
        rimEsquerdoBGLabel->setText(QApplication::translate("MainWindow", "BG do Rim Esquerdo:", 0));
        rimEsquerdoBGAreaLabel->setText(QApplication::translate("MainWindow", "\303\201rea BG do Rim Esquerdo:", 0));
        rimEsquerdoTempoLabel->setText(QApplication::translate("MainWindow", "Tempo (segundos):", 0));
        rimDireitoLabel->setText(QApplication::translate("MainWindow", "Rim Direito:", 0));
        rimDireitoAreaLabel->setText(QApplication::translate("MainWindow", "\303\201rea do Rim Direito:", 0));
        rimDireitoBGLabel->setText(QApplication::translate("MainWindow", "BG do Rim Direito:", 0));
        rimDireitoBGAreaLabel->setText(QApplication::translate("MainWindow", "\303\201rea BG do Rim Direito:", 0));
        rimDireitoTempoLabel->setText(QApplication::translate("MainWindow", "Tempo (segundos):", 0));
        idadeNomeLabel->setText(QApplication::translate("MainWindow", "Idade:", 0));
        idadeUnidadeLabel->setText(QApplication::translate("MainWindow", "ano(s)", 0));
        pesoNomeLabel->setText(QApplication::translate("MainWindow", "Peso:", 0));
        pesoUnidadeLabel->setText(QApplication::translate("MainWindow", "Kg", 0));
        alturaNomeLabel->setText(QApplication::translate("MainWindow", "Altura:", 0));
        alturaUnidadeLabel->setText(QApplication::translate("MainWindow", "cm", 0));
        padraoNomeLabel->setText(QApplication::translate("MainWindow", "Padr\303\243o:", 0));
        padraoAreaNomeLabel->setText(QApplication::translate("MainWindow", "\303\201rea do Padr\303\243o:", 0));
        padraoBGNomeLabel->setText(QApplication::translate("MainWindow", "BG Padr\303\243o:", 0));
        padraoBGAreaNomeLabel->setText(QApplication::translate("MainWindow", "\303\201rea do BG do Padr\303\243o:", 0));
        padraoTempoNomeLabel->setText(QApplication::translate("MainWindow", "Tempo (segundos):", 0));
        padraoSeringaCheiaLabel->setText(QApplication::translate("MainWindow", "Seringa do Padr\303\243o Cheia:", 0));
        padraoSeringaVaziaLabel->setText(QApplication::translate("MainWindow", "Seringa do Padr\303\243o Vazia:", 0));
        pacienteSeringaCheiaLabel->setText(QApplication::translate("MainWindow", "Seringa do Paciente Cheia:", 0));
        pacienteSeringaVaziaLabel->setText(QApplication::translate("MainWindow", "Seringa do Paciente Vazia:", 0));
        profundidadeRenalUnidadeLabel->setText(QApplication::translate("MainWindow", "cm", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
