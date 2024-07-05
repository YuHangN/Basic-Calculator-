#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(290, 387);
    QFont myFont("Helvetica [Cronyx]", 18); // 字体对象。
    ui->Screen->setFont(myFont);
    // 改变=号按钮的背景颜色。
    ui->EqualButton->setStyleSheet("background-color: gray");
}

Widget::~Widget()
{
    delete ui;
}

double Widget::DFS(QQueue<QChar> &Q) {
    double num = 0, sum = 0, prev = 0;
    char prevop = '+';
    while (!Q.empty()) {
        QChar c = Q.front();
        Q.pop_front();
        if (c.isDigit())
            num = num * 10 + c.digitValue();
        else if (c == '(')
            num = DFS(Q);
        else {
            switch (prevop) {
            case '+':
                sum += prev;
                prev = num;
                break;
            case '-':
                sum += prev;
                prev = -num;
                break;
            case '*':
                prev *= num;
                break;
            case '/':
                prev /= num;
                break;
            }
            prevop = c.toLatin1(); // Convert QChar to char
            num = 0;
            if (c == ')')
                break;
        }
    }
    return sum + prev;
}

double Widget::calculate(QString s) {
    QQueue<QChar> Q;
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i).isSpace())
            continue;
        Q.enqueue(s.at(i));
    }
    Q.enqueue(' '); // Ensure proper termination of parsing
    return DFS(Q);
}

void Widget::on_Num1Button_clicked()
{
    expression += "1";
    ui->Screen->setText(expression);
}

void Widget::on_Number2Button_clicked()
{
    expression += "2";
    ui->Screen->setText(expression);
}

void Widget::on_Number3Button_clicked()
{
    expression += "3";
    ui->Screen->setText(expression);
}

void Widget::on_Number4Button_clicked()
{
    expression += "4";
    ui->Screen->setText(expression);
}

void Widget::on_Number5Button_clicked()
{
    expression += "5";
    ui->Screen->setText(expression);
}

void Widget::on_Number6Button_clicked()
{
    expression += "6";
    ui->Screen->setText(expression);
}

void Widget::on_Number7Button_clicked()
{
    expression += "7";
    ui->Screen->setText(expression);
}

void Widget::on_Number8Button_clicked()
{
    expression += "8";
    ui->Screen->setText(expression);
}

void Widget::on_Number9Button_clicked()
{
    expression += "9";
    ui->Screen->setText(expression);
}

void Widget::on_LeftBracketButton_clicked()
{
    expression += "(";
    ui->Screen->setText(expression);
}

void Widget::on_CrossButton_clicked()
{
    expression += "*";
    ui->Screen->setText(expression);
}

void Widget::on_DivideButton_clicked()
{
    expression += "/";
    ui->Screen->setText(expression);
}

void Widget::on_Number0Button_clicked()
{
    expression += "0";
    ui->Screen->setText(expression);
}

void Widget::on_PlusButton_clicked()
{
    expression += "+";
    ui->Screen->setText(expression);
}

void Widget::on_MinusButton_clicked()
{
    expression += "-";
    ui->Screen->setText(expression);
}

void Widget::on_RightBracketButton_clicked()
{
    expression += ")";
    ui->Screen->setText(expression);
}

void Widget::on_ClearButton_clicked()
{
    expression.clear();
    ui->Screen->clear();
}


void Widget::on_BackSpaceButton_clicked()
{
    expression.chop(1);
    ui->Screen->setText(expression);
}

// We have a expression here, we need to parse it and get the result.
void Widget::on_EqualButton_clicked()
{
    double result = calculate(expression);
    expression.clear();
    ui->Screen->clear();
    QString resultStr = QString::number(result);
    expression += resultStr;
    ui->Screen->setText(expression);
}

