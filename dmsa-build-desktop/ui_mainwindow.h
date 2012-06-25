/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Jun 24 21:13:30 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTeste;
    QAction *actionSrB;
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
    QWidget *widget;
    QFormLayout *formLayout_3;
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
    QWidget *widget1;
    QFormLayout *formLayout_4;
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
    QWidget *widget2;
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
    QWidget *widget3;
    QFormLayout *formLayout;
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
    QWidget *widget4;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLineEdit *padraoSeringaCheiaTextBox;
    QLabel *label_6;
    QLineEdit *padraoSeringaVaziaTextBox;
    QLabel *label_7;
    QLineEdit *pacienteSeringaCheiaTextBox;
    QLabel *label_8;
    QLineEdit *pacienteSeringaVaziaTextBox;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuSobre;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(690, 500);
        actionTeste = new QAction(MainWindow);
        actionTeste->setObjectName(QString::fromUtf8("actionTeste"));
        actionSrB = new QAction(MainWindow);
        actionSrB->setObjectName(QString::fromUtf8("actionSrB"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButtonCalcular = new QPushButton(centralWidget);
        pushButtonCalcular->setObjectName(QString::fromUtf8("pushButtonCalcular"));
        pushButtonCalcular->setGeometry(QRect(290, 350, 114, 32));
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(110, 400, 141, 20));
        label_26->setLayoutDirection(Qt::RightToLeft);
        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(110, 430, 141, 20));
        label_27->setLayoutDirection(Qt::RightToLeft);
        label_28 = new QLabel(centralWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(340, 400, 91, 20));
        label_28->setLayoutDirection(Qt::RightToLeft);
        label_29 = new QLabel(centralWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(330, 430, 101, 20));
        label_29->setLayoutDirection(Qt::RightToLeft);
        label_30 = new QLabel(centralWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(510, 400, 21, 20));
        label_31 = new QLabel(centralWidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(510, 430, 21, 20));
        rimDireitoCaptacaoLabel = new QLabel(centralWidget);
        rimDireitoCaptacaoLabel->setObjectName(QString::fromUtf8("rimDireitoCaptacaoLabel"));
        rimDireitoCaptacaoLabel->setGeometry(QRect(440, 400, 61, 20));
        rimDireitoCaptacaoLabel->setStyleSheet(QString::fromUtf8("background-color: lightgreen"));
        rimDireitoCaptacaoLabel->setScaledContents(false);
        rimEsquerdoCaptacaoLabel = new QLabel(centralWidget);
        rimEsquerdoCaptacaoLabel->setObjectName(QString::fromUtf8("rimEsquerdoCaptacaoLabel"));
        rimEsquerdoCaptacaoLabel->setGeometry(QRect(440, 430, 61, 20));
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
        rimEsquerdoCaptacaoLabel->setStyleSheet(QString::fromUtf8("background-color: lightgreen"));
        rimEsquerdoCaptacaoLabel->setScaledContents(false);
        profundidadeRenalLabel = new QLabel(centralWidget);
        profundidadeRenalLabel->setObjectName(QString::fromUtf8("profundidadeRenalLabel"));
        profundidadeRenalLabel->setGeometry(QRect(260, 400, 61, 20));
        profundidadeRenalLabel->setStyleSheet(QString::fromUtf8("background-color: lightgreen"));
        profundidadeRenalLabel->setScaledContents(false);
        fatorKLabel = new QLabel(centralWidget);
        fatorKLabel->setObjectName(QString::fromUtf8("fatorKLabel"));
        fatorKLabel->setGeometry(QRect(260, 430, 61, 20));
        fatorKLabel->setStyleSheet(QString::fromUtf8("background-color: lightgreen"));
        fatorKLabel->setScaledContents(false);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 180, 251, 151));
        formLayout_3 = new QFormLayout(widget);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_9);

        rimEsquerdoTextBox = new QLineEdit(widget);
        rimEsquerdoTextBox->setObjectName(QString::fromUtf8("rimEsquerdoTextBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, rimEsquerdoTextBox);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        rimEsquerdoAreaTextBox = new QLineEdit(widget);
        rimEsquerdoAreaTextBox->setObjectName(QString::fromUtf8("rimEsquerdoAreaTextBox"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, rimEsquerdoAreaTextBox);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        rimEsquerdoBGTextBox = new QLineEdit(widget);
        rimEsquerdoBGTextBox->setObjectName(QString::fromUtf8("rimEsquerdoBGTextBox"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, rimEsquerdoBGTextBox);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_12);

        rimEsquerdoBGAreaTextBox = new QLineEdit(widget);
        rimEsquerdoBGAreaTextBox->setObjectName(QString::fromUtf8("rimEsquerdoBGAreaTextBox"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, rimEsquerdoBGAreaTextBox);

        label_18 = new QLabel(widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_18);

        rimEsquerdoTempoTextBox = new QLineEdit(widget);
        rimEsquerdoTempoTextBox->setObjectName(QString::fromUtf8("rimEsquerdoTempoTextBox"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, rimEsquerdoTempoTextBox);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(360, 180, 231, 151));
        formLayout_4 = new QFormLayout(widget1);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(widget1);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_16);

        rimDireitoTextBox = new QLineEdit(widget1);
        rimDireitoTextBox->setObjectName(QString::fromUtf8("rimDireitoTextBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, rimDireitoTextBox);

        label_15 = new QLabel(widget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_15);

        rimDireitoAreaTextBox = new QLineEdit(widget1);
        rimDireitoAreaTextBox->setObjectName(QString::fromUtf8("rimDireitoAreaTextBox"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, rimDireitoAreaTextBox);

        rimDireitoBGTextBox = new QLineEdit(widget1);
        rimDireitoBGTextBox->setObjectName(QString::fromUtf8("rimDireitoBGTextBox"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, rimDireitoBGTextBox);

        label_14 = new QLabel(widget1);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_14);

        rimDireitoBGAreaTextBox = new QLineEdit(widget1);
        rimDireitoBGAreaTextBox->setObjectName(QString::fromUtf8("rimDireitoBGAreaTextBox"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, rimDireitoBGAreaTextBox);

        label_19 = new QLabel(widget1);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_19);

        rimDireitoTempoTextBox = new QLineEdit(widget1);
        rimDireitoTempoTextBox->setObjectName(QString::fromUtf8("rimDireitoTempoTextBox"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, rimDireitoTempoTextBox);

        label_13 = new QLabel(widget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_13);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(490, 11, 171, 91));
        gridLayout = new QGridLayout(widget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(widget2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_20, 0, 0, 1, 1);

        idadeTextBox = new QLineEdit(widget2);
        idadeTextBox->setObjectName(QString::fromUtf8("idadeTextBox"));

        gridLayout->addWidget(idadeTextBox, 0, 1, 1, 1);

        label_24 = new QLabel(widget2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout->addWidget(label_24, 0, 2, 1, 1);

        label_21 = new QLabel(widget2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_21, 1, 0, 1, 1);

        pesoTextBox = new QLineEdit(widget2);
        pesoTextBox->setObjectName(QString::fromUtf8("pesoTextBox"));

        gridLayout->addWidget(pesoTextBox, 1, 1, 1, 1);

        label_23 = new QLabel(widget2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout->addWidget(label_23, 1, 2, 1, 1);

        label_22 = new QLabel(widget2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_22, 2, 0, 1, 1);

        alturaTextBox = new QLineEdit(widget2);
        alturaTextBox->setObjectName(QString::fromUtf8("alturaTextBox"));

        gridLayout->addWidget(alturaTextBox, 2, 1, 1, 1);

        label_25 = new QLabel(widget2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout->addWidget(label_25, 2, 2, 1, 1);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(10, 10, 211, 161));
        formLayout = new QFormLayout(widget3);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget3);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        padraoTextBox = new QLineEdit(widget3);
        padraoTextBox->setObjectName(QString::fromUtf8("padraoTextBox"));
        padraoTextBox->setLayoutDirection(Qt::LeftToRight);
        padraoTextBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, padraoTextBox);

        label_2 = new QLabel(widget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        padraoAreaTextBox = new QLineEdit(widget3);
        padraoAreaTextBox->setObjectName(QString::fromUtf8("padraoAreaTextBox"));
        padraoAreaTextBox->setLayoutDirection(Qt::LeftToRight);
        padraoAreaTextBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, padraoAreaTextBox);

        label_3 = new QLabel(widget3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        padraoBGTextBox = new QLineEdit(widget3);
        padraoBGTextBox->setObjectName(QString::fromUtf8("padraoBGTextBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, padraoBGTextBox);

        label_4 = new QLabel(widget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        padraoBGAreaTextBox = new QLineEdit(widget3);
        padraoBGAreaTextBox->setObjectName(QString::fromUtf8("padraoBGAreaTextBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, padraoBGAreaTextBox);

        label_17 = new QLabel(widget3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_17);

        padraoTempoTextBox = new QLineEdit(widget3);
        padraoTempoTextBox->setObjectName(QString::fromUtf8("padraoTempoTextBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, padraoTempoTextBox);

        widget4 = new QWidget(centralWidget);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(230, 10, 241, 121));
        formLayout_2 = new QFormLayout(widget4);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        padraoSeringaCheiaTextBox = new QLineEdit(widget4);
        padraoSeringaCheiaTextBox->setObjectName(QString::fromUtf8("padraoSeringaCheiaTextBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, padraoSeringaCheiaTextBox);

        label_6 = new QLabel(widget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        padraoSeringaVaziaTextBox = new QLineEdit(widget4);
        padraoSeringaVaziaTextBox->setObjectName(QString::fromUtf8("padraoSeringaVaziaTextBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, padraoSeringaVaziaTextBox);

        label_7 = new QLabel(widget4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        pacienteSeringaCheiaTextBox = new QLineEdit(widget4);
        pacienteSeringaCheiaTextBox->setObjectName(QString::fromUtf8("pacienteSeringaCheiaTextBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pacienteSeringaCheiaTextBox);

        label_8 = new QLabel(widget4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        pacienteSeringaVaziaTextBox = new QLineEdit(widget4);
        pacienteSeringaVaziaTextBox->setObjectName(QString::fromUtf8("pacienteSeringaVaziaTextBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, pacienteSeringaVaziaTextBox);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 690, 22));
        menuSobre = new QMenu(menuBar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuSobre->menuAction());
        menuSobre->addAction(actionSrB);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionTeste->setText(QApplication::translate("MainWindow", "Teste", 0, QApplication::UnicodeUTF8));
        actionSrB->setText(QApplication::translate("MainWindow", "SrB", 0, QApplication::UnicodeUTF8));
        pushButtonCalcular->setText(QApplication::translate("MainWindow", "Calcular", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "Profundidade Renal:", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "Fator K:", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindow", "Rim Direito:", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "Rim Esquerdo:", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindow", "%", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindow", "%", 0, QApplication::UnicodeUTF8));
        rimDireitoCaptacaoLabel->setText(QString());
        rimEsquerdoCaptacaoLabel->setText(QString());
        profundidadeRenalLabel->setText(QString());
        fatorKLabel->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Rim Esquerdo:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\303\201rea do Rim Esquerdo:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "BG do Rim Esquerdo:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "\303\201rea BG do Rim Esquerdo:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Tempo:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Rim Direito:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "\303\201rea do Rim Direito:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "\303\201rea BG do Rim Direito:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Tempo:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "BG do Rim Direito:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Idade:", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "ano(s)", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Peso:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "Kg", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Altura:", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "cm", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Padr\303\243o:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\303\201rea do Padr\303\243o:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "BG Padr\303\243o:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\303\201rea do BG do Padr\303\243o:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Tempo:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Seringa do Padr\303\243o Cheia:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Seringa do Padr\303\243o Vazia:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Seringa do Paciente Cheia:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Seringa do Paciente Vazia:", 0, QApplication::UnicodeUTF8));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Sobre", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
