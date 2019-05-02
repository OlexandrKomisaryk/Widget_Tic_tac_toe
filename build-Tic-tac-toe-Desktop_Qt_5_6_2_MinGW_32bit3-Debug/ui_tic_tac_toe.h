/********************************************************************************
** Form generated from reading UI file 'tic_tac_toe.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIC_TAC_TOE_H
#define UI_TIC_TAC_TOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tic_tac_toe
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *levelBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbX;
    QRadioButton *rbO;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QPushButton *btn9;
    QPushButton *btn3;
    QPushButton *btn8;
    QPushButton *btn4;
    QPushButton *btn1;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn5;
    QPushButton *btn2;
    QLabel *ShowResult;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStart;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QMainWindow *Tic_tac_toe)
    {
        if (Tic_tac_toe->objectName().isEmpty())
            Tic_tac_toe->setObjectName(QStringLiteral("Tic_tac_toe"));
        Tic_tac_toe->resize(275, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Tic_tac_toe->sizePolicy().hasHeightForWidth());
        Tic_tac_toe->setSizePolicy(sizePolicy);
        Tic_tac_toe->setMinimumSize(QSize(275, 400));
        Tic_tac_toe->setBaseSize(QSize(275, 400));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/tic-tac-toe_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Tic_tac_toe->setWindowIcon(icon);
        Tic_tac_toe->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(Tic_tac_toe);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(23, 12, 234, 379));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(3, -1, 3, 0);
        levelBox = new QComboBox(widget);
        levelBox->setObjectName(QStringLiteral("levelBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(levelBox->sizePolicy().hasHeightForWidth());
        levelBox->setSizePolicy(sizePolicy1);
        levelBox->setMinimumSize(QSize(70, 0));
        levelBox->setMaximumSize(QSize(70, 16777215));
        QFont font;
        font.setPointSize(11);
        levelBox->setFont(font);
        levelBox->setToolTipDuration(0);
        levelBox->setEditable(false);
        levelBox->setMinimumContentsLength(2);

        horizontalLayout_2->addWidget(levelBox);

        horizontalSpacer_2 = new QSpacerItem(14, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(3, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        rbX = new QRadioButton(widget);
        rbX->setObjectName(QStringLiteral("rbX"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(rbX->sizePolicy().hasHeightForWidth());
        rbX->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(14);
        rbX->setFont(font2);
        rbX->setStyleSheet(QStringLiteral("color: rgb(0, 100, 0);"));

        verticalLayout_2->addWidget(rbX);

        rbO = new QRadioButton(widget);
        rbO->setObjectName(QStringLiteral("rbO"));
        rbO->setFont(font2);
        rbO->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));

        verticalLayout_2->addWidget(rbO);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        btn9 = new QPushButton(widget);
        btn9->setObjectName(QStringLiteral("btn9"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy4);
        btn9->setMinimumSize(QSize(70, 70));
        btn9->setMaximumSize(QSize(70, 70));
        btn9->setSizeIncrement(QSize(70, 70));
        btn9->setBaseSize(QSize(70, 70));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        btn9->setFont(font3);
        btn9->setStyleSheet(QLatin1String("background-color: rgb(89, 153, 255);\n"
"border-color: rgb(21, 21, 21);\n"
"color: rgb(170, 0, 0);"));

        gridLayout->addWidget(btn9, 0, 2, 1, 1);

        btn3 = new QPushButton(widget);
        btn3->setObjectName(QStringLiteral("btn3"));
        sizePolicy4.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy4);
        btn3->setMinimumSize(QSize(70, 70));
        btn3->setMaximumSize(QSize(70, 70));
        btn3->setSizeIncrement(QSize(70, 70));
        btn3->setBaseSize(QSize(70, 70));
        btn3->setFont(font3);
        btn3->setStyleSheet(QLatin1String("background-color: rgb(89, 153, 255);\n"
"border-color: rgb(21, 21, 21);\n"
"color: rgb(170, 0, 0);"));

        gridLayout->addWidget(btn3, 2, 2, 1, 1);

        btn8 = new QPushButton(widget);
        btn8->setObjectName(QStringLiteral("btn8"));
        sizePolicy4.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy4);
        btn8->setMinimumSize(QSize(70, 70));
        btn8->setMaximumSize(QSize(70, 70));
        btn8->setSizeIncrement(QSize(70, 70));
        btn8->setBaseSize(QSize(70, 70));
        btn8->setFont(font3);
        btn8->setStyleSheet(QLatin1String("background-color: rgb(89, 153, 255);\n"
"border-color: rgb(21, 21, 21);\n"
"color: rgb(170, 0, 0);"));

        gridLayout->addWidget(btn8, 0, 1, 1, 1);

        btn4 = new QPushButton(widget);
        btn4->setObjectName(QStringLiteral("btn4"));
        sizePolicy4.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy4);
        btn4->setMinimumSize(QSize(70, 70));
        btn4->setMaximumSize(QSize(70, 70));
        btn4->setSizeIncrement(QSize(70, 70));
        btn4->setBaseSize(QSize(70, 70));
        btn4->setFont(font3);
        btn4->setStyleSheet(QLatin1String("background-color: rgb(89, 153, 255);\n"
"border-color: rgb(21, 21, 21);\n"
"color: rgb(170, 0, 0);"));

        gridLayout->addWidget(btn4, 1, 0, 1, 1);

        btn1 = new QPushButton(widget);
        btn1->setObjectName(QStringLiteral("btn1"));
        sizePolicy4.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy4);
        btn1->setMinimumSize(QSize(70, 70));
        btn1->setMaximumSize(QSize(70, 70));
        btn1->setSizeIncrement(QSize(70, 70));
        btn1->setBaseSize(QSize(70, 70));
        btn1->setFont(font3);
        btn1->setStyleSheet(QLatin1String("background-color: rgb(89, 153, 255);\n"
"border-color: rgb(21, 21, 21);\n"
"color: rgb(170, 0, 0);"));

        gridLayout->addWidget(btn1, 2, 0, 1, 1);

        btn6 = new QPushButton(widget);
        btn6->setObjectName(QStringLiteral("btn6"));
        sizePolicy4.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy4);
        btn6->setMinimumSize(QSize(70, 70));
        btn6->setMaximumSize(QSize(70, 70));
        btn6->setSizeIncrement(QSize(70, 70));
        btn6->setBaseSize(QSize(70, 70));
        btn6->setFont(font3);
        btn6->setStyleSheet(QLatin1String("background-color: rgb(89, 153, 255);\n"
"border-color: rgb(21, 21, 21);\n"
"color: rgb(170, 0, 0);"));

        gridLayout->addWidget(btn6, 1, 2, 1, 1);

        btn7 = new QPushButton(widget);
        btn7->setObjectName(QStringLiteral("btn7"));
        sizePolicy4.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy4);
        btn7->setMinimumSize(QSize(70, 70));
        btn7->setMaximumSize(QSize(70, 70));
        btn7->setSizeIncrement(QSize(70, 70));
        btn7->setBaseSize(QSize(70, 70));
        btn7->setFont(font3);
        btn7->setStyleSheet(QLatin1String("background-color: rgb(89, 153, 255);\n"
"border-color: rgb(21, 21, 21);\n"
"color: rgb(170, 0, 0);"));

        gridLayout->addWidget(btn7, 0, 0, 1, 1);

        btn5 = new QPushButton(widget);
        btn5->setObjectName(QStringLiteral("btn5"));
        sizePolicy4.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy4);
        btn5->setMinimumSize(QSize(70, 70));
        btn5->setMaximumSize(QSize(70, 70));
        btn5->setSizeIncrement(QSize(70, 70));
        btn5->setBaseSize(QSize(70, 70));
        btn5->setFont(font3);
        btn5->setStyleSheet(QLatin1String("background-color: rgb(89, 153, 255);\n"
"border-color: rgb(21, 21, 21);\n"
"color: rgb(170, 0, 0);"));

        gridLayout->addWidget(btn5, 1, 1, 1, 1);

        btn2 = new QPushButton(widget);
        btn2->setObjectName(QStringLiteral("btn2"));
        sizePolicy4.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy4);
        btn2->setMinimumSize(QSize(70, 70));
        btn2->setMaximumSize(QSize(70, 70));
        btn2->setSizeIncrement(QSize(70, 70));
        btn2->setBaseSize(QSize(70, 70));
        btn2->setFont(font3);
        btn2->setStyleSheet(QLatin1String("background-color: rgb(89, 153, 255);\n"
"border-color: rgb(21, 21, 21);\n"
"color: rgb(170, 0, 0);"));

        gridLayout->addWidget(btn2, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        ShowResult = new QLabel(widget);
        ShowResult->setObjectName(QStringLiteral("ShowResult"));
        ShowResult->setFont(font2);
        ShowResult->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));
        ShowResult->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ShowResult);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnStart = new QPushButton(widget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        sizePolicy.setHeightForWidth(btnStart->sizePolicy().hasHeightForWidth());
        btnStart->setSizePolicy(sizePolicy);
        btnStart->setMinimumSize(QSize(100, 40));
        btnStart->setMaximumSize(QSize(100, 40));
        btnStart->setFont(font1);
        btnStart->setStyleSheet(QStringLiteral("background-color: rgb(12, 152, 35);"));

        horizontalLayout->addWidget(btnStart);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(widget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        sizePolicy.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy);
        btnClose->setMinimumSize(QSize(100, 40));
        btnClose->setMaximumSize(QSize(100, 40));
        btnClose->setFont(font1);
        btnClose->setStyleSheet(QStringLiteral("background-color: rgb(255, 16, 28);"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);

        Tic_tac_toe->setCentralWidget(centralWidget);

        retranslateUi(Tic_tac_toe);
        QObject::connect(btnClose, SIGNAL(clicked()), Tic_tac_toe, SLOT(close()));

        QMetaObject::connectSlotsByName(Tic_tac_toe);
    } // setupUi

    void retranslateUi(QMainWindow *Tic_tac_toe)
    {
        Tic_tac_toe->setWindowTitle(QApplication::translate("Tic_tac_toe", "Tic_tac_toe", 0));
        levelBox->clear();
        levelBox->insertItems(0, QStringList()
         << QApplication::translate("Tic_tac_toe", "Easy", 0)
         << QApplication::translate("Tic_tac_toe", "Normal", 0)
         << QApplication::translate("Tic_tac_toe", "Hard", 0)
        );
        label->setText(QApplication::translate("Tic_tac_toe", "Select a\n"
"character", 0));
        rbX->setText(QApplication::translate("Tic_tac_toe", "X", 0));
        rbO->setText(QApplication::translate("Tic_tac_toe", "O", 0));
        btn9->setText(QString());
        btn3->setText(QString());
        btn8->setText(QString());
        btn4->setText(QString());
        btn1->setText(QString());
        btn6->setText(QString());
        btn7->setText(QString());
        btn5->setText(QString());
        btn2->setText(QString());
        ShowResult->setText(QString());
        btnStart->setText(QApplication::translate("Tic_tac_toe", "Start", 0));
        btnClose->setText(QApplication::translate("Tic_tac_toe", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class Tic_tac_toe: public Ui_Tic_tac_toe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIC_TAC_TOE_H
