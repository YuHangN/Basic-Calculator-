#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QQueue>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    double DFS(QQueue<QChar>& queue);

    double calculate(QString expression);

private slots:

    void on_Num1Button_clicked();

    void on_Number2Button_clicked();

    void on_Number3Button_clicked();

    void on_Number6Button_clicked();

    void on_Number9Button_clicked();

    void on_Number5Button_clicked();

    void on_Number4Button_clicked();

    void on_Number7Button_clicked();

    void on_Number8Button_clicked();

    void on_LeftBracketButton_clicked();

    void on_CrossButton_clicked();

    void on_DivideButton_clicked();

    void on_Number0Button_clicked();

    void on_PlusButton_clicked();

    void on_MinusButton_clicked();

    void on_RightBracketButton_clicked();

    void on_ClearButton_clicked();

    void on_BackSpaceButton_clicked();

    void on_EqualButton_clicked();

private:
    Ui::Widget *ui;
    QString expression;

};
#endif // WIDGET_H
