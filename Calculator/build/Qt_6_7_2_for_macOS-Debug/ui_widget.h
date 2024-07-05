/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *Screen;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *Number3Button;
    QPushButton *DivideButton;
    QPushButton *PlusButton;
    QPushButton *Number4Button;
    QPushButton *LeftBracketButton;
    QPushButton *MinusButton;
    QPushButton *ClearButton;
    QPushButton *Num1Button;
    QPushButton *Number6Button;
    QPushButton *CrossButton;
    QPushButton *RightBracketButton;
    QPushButton *Number8Button;
    QPushButton *BackSpaceButton;
    QPushButton *EqualButton;
    QPushButton *Number9Button;
    QPushButton *Number0Button;
    QPushButton *Number5Button;
    QPushButton *Number2Button;
    QPushButton *Number7Button;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(290, 387);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Screen = new QLineEdit(Widget);
        Screen->setObjectName("Screen");
        Screen->setGeometry(QRect(10, 10, 271, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Screen->sizePolicy().hasHeightForWidth());
        Screen->setSizePolicy(sizePolicy1);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 55, 271, 321));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Number3Button = new QPushButton(widget);
        Number3Button->setObjectName("Number3Button");
        sizePolicy1.setHeightForWidth(Number3Button->sizePolicy().hasHeightForWidth());
        Number3Button->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        Number3Button->setFont(font);

        gridLayout->addWidget(Number3Button, 3, 2, 1, 1);

        DivideButton = new QPushButton(widget);
        DivideButton->setObjectName("DivideButton");
        sizePolicy1.setHeightForWidth(DivideButton->sizePolicy().hasHeightForWidth());
        DivideButton->setSizePolicy(sizePolicy1);
        DivideButton->setFont(font);

        gridLayout->addWidget(DivideButton, 2, 3, 1, 1);

        PlusButton = new QPushButton(widget);
        PlusButton->setObjectName("PlusButton");
        sizePolicy1.setHeightForWidth(PlusButton->sizePolicy().hasHeightForWidth());
        PlusButton->setSizePolicy(sizePolicy1);
        PlusButton->setFont(font);

        gridLayout->addWidget(PlusButton, 0, 1, 1, 1);

        Number4Button = new QPushButton(widget);
        Number4Button->setObjectName("Number4Button");
        sizePolicy1.setHeightForWidth(Number4Button->sizePolicy().hasHeightForWidth());
        Number4Button->setSizePolicy(sizePolicy1);
        Number4Button->setFont(font);

        gridLayout->addWidget(Number4Button, 2, 0, 1, 1);

        LeftBracketButton = new QPushButton(widget);
        LeftBracketButton->setObjectName("LeftBracketButton");
        sizePolicy1.setHeightForWidth(LeftBracketButton->sizePolicy().hasHeightForWidth());
        LeftBracketButton->setSizePolicy(sizePolicy1);
        LeftBracketButton->setFont(font);

        gridLayout->addWidget(LeftBracketButton, 4, 0, 1, 1);

        MinusButton = new QPushButton(widget);
        MinusButton->setObjectName("MinusButton");
        sizePolicy1.setHeightForWidth(MinusButton->sizePolicy().hasHeightForWidth());
        MinusButton->setSizePolicy(sizePolicy1);
        MinusButton->setFont(font);

        gridLayout->addWidget(MinusButton, 0, 2, 1, 1);

        ClearButton = new QPushButton(widget);
        ClearButton->setObjectName("ClearButton");
        sizePolicy1.setHeightForWidth(ClearButton->sizePolicy().hasHeightForWidth());
        ClearButton->setSizePolicy(sizePolicy1);
        ClearButton->setFont(font);

        gridLayout->addWidget(ClearButton, 0, 0, 1, 1);

        Num1Button = new QPushButton(widget);
        Num1Button->setObjectName("Num1Button");
        sizePolicy1.setHeightForWidth(Num1Button->sizePolicy().hasHeightForWidth());
        Num1Button->setSizePolicy(sizePolicy1);
        Num1Button->setFont(font);

        gridLayout->addWidget(Num1Button, 3, 0, 1, 1);

        Number6Button = new QPushButton(widget);
        Number6Button->setObjectName("Number6Button");
        sizePolicy1.setHeightForWidth(Number6Button->sizePolicy().hasHeightForWidth());
        Number6Button->setSizePolicy(sizePolicy1);
        Number6Button->setFont(font);

        gridLayout->addWidget(Number6Button, 2, 2, 1, 1);

        CrossButton = new QPushButton(widget);
        CrossButton->setObjectName("CrossButton");
        sizePolicy1.setHeightForWidth(CrossButton->sizePolicy().hasHeightForWidth());
        CrossButton->setSizePolicy(sizePolicy1);
        CrossButton->setFont(font);

        gridLayout->addWidget(CrossButton, 1, 3, 1, 1);

        RightBracketButton = new QPushButton(widget);
        RightBracketButton->setObjectName("RightBracketButton");
        sizePolicy1.setHeightForWidth(RightBracketButton->sizePolicy().hasHeightForWidth());
        RightBracketButton->setSizePolicy(sizePolicy1);
        RightBracketButton->setFont(font);

        gridLayout->addWidget(RightBracketButton, 4, 2, 1, 1);

        Number8Button = new QPushButton(widget);
        Number8Button->setObjectName("Number8Button");
        sizePolicy1.setHeightForWidth(Number8Button->sizePolicy().hasHeightForWidth());
        Number8Button->setSizePolicy(sizePolicy1);
        Number8Button->setFont(font);

        gridLayout->addWidget(Number8Button, 1, 1, 1, 1);

        BackSpaceButton = new QPushButton(widget);
        BackSpaceButton->setObjectName("BackSpaceButton");
        sizePolicy1.setHeightForWidth(BackSpaceButton->sizePolicy().hasHeightForWidth());
        BackSpaceButton->setSizePolicy(sizePolicy1);
        BackSpaceButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/icons/images/keyboard_backspace_24dp_5F6368_FILL0_wght400_GRAD0_opsz24.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BackSpaceButton->setIcon(icon);

        gridLayout->addWidget(BackSpaceButton, 0, 3, 1, 1);

        EqualButton = new QPushButton(widget);
        EqualButton->setObjectName("EqualButton");
        EqualButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(EqualButton->sizePolicy().hasHeightForWidth());
        EqualButton->setSizePolicy(sizePolicy1);
        EqualButton->setFont(font);
        EqualButton->setAutoFillBackground(false);
        EqualButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(EqualButton, 3, 3, 2, 1);

        Number9Button = new QPushButton(widget);
        Number9Button->setObjectName("Number9Button");
        sizePolicy1.setHeightForWidth(Number9Button->sizePolicy().hasHeightForWidth());
        Number9Button->setSizePolicy(sizePolicy1);
        Number9Button->setFont(font);

        gridLayout->addWidget(Number9Button, 1, 2, 1, 1);

        Number0Button = new QPushButton(widget);
        Number0Button->setObjectName("Number0Button");
        sizePolicy1.setHeightForWidth(Number0Button->sizePolicy().hasHeightForWidth());
        Number0Button->setSizePolicy(sizePolicy1);
        Number0Button->setFont(font);

        gridLayout->addWidget(Number0Button, 4, 1, 1, 1);

        Number5Button = new QPushButton(widget);
        Number5Button->setObjectName("Number5Button");
        sizePolicy1.setHeightForWidth(Number5Button->sizePolicy().hasHeightForWidth());
        Number5Button->setSizePolicy(sizePolicy1);
        Number5Button->setFont(font);

        gridLayout->addWidget(Number5Button, 2, 1, 1, 1);

        Number2Button = new QPushButton(widget);
        Number2Button->setObjectName("Number2Button");
        sizePolicy1.setHeightForWidth(Number2Button->sizePolicy().hasHeightForWidth());
        Number2Button->setSizePolicy(sizePolicy1);
        Number2Button->setFont(font);

        gridLayout->addWidget(Number2Button, 3, 1, 1, 1);

        Number7Button = new QPushButton(widget);
        Number7Button->setObjectName("Number7Button");
        sizePolicy1.setHeightForWidth(Number7Button->sizePolicy().hasHeightForWidth());
        Number7Button->setSizePolicy(sizePolicy1);
        Number7Button->setFont(font);

        gridLayout->addWidget(Number7Button, 1, 0, 1, 1);

        Number7Button->raise();
        Number5Button->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", " \350\256\241\347\256\227\345\231\250", nullptr));
        Number3Button->setText(QCoreApplication::translate("Widget", "3", nullptr));
        DivideButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        PlusButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        Number4Button->setText(QCoreApplication::translate("Widget", "4", nullptr));
        LeftBracketButton->setText(QCoreApplication::translate("Widget", "(", nullptr));
        MinusButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        ClearButton->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        Num1Button->setText(QCoreApplication::translate("Widget", "1", nullptr));
        Number6Button->setText(QCoreApplication::translate("Widget", "6", nullptr));
        CrossButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        RightBracketButton->setText(QCoreApplication::translate("Widget", ")", nullptr));
        Number8Button->setText(QCoreApplication::translate("Widget", "8", nullptr));
        BackSpaceButton->setText(QString());
        EqualButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        Number9Button->setText(QCoreApplication::translate("Widget", "9", nullptr));
        Number0Button->setText(QCoreApplication::translate("Widget", "0", nullptr));
        Number5Button->setText(QCoreApplication::translate("Widget", "5", nullptr));
        Number2Button->setText(QCoreApplication::translate("Widget", "2", nullptr));
        Number7Button->setText(QCoreApplication::translate("Widget", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
