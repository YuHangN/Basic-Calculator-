/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *BackSpaceButton;
    QPushButton *Number4Button;
    QPushButton *Number2Button;
    QPushButton *EqualButton;
    QPushButton *Number6Button;
    QPushButton *Number7Button;
    QPushButton *Num1Button;
    QPushButton *Number9Button;
    QPushButton *Number3Button;
    QPushButton *Number8Button;
    QPushButton *Number5Button;
    QPushButton *RightBracketButton;
    QPushButton *DivideButton;
    QPushButton *CrossButton;
    QPushButton *ClearButton;
    QPushButton *PlusButton;
    QPushButton *MinusButton;
    QPushButton *LeftBracketButton;
    QPushButton *Number0Button;
    QLineEdit *Screen;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(287, 341);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 271, 321));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BackSpaceButton = new QPushButton(widget);
        BackSpaceButton->setObjectName(QString::fromUtf8("BackSpaceButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BackSpaceButton->sizePolicy().hasHeightForWidth());
        BackSpaceButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        BackSpaceButton->setFont(font);

        gridLayout->addWidget(BackSpaceButton, 1, 3, 1, 1);

        Number4Button = new QPushButton(widget);
        Number4Button->setObjectName(QString::fromUtf8("Number4Button"));
        sizePolicy.setHeightForWidth(Number4Button->sizePolicy().hasHeightForWidth());
        Number4Button->setSizePolicy(sizePolicy);
        Number4Button->setFont(font);

        gridLayout->addWidget(Number4Button, 3, 0, 1, 1);

        Number2Button = new QPushButton(widget);
        Number2Button->setObjectName(QString::fromUtf8("Number2Button"));
        sizePolicy.setHeightForWidth(Number2Button->sizePolicy().hasHeightForWidth());
        Number2Button->setSizePolicy(sizePolicy);
        Number2Button->setFont(font);

        gridLayout->addWidget(Number2Button, 4, 1, 1, 1);

        EqualButton = new QPushButton(widget);
        EqualButton->setObjectName(QString::fromUtf8("EqualButton"));
        EqualButton->setEnabled(true);
        sizePolicy.setHeightForWidth(EqualButton->sizePolicy().hasHeightForWidth());
        EqualButton->setSizePolicy(sizePolicy);
        EqualButton->setFont(font);

        gridLayout->addWidget(EqualButton, 4, 3, 2, 1);

        Number6Button = new QPushButton(widget);
        Number6Button->setObjectName(QString::fromUtf8("Number6Button"));
        sizePolicy.setHeightForWidth(Number6Button->sizePolicy().hasHeightForWidth());
        Number6Button->setSizePolicy(sizePolicy);
        Number6Button->setFont(font);

        gridLayout->addWidget(Number6Button, 3, 2, 1, 1);

        Number7Button = new QPushButton(widget);
        Number7Button->setObjectName(QString::fromUtf8("Number7Button"));
        sizePolicy.setHeightForWidth(Number7Button->sizePolicy().hasHeightForWidth());
        Number7Button->setSizePolicy(sizePolicy);
        Number7Button->setFont(font);

        gridLayout->addWidget(Number7Button, 2, 0, 1, 1);

        Num1Button = new QPushButton(widget);
        Num1Button->setObjectName(QString::fromUtf8("Num1Button"));
        sizePolicy.setHeightForWidth(Num1Button->sizePolicy().hasHeightForWidth());
        Num1Button->setSizePolicy(sizePolicy);
        Num1Button->setFont(font);

        gridLayout->addWidget(Num1Button, 4, 0, 1, 1);

        Number9Button = new QPushButton(widget);
        Number9Button->setObjectName(QString::fromUtf8("Number9Button"));
        sizePolicy.setHeightForWidth(Number9Button->sizePolicy().hasHeightForWidth());
        Number9Button->setSizePolicy(sizePolicy);
        Number9Button->setFont(font);

        gridLayout->addWidget(Number9Button, 2, 2, 1, 1);

        Number3Button = new QPushButton(widget);
        Number3Button->setObjectName(QString::fromUtf8("Number3Button"));
        sizePolicy.setHeightForWidth(Number3Button->sizePolicy().hasHeightForWidth());
        Number3Button->setSizePolicy(sizePolicy);
        Number3Button->setFont(font);

        gridLayout->addWidget(Number3Button, 4, 2, 1, 1);

        Number8Button = new QPushButton(widget);
        Number8Button->setObjectName(QString::fromUtf8("Number8Button"));
        sizePolicy.setHeightForWidth(Number8Button->sizePolicy().hasHeightForWidth());
        Number8Button->setSizePolicy(sizePolicy);
        Number8Button->setFont(font);

        gridLayout->addWidget(Number8Button, 2, 1, 1, 1);

        Number5Button = new QPushButton(widget);
        Number5Button->setObjectName(QString::fromUtf8("Number5Button"));
        sizePolicy.setHeightForWidth(Number5Button->sizePolicy().hasHeightForWidth());
        Number5Button->setSizePolicy(sizePolicy);
        Number5Button->setFont(font);

        gridLayout->addWidget(Number5Button, 3, 1, 1, 1);

        RightBracketButton = new QPushButton(widget);
        RightBracketButton->setObjectName(QString::fromUtf8("RightBracketButton"));
        sizePolicy.setHeightForWidth(RightBracketButton->sizePolicy().hasHeightForWidth());
        RightBracketButton->setSizePolicy(sizePolicy);
        RightBracketButton->setFont(font);

        gridLayout->addWidget(RightBracketButton, 5, 2, 1, 1);

        DivideButton = new QPushButton(widget);
        DivideButton->setObjectName(QString::fromUtf8("DivideButton"));
        sizePolicy.setHeightForWidth(DivideButton->sizePolicy().hasHeightForWidth());
        DivideButton->setSizePolicy(sizePolicy);
        DivideButton->setFont(font);

        gridLayout->addWidget(DivideButton, 3, 3, 1, 1);

        CrossButton = new QPushButton(widget);
        CrossButton->setObjectName(QString::fromUtf8("CrossButton"));
        sizePolicy.setHeightForWidth(CrossButton->sizePolicy().hasHeightForWidth());
        CrossButton->setSizePolicy(sizePolicy);
        CrossButton->setFont(font);

        gridLayout->addWidget(CrossButton, 2, 3, 1, 1);

        ClearButton = new QPushButton(widget);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));
        sizePolicy.setHeightForWidth(ClearButton->sizePolicy().hasHeightForWidth());
        ClearButton->setSizePolicy(sizePolicy);
        ClearButton->setFont(font);

        gridLayout->addWidget(ClearButton, 1, 0, 1, 1);

        PlusButton = new QPushButton(widget);
        PlusButton->setObjectName(QString::fromUtf8("PlusButton"));
        sizePolicy.setHeightForWidth(PlusButton->sizePolicy().hasHeightForWidth());
        PlusButton->setSizePolicy(sizePolicy);
        PlusButton->setFont(font);

        gridLayout->addWidget(PlusButton, 1, 1, 1, 1);

        MinusButton = new QPushButton(widget);
        MinusButton->setObjectName(QString::fromUtf8("MinusButton"));
        sizePolicy.setHeightForWidth(MinusButton->sizePolicy().hasHeightForWidth());
        MinusButton->setSizePolicy(sizePolicy);
        MinusButton->setFont(font);

        gridLayout->addWidget(MinusButton, 1, 2, 1, 1);

        LeftBracketButton = new QPushButton(widget);
        LeftBracketButton->setObjectName(QString::fromUtf8("LeftBracketButton"));
        sizePolicy.setHeightForWidth(LeftBracketButton->sizePolicy().hasHeightForWidth());
        LeftBracketButton->setSizePolicy(sizePolicy);
        LeftBracketButton->setFont(font);

        gridLayout->addWidget(LeftBracketButton, 5, 0, 1, 1);

        Number0Button = new QPushButton(widget);
        Number0Button->setObjectName(QString::fromUtf8("Number0Button"));
        sizePolicy.setHeightForWidth(Number0Button->sizePolicy().hasHeightForWidth());
        Number0Button->setSizePolicy(sizePolicy);
        Number0Button->setFont(font);

        gridLayout->addWidget(Number0Button, 5, 1, 1, 1);

        Screen = new QLineEdit(widget);
        Screen->setObjectName(QString::fromUtf8("Screen"));
        sizePolicy.setHeightForWidth(Screen->sizePolicy().hasHeightForWidth());
        Screen->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Screen, 0, 0, 1, 4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        BackSpaceButton->setText(QCoreApplication::translate("Widget", "\345\233\236\351\200\200", nullptr));
        Number4Button->setText(QCoreApplication::translate("Widget", "4", nullptr));
        Number2Button->setText(QCoreApplication::translate("Widget", "2", nullptr));
        EqualButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        Number6Button->setText(QCoreApplication::translate("Widget", "6", nullptr));
        Number7Button->setText(QCoreApplication::translate("Widget", "7", nullptr));
        Num1Button->setText(QCoreApplication::translate("Widget", "1", nullptr));
        Number9Button->setText(QCoreApplication::translate("Widget", "9", nullptr));
        Number3Button->setText(QCoreApplication::translate("Widget", "3", nullptr));
        Number8Button->setText(QCoreApplication::translate("Widget", "8", nullptr));
        Number5Button->setText(QCoreApplication::translate("Widget", "5", nullptr));
        RightBracketButton->setText(QCoreApplication::translate("Widget", ")", nullptr));
        DivideButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        CrossButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        ClearButton->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        PlusButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        MinusButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        LeftBracketButton->setText(QCoreApplication::translate("Widget", "(", nullptr));
        Number0Button->setText(QCoreApplication::translate("Widget", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
