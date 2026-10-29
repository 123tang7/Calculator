#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget() override;

private slots:
    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btn0_clicked();

    void on_btnDot_clicked();

    void on_btnAdd_clicked();

    void on_btnSub_clicked();

    void on_btnMul_clicked();

    void on_btnDiv_clicked();

    void on_btnEqual_clicked();

    void on_btnClear_clicked();

    void on_btnBackspace_clicked();

    void on_btnSign_clicked();

    void on_btnPercent_clicked();

private:
    Ui::Widget *ui;
    QString currentInput = "0";     // 当前正在输入的数字（字符串形式，方便处理小数点）
    QString pendingOperator = "";   // 待处理的运算符（+ - * /）
    double firstOperand = 0;        // 保存第一个操作数
    bool isWaitingForSecond = false;// 是否在等待输入第二个数
    bool hasCalculated = false;     // 是否刚刚按过等号（用于计算完继续输入）
};
#endif // WIDGET_H
