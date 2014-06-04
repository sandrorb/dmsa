/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *rimDireitoCaptacaoLabel;
    QLabel *rimEsquerdoCaptacaoLabel;
    QLabel *profundidadeRenalLabel;
    QLabel *fatorKLabel;
    QWidget *layoutWidget;
    QFormLayout *formLayoutRimEsquerdo;
    QLabel *label_9;
    QLineEdit *rimEsquerdoTextBox;
    QLabel *label_10;
    QLineEdit *rimEsquerdoAreaTextBox;
    QLabel *label_11;
    QLineEdit *rimEsquerdoBGTextBox;
    QLabel *label_12;
    QLineEdit *rimEsquerdoBGAreaTextBox;
    QLabel *label_18;
    QLineEdit *rimEsquerdoTempoTextBox;
    QWidget *layoutWidget1;
    QFormLayout *formLayoutRimDireito;
    QLabel *label_16;
    QLineEdit *rimDireitoTextBox;
    QLabel *label_15;
    QLineEdit *rimDireitoAreaTextBox;
    QLineEdit *rimDireitoBGTextBox;
    QLabel *label_14;
    QLineEdit *rimDireitoBGAreaTextBox;
    QLabel *label_19;
    QLineEdit *rimDireitoTempoTextBox;
    QLabel *label_13;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QLabel *label_20;
    QLineEdit *idadeTextBox;
    QLabel *label_24;
    QLabel *label_21;
    QLineEdit *pesoTextBox;
    QLabel *label_23;
    QLabel *label_22;
    QLineEdit *alturaTextBox;
    QLabel *label_25;
    QWidget *layoutWidget3;
    QFormLayout *formLayoutPadrao;
    QLabel *label;
    QLineEdit *padraoTextBox;
    QLabel *label_2;
    QLineEdit *padraoAreaTextBox;
    QLabel *label_3;
    QLineEdit *padraoBGTextBox;
    QLabel *label_4;
    QLineEdit *padraoBGAreaTextBox;
    QLabel *label_17;
    QLineEdit *padraoTempoTextBox;
    QWidget *layoutWidget4;
    QFormLayout *formLayoutSeringas;
    QLabel *label_5;
    QLineEdit *padraoSeringaCheiaTextBox;
    QLabel *label_6;
    QLineEdit *padraoSeringaVaziaTextBox;
    QLabel *label_7;
    QLineEdit *pacienteSeringaCheiaTextBox;
    QLabel *label_8;
    QLineEdit *pacienteSeringaVaziaTextBox;
    QPlainTextEdit *msgText;
    QLabel *label_32;
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
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(100, 370, 141, 20));
        label_26->setLayoutDirection(Qt::RightToLeft);
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(100, 400, 141, 20));
        label_27->setLayoutDirection(Qt::RightToLeft);
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_28 = new QLabel(centralWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(370, 370, 91, 20));
        label_28->setLayoutDirection(Qt::RightToLeft);
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_28->setIndent(-1);
        label_29 = new QLabel(centralWidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(360, 400, 101, 20));
        label_29->setLayoutDirection(Qt::RightToLeft);
        label_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_30 = new QLabel(centralWidget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(540, 370, 21, 20));
        label_31 = new QLabel(centralWidget);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(540, 400, 21, 20));
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
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 170, 251, 152));
        formLayoutRimEsquerdo = new QFormLayout(layoutWidget);
        formLayoutRimEsquerdo->setSpacing(6);
        formLayoutRimEsquerdo->setContentsMargins(11, 11, 11, 11);
        formLayoutRimEsquerdo->setObjectName(QStringLiteral("formLayoutRimEsquerdo"));
        formLayoutRimEsquerdo->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimEsquerdo->setWidget(0, QFormLayout::LabelRole, label_9);

        rimEsquerdoTextBox = new QLineEdit(layoutWidget);
        rimEsquerdoTextBox->setObjectName(QStringLiteral("rimEsquerdoTextBox"));

        formLayoutRimEsquerdo->setWidget(0, QFormLayout::FieldRole, rimEsquerdoTextBox);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimEsquerdo->setWidget(1, QFormLayout::LabelRole, label_10);

        rimEsquerdoAreaTextBox = new QLineEdit(layoutWidget);
        rimEsquerdoAreaTextBox->setObjectName(QStringLiteral("rimEsquerdoAreaTextBox"));

        formLayoutRimEsquerdo->setWidget(1, QFormLayout::FieldRole, rimEsquerdoAreaTextBox);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimEsquerdo->setWidget(2, QFormLayout::LabelRole, label_11);

        rimEsquerdoBGTextBox = new QLineEdit(layoutWidget);
        rimEsquerdoBGTextBox->setObjectName(QStringLiteral("rimEsquerdoBGTextBox"));

        formLayoutRimEsquerdo->setWidget(2, QFormLayout::FieldRole, rimEsquerdoBGTextBox);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimEsquerdo->setWidget(3, QFormLayout::LabelRole, label_12);

        rimEsquerdoBGAreaTextBox = new QLineEdit(layoutWidget);
        rimEsquerdoBGAreaTextBox->setObjectName(QStringLiteral("rimEsquerdoBGAreaTextBox"));

        formLayoutRimEsquerdo->setWidget(3, QFormLayout::FieldRole, rimEsquerdoBGAreaTextBox);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimEsquerdo->setWidget(4, QFormLayout::LabelRole, label_18);

        rimEsquerdoTempoTextBox = new QLineEdit(layoutWidget);
        rimEsquerdoTempoTextBox->setObjectName(QStringLiteral("rimEsquerdoTempoTextBox"));

        formLayoutRimEsquerdo->setWidget(4, QFormLayout::FieldRole, rimEsquerdoTempoTextBox);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(370, 170, 231, 152));
        formLayoutRimDireito = new QFormLayout(layoutWidget1);
        formLayoutRimDireito->setSpacing(6);
        formLayoutRimDireito->setContentsMargins(11, 11, 11, 11);
        formLayoutRimDireito->setObjectName(QStringLiteral("formLayoutRimDireito"));
        formLayoutRimDireito->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayoutRimDireito->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimDireito->setWidget(0, QFormLayout::LabelRole, label_16);

        rimDireitoTextBox = new QLineEdit(layoutWidget1);
        rimDireitoTextBox->setObjectName(QStringLiteral("rimDireitoTextBox"));

        formLayoutRimDireito->setWidget(0, QFormLayout::FieldRole, rimDireitoTextBox);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimDireito->setWidget(1, QFormLayout::LabelRole, label_15);

        rimDireitoAreaTextBox = new QLineEdit(layoutWidget1);
        rimDireitoAreaTextBox->setObjectName(QStringLiteral("rimDireitoAreaTextBox"));

        formLayoutRimDireito->setWidget(1, QFormLayout::FieldRole, rimDireitoAreaTextBox);

        rimDireitoBGTextBox = new QLineEdit(layoutWidget1);
        rimDireitoBGTextBox->setObjectName(QStringLiteral("rimDireitoBGTextBox"));

        formLayoutRimDireito->setWidget(2, QFormLayout::FieldRole, rimDireitoBGTextBox);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimDireito->setWidget(3, QFormLayout::LabelRole, label_14);

        rimDireitoBGAreaTextBox = new QLineEdit(layoutWidget1);
        rimDireitoBGAreaTextBox->setObjectName(QStringLiteral("rimDireitoBGAreaTextBox"));

        formLayoutRimDireito->setWidget(3, QFormLayout::FieldRole, rimDireitoBGAreaTextBox);

        label_19 = new QLabel(layoutWidget1);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimDireito->setWidget(4, QFormLayout::LabelRole, label_19);

        rimDireitoTempoTextBox = new QLineEdit(layoutWidget1);
        rimDireitoTempoTextBox->setObjectName(QStringLiteral("rimDireitoTempoTextBox"));

        formLayoutRimDireito->setWidget(4, QFormLayout::FieldRole, rimDireitoTempoTextBox);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayoutRimDireito->setWidget(2, QFormLayout::LabelRole, label_13);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(490, 11, 171, 91));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_20, 0, 0, 1, 1);

        idadeTextBox = new QLineEdit(layoutWidget2);
        idadeTextBox->setObjectName(QStringLiteral("idadeTextBox"));

        gridLayout->addWidget(idadeTextBox, 0, 1, 1, 1);

        label_24 = new QLabel(layoutWidget2);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout->addWidget(label_24, 0, 2, 1, 1);

        label_21 = new QLabel(layoutWidget2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_21, 1, 0, 1, 1);

        pesoTextBox = new QLineEdit(layoutWidget2);
        pesoTextBox->setObjectName(QStringLiteral("pesoTextBox"));

        gridLayout->addWidget(pesoTextBox, 1, 1, 1, 1);

        label_23 = new QLabel(layoutWidget2);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout->addWidget(label_23, 1, 2, 1, 1);

        label_22 = new QLabel(layoutWidget2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_22, 2, 0, 1, 1);

        alturaTextBox = new QLineEdit(layoutWidget2);
        alturaTextBox->setObjectName(QStringLiteral("alturaTextBox"));

        gridLayout->addWidget(alturaTextBox, 2, 1, 1, 1);

        label_25 = new QLabel(layoutWidget2);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout->addWidget(label_25, 2, 2, 1, 1);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 10, 211, 151));
        formLayoutPadrao = new QFormLayout(layoutWidget3);
        formLayoutPadrao->setSpacing(6);
        formLayoutPadrao->setContentsMargins(11, 11, 11, 11);
        formLayoutPadrao->setObjectName(QStringLiteral("formLayoutPadrao"));
        formLayoutPadrao->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));

        formLayoutPadrao->setWidget(0, QFormLayout::LabelRole, label);

        padraoTextBox = new QLineEdit(layoutWidget3);
        padraoTextBox->setObjectName(QStringLiteral("padraoTextBox"));
        padraoTextBox->setLayoutDirection(Qt::LeftToRight);
        padraoTextBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayoutPadrao->setWidget(0, QFormLayout::FieldRole, padraoTextBox);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayoutPadrao->setWidget(1, QFormLayout::LabelRole, label_2);

        padraoAreaTextBox = new QLineEdit(layoutWidget3);
        padraoAreaTextBox->setObjectName(QStringLiteral("padraoAreaTextBox"));
        padraoAreaTextBox->setLayoutDirection(Qt::LeftToRight);
        padraoAreaTextBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayoutPadrao->setWidget(1, QFormLayout::FieldRole, padraoAreaTextBox);

        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayoutPadrao->setWidget(2, QFormLayout::LabelRole, label_3);

        padraoBGTextBox = new QLineEdit(layoutWidget3);
        padraoBGTextBox->setObjectName(QStringLiteral("padraoBGTextBox"));

        formLayoutPadrao->setWidget(2, QFormLayout::FieldRole, padraoBGTextBox);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayoutPadrao->setWidget(3, QFormLayout::LabelRole, label_4);

        padraoBGAreaTextBox = new QLineEdit(layoutWidget3);
        padraoBGAreaTextBox->setObjectName(QStringLiteral("padraoBGAreaTextBox"));

        formLayoutPadrao->setWidget(3, QFormLayout::FieldRole, padraoBGAreaTextBox);

        label_17 = new QLabel(layoutWidget3);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayoutPadrao->setWidget(4, QFormLayout::LabelRole, label_17);

        padraoTempoTextBox = new QLineEdit(layoutWidget3);
        padraoTempoTextBox->setObjectName(QStringLiteral("padraoTempoTextBox"));

        formLayoutPadrao->setWidget(4, QFormLayout::FieldRole, padraoTempoTextBox);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(230, 10, 241, 121));
        formLayoutSeringas = new QFormLayout(layoutWidget4);
        formLayoutSeringas->setSpacing(6);
        formLayoutSeringas->setContentsMargins(11, 11, 11, 11);
        formLayoutSeringas->setObjectName(QStringLiteral("formLayoutSeringas"));
        formLayoutSeringas->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayoutSeringas->setWidget(0, QFormLayout::LabelRole, label_5);

        padraoSeringaCheiaTextBox = new QLineEdit(layoutWidget4);
        padraoSeringaCheiaTextBox->setObjectName(QStringLiteral("padraoSeringaCheiaTextBox"));

        formLayoutSeringas->setWidget(0, QFormLayout::FieldRole, padraoSeringaCheiaTextBox);

        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayoutSeringas->setWidget(1, QFormLayout::LabelRole, label_6);

        padraoSeringaVaziaTextBox = new QLineEdit(layoutWidget4);
        padraoSeringaVaziaTextBox->setObjectName(QStringLiteral("padraoSeringaVaziaTextBox"));

        formLayoutSeringas->setWidget(1, QFormLayout::FieldRole, padraoSeringaVaziaTextBox);

        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayoutSeringas->setWidget(2, QFormLayout::LabelRole, label_7);

        pacienteSeringaCheiaTextBox = new QLineEdit(layoutWidget4);
        pacienteSeringaCheiaTextBox->setObjectName(QStringLiteral("pacienteSeringaCheiaTextBox"));

        formLayoutSeringas->setWidget(2, QFormLayout::FieldRole, pacienteSeringaCheiaTextBox);

        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayoutSeringas->setWidget(3, QFormLayout::LabelRole, label_8);

        pacienteSeringaVaziaTextBox = new QLineEdit(layoutWidget4);
        pacienteSeringaVaziaTextBox->setObjectName(QStringLiteral("pacienteSeringaVaziaTextBox"));

        formLayoutSeringas->setWidget(3, QFormLayout::FieldRole, pacienteSeringaVaziaTextBox);

        msgText = new QPlainTextEdit(centralWidget);
        msgText->setObjectName(QStringLiteral("msgText"));
        msgText->setGeometry(QRect(10, 440, 671, 61));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Grande"));
        msgText->setFont(font);
        msgText->setStyleSheet(QStringLiteral("background-color: lightblue; color: red;"));
        msgText->setFrameShape(QFrame::StyledPanel);
        msgText->setReadOnly(true);
        label_32 = new QLabel(centralWidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(320, 370, 31, 16));
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
        label_26->setText(QApplication::translate("MainWindow", "Profundidade Renal:", 0));
        label_27->setText(QApplication::translate("MainWindow", "Fator K:", 0));
        label_28->setText(QApplication::translate("MainWindow", "Rim Direito:", 0));
        label_29->setText(QApplication::translate("MainWindow", "Rim Esquerdo:", 0));
        label_30->setText(QApplication::translate("MainWindow", "%", 0));
        label_31->setText(QApplication::translate("MainWindow", "%", 0));
        rimDireitoCaptacaoLabel->setText(QString());
        rimEsquerdoCaptacaoLabel->setText(QString());
        profundidadeRenalLabel->setText(QString());
        fatorKLabel->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Rim Esquerdo:", 0));
        label_10->setText(QApplication::translate("MainWindow", "\303\201rea do Rim Esquerdo:", 0));
        label_11->setText(QApplication::translate("MainWindow", "BG do Rim Esquerdo:", 0));
        label_12->setText(QApplication::translate("MainWindow", "\303\201rea BG do Rim Esquerdo:", 0));
        label_18->setText(QApplication::translate("MainWindow", "Tempo:", 0));
        label_16->setText(QApplication::translate("MainWindow", "Rim Direito:", 0));
        label_15->setText(QApplication::translate("MainWindow", "\303\201rea do Rim Direito:", 0));
        label_14->setText(QApplication::translate("MainWindow", "\303\201rea BG do Rim Direito:", 0));
        label_19->setText(QApplication::translate("MainWindow", "Tempo:", 0));
        label_13->setText(QApplication::translate("MainWindow", "BG do Rim Direito:", 0));
        label_20->setText(QApplication::translate("MainWindow", "Idade:", 0));
        label_24->setText(QApplication::translate("MainWindow", "ano(s)", 0));
        label_21->setText(QApplication::translate("MainWindow", "Peso:", 0));
        label_23->setText(QApplication::translate("MainWindow", "Kg", 0));
        label_22->setText(QApplication::translate("MainWindow", "Altura:", 0));
        label_25->setText(QApplication::translate("MainWindow", "cm", 0));
        label->setText(QApplication::translate("MainWindow", "Padr\303\243o:", 0));
        label_2->setText(QApplication::translate("MainWindow", "\303\201rea do Padr\303\243o:", 0));
        label_3->setText(QApplication::translate("MainWindow", "BG Padr\303\243o:", 0));
        label_4->setText(QApplication::translate("MainWindow", "\303\201rea do BG do Padr\303\243o:", 0));
        label_17->setText(QApplication::translate("MainWindow", "Tempo:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Seringa do Padr\303\243o Cheia:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Seringa do Padr\303\243o Vazia:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Seringa do Paciente Cheia:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Seringa do Paciente Vazia:", 0));
        label_32->setText(QApplication::translate("MainWindow", "cm", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
