#include "widget.h"
#include "./ui_widget.h"

// 辅助计算函数
double calculate(double num1, double num2, QString op) {
    if (op == "+") return num1 + num2;
    if (op == "-") return num1 - num2;
    if (op == "*") return num1 * num2;
    if (op == "/") {
        if (num2 == 0) return 0;
        return num1 / num2;
    }
    return num2;
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn1_clicked()
{
    // 如果刚按了等号，或者刚按了运算符，就重新开始输入
    if (hasCalculated || isWaitingForSecond) {
        currentInput = "1";
        hasCalculated = false;
        isWaitingForSecond = false;
    } else {
        // 如果当前是 0，直接替换成 1，否则拼接（比如 "1" 拼接成 "17"）
        if (currentInput == "0") {
            currentInput = "1";
        } else {
            currentInput += "1";
        }
    }
    // 把结果显示在顶部的 display 框里
    ui->display->setText(currentInput);
}


void Widget::on_btn2_clicked()
{
    // 如果刚按了等号，或者刚按了运算符，就重新开始输入
    if (hasCalculated || isWaitingForSecond) {
        currentInput = "2";
        hasCalculated = false;
        isWaitingForSecond = false;
    } else {
        // 如果当前是 0，直接替换成 2，否则拼接（比如 "1" 拼接成 "17"）
        if (currentInput == "0") {
            currentInput = "2";
        } else {
            currentInput += "2";
        }
    }
    // 把结果显示在顶部的 display 框里
    ui->display->setText(currentInput);
}

void Widget::on_btn3_clicked()
{
    // 如果刚按了等号，或者刚按了运算符，就重新开始输入
    if (hasCalculated || isWaitingForSecond) {
        currentInput = "3";
        hasCalculated = false;
        isWaitingForSecond = false;
    } else {
        // 如果当前是 0，直接替换成 3，否则拼接（比如 "1" 拼接成 "17"）
        if (currentInput == "0") {
            currentInput = "3";
        } else {
            currentInput += "3";
        }
    }
    // 把结果显示在顶部的 display 框里
    ui->display->setText(currentInput);
}


void Widget::on_btn4_clicked()
{
    // 如果刚按了等号，或者刚按了运算符，就重新开始输入
    if (hasCalculated || isWaitingForSecond) {
        currentInput = "4";
        hasCalculated = false;
        isWaitingForSecond = false;
    } else {
        // 如果当前是 0，直接替换成 4，否则拼接（比如 "1" 拼接成 "17"）
        if (currentInput == "0") {
            currentInput = "4";
        } else {
            currentInput += "4";
        }
    }
    // 把结果显示在顶部的 display 框里
    ui->display->setText(currentInput);
}

void Widget::on_btn5_clicked()
{
    // 如果刚按了等号，或者刚按了运算符，就重新开始输入
    if (hasCalculated || isWaitingForSecond) {
        currentInput = "5";
        hasCalculated = false;
        isWaitingForSecond = false;
    } else {
        // 如果当前是 0，直接替换成 5，否则拼接（比如 "1" 拼接成 "17"）
        if (currentInput == "0") {
            currentInput = "5";
        } else {
            currentInput += "5";
        }
    }
    // 把结果显示在顶部的 display 框里
    ui->display->setText(currentInput);
}


void Widget::on_btn6_clicked()
{
    // 如果刚按了等号，或者刚按了运算符，就重新开始输入
    if (hasCalculated || isWaitingForSecond) {
        currentInput = "6";
        hasCalculated = false;
        isWaitingForSecond = false;
    } else {
        // 如果当前是 0，直接替换成 6，否则拼接（比如 "1" 拼接成 "17"）
        if (currentInput == "0") {
            currentInput = "6";
        } else {
            currentInput += "6";
        }
    }
    // 把结果显示在顶部的 display 框里
    ui->display->setText(currentInput);
}


void Widget::on_btn7_clicked()
{
    // 如果刚按了等号，或者刚按了运算符，就重新开始输入
    if (hasCalculated || isWaitingForSecond) {
        currentInput = "7";
        hasCalculated = false;
        isWaitingForSecond = false;
    } else {
        // 如果当前是 0，直接替换成 7，否则拼接（比如 "1" 拼接成 "17"）
        if (currentInput == "0") {
            currentInput = "7";
        } else {
            currentInput += "7";
        }
    }
    // 把结果显示在顶部的 display 框里
    ui->display->setText(currentInput);
}


void Widget::on_btn8_clicked()
{
    // 如果刚按了等号，或者刚按了运算符，就重新开始输入
    if (hasCalculated || isWaitingForSecond) {
        currentInput = "8";
        hasCalculated = false;
        isWaitingForSecond = false;
    } else {
        // 如果当前是 0，直接替换成 8，否则拼接（比如 "1" 拼接成 "17"）
        if (currentInput == "0") {
            currentInput = "8";
        } else {
            currentInput += "8";
        }
    }
    // 把结果显示在顶部的 display 框里
    ui->display->setText(currentInput);
}


void Widget::on_btn9_clicked()
{
    // 如果刚按了等号，或者刚按了运算符，就重新开始输入
    if (hasCalculated || isWaitingForSecond) {
        currentInput = "9";
        hasCalculated = false;
        isWaitingForSecond = false;
    } else {
        // 如果当前是 0，直接替换成 9，否则拼接（比如 "1" 拼接成 "17"）
        if (currentInput == "0") {
            currentInput = "9";
        } else {
            currentInput += "9";
        }
    }
    // 把结果显示在顶部的 display 框里
    ui->display->setText(currentInput);
}


void Widget::on_btn0_clicked()
{
    if (hasCalculated || isWaitingForSecond) {
        currentInput = "0";
        hasCalculated = false;
        isWaitingForSecond = false;
    } else {
        // 注意：只有当前不是 "0" 的时候，才在屁股后面加 0，防止出现 "00"
        if (currentInput != "0") {
            currentInput += "0";
        }
    }
    ui->display->setText(currentInput);
}


void Widget::on_btnDot_clicked()
{
    if (hasCalculated || isWaitingForSecond) {
        currentInput = "0."; // 直接按小数点，默认变成 "0."
        hasCalculated = false;
        isWaitingForSecond = false;
    } else {
        // 核心逻辑：如果当前字符串里没有小数点，才允许添加
        if (!currentInput.contains(".")) {
            currentInput += ".";
        }
    }
    ui->display->setText(currentInput);
}


void Widget::on_btnAdd_clicked()
{
    // 1. 把屏幕上当前显示的一串字符（比如 "12.5"）变成真正的数字 12.5
    double currentNum = currentInput.toDouble();

    // 2. 判断：如果现在不是在等第二个数（说明刚输完第一个数）
    if (!isWaitingForSecond) {

        // 如果之前已经有运算符了（比如你输入了 1+2，现在又按了+，说明要连续运算）
        if (pendingOperator != "") {
            // 先让“计算小帮手”把前面的算出来
            firstOperand = calculate(firstOperand, currentNum, pendingOperator);
        } else {
            // 如果没运算符，就把当前数字存起来当第一个数
            firstOperand = currentNum;
        }

        // 把算出来的中间结果显示在屏幕上
        ui->display->setText(QString::number(firstOperand));
        currentInput = QString::number(firstOperand); // 更新当前输入

        // 如果按加号的时候刚好除以了0，要提示一下
        if (pendingOperator == "/" && currentNum == 0) {
            ui->display->setText("除数不能为0");
            currentInput = "0";
            pendingOperator = "";
            isWaitingForSecond = false;
            hasCalculated = true;
            return;
        }
    }

    // 3. 记录下你按的运算符，并且把“等待第二个数”的开关打开
    pendingOperator = "+";
    isWaitingForSecond = true;
    hasCalculated = false;
}

void Widget::on_btnSub_clicked()
{
    // 1. 把屏幕上当前显示的一串字符（比如 "12.5"）变成真正的数字 12.5
    double currentNum = currentInput.toDouble();

    // 2. 判断：如果现在不是在等第二个数（说明刚输完第一个数）
    if (!isWaitingForSecond) {

        // 如果之前已经有运算符了（比如你输入了 1+2，现在又按了+，说明要连续运算）
        if (pendingOperator != "") {
            // 先让“计算小帮手”把前面的算出来
            firstOperand = calculate(firstOperand, currentNum, pendingOperator);
        } else {
            // 如果没运算符，就把当前数字存起来当第一个数
            firstOperand = currentNum;
        }

        // 把算出来的中间结果显示在屏幕上
        ui->display->setText(QString::number(firstOperand));
        currentInput = QString::number(firstOperand); // 更新当前输入

        // 如果按加号的时候刚好除以了0，要提示一下
        if (pendingOperator == "/" && currentNum == 0) {
            ui->display->setText("除数不能为0");
            currentInput = "0";
            pendingOperator = "";
            isWaitingForSecond = false;
            hasCalculated = true;
            return;
        }
    }

    // 3. 记录下你按的运算符，并且把“等待第二个数”的开关打开
    pendingOperator = "-";
    isWaitingForSecond = true;
    hasCalculated = false;
}


void Widget::on_btnMul_clicked()
{
    // 1. 把屏幕上当前显示的一串字符（比如 "12.5"）变成真正的数字 12.5
    double currentNum = currentInput.toDouble();

    // 2. 判断：如果现在不是在等第二个数（说明刚输完第一个数）
    if (!isWaitingForSecond) {

        // 如果之前已经有运算符了（比如你输入了 1+2，现在又按了+，说明要连续运算）
        if (pendingOperator != "") {
            // 先让“计算小帮手”把前面的算出来
            firstOperand = calculate(firstOperand, currentNum, pendingOperator);
        } else {
            // 如果没运算符，就把当前数字存起来当第一个数
            firstOperand = currentNum;
        }

        // 把算出来的中间结果显示在屏幕上
        ui->display->setText(QString::number(firstOperand));
        currentInput = QString::number(firstOperand); // 更新当前输入

        // 如果按加号的时候刚好除以了0，要提示一下
        if (pendingOperator == "/" && currentNum == 0) {
            ui->display->setText("除数不能为0");
            currentInput = "0";
            pendingOperator = "";
            isWaitingForSecond = false;
            hasCalculated = true;
            return;
        }
    }

    // 3. 记录下你按的运算符，并且把“等待第二个数”的开关打开
    pendingOperator = "*";
    isWaitingForSecond = true;
    hasCalculated = false;
}


void Widget::on_btnDiv_clicked()
{
    // 1. 把屏幕上当前显示的一串字符（比如 "12.5"）变成真正的数字 12.5
    double currentNum = currentInput.toDouble();

    // 2. 判断：如果现在不是在等第二个数（说明刚输完第一个数）
    if (!isWaitingForSecond) {

        // 如果之前已经有运算符了（比如你输入了 1+2，现在又按了+，说明要连续运算）
        if (pendingOperator != "") {
            // 先让“计算小帮手”把前面的算出来
            firstOperand = calculate(firstOperand, currentNum, pendingOperator);
        } else {
            // 如果没运算符，就把当前数字存起来当第一个数
            firstOperand = currentNum;
        }

        // 把算出来的中间结果显示在屏幕上
        ui->display->setText(QString::number(firstOperand));
        currentInput = QString::number(firstOperand); // 更新当前输入

        // 如果按加号的时候刚好除以了0，要提示一下
        if (pendingOperator == "/" && currentNum == 0) {
            ui->display->setText("除数不能为0");
            currentInput = "0";
            pendingOperator = "";
            isWaitingForSecond = false;
            hasCalculated = true;
            return;
        }
    }

    // 3. 记录下你按的运算符，并且把“等待第二个数”的开关打开
    pendingOperator = "/";
    isWaitingForSecond = true;
    hasCalculated = false;
}

void Widget::on_btnEqual_clicked()
{
    // 如果连运算符都没按过，按等号没意义，直接退出
    if (pendingOperator == "") return;

    double currentNum = currentInput.toDouble();

    // --- 核心边界情况：除数为 0 ---
    if (pendingOperator == "/" && currentNum == 0) {
        ui->display->setText("除数不能为0"); // 屏幕上直接报错
        currentInput = "0";                  // 归零，防止后续乱算
        pendingOperator = "";                // 清空运算符
        isWaitingForSecond = false;
        hasCalculated = true;                // 标记已计算，下次输入数字重开
        return;                              // 拦截成功，直接结束
    }

    // 调用帮手函数，算出最终结果
    double result = calculate(firstOperand, currentNum, pendingOperator);

    // 格式化输出：如果是整数（比如 3.0），就不要显示成 3.0000，去掉多余零
    if (result == (int)result) {
        ui->display->setText(QString::number((int)result));
    } else {
        ui->display->setText(QString::number(result));
    }

    // --- 收尾工作：为下一次计算做准备 ---
    currentInput = ui->display->text(); // 把结果存起来，方便按等号后继续按 + 号
    pendingOperator = "";               // 清空运算符
    isWaitingForSecond = false;
    hasCalculated = true;               // 标记已经算完了，下次按数字要重新开始
}


void Widget::on_btnClear_clicked()
{
    // 全部回到出厂设置
    currentInput = "0";
    pendingOperator = "";
    firstOperand = 0;
    isWaitingForSecond = false;
    hasCalculated = false;
    ui->display->setText("0");
}

void Widget::on_btnBackspace_clicked()
{
    // 如果刚算完，或者正在等第二个数，按退格没意义（防止把前面存好的数删了）
    if (hasCalculated || isWaitingForSecond) return;

    // 删掉最后一位
    if (currentInput.length() > 1) {
        currentInput.chop(1); // 砍掉最后一个字符
    } else {
        currentInput = "0";   // 如果只剩1个字符，比如 "5"，直接变成 "0"
    }
    ui->display->setText(currentInput);
}


void Widget::on_btnSign_clicked()
{
    // 如果当前是 "0"，正负号没意义
    if (currentInput == "0") return;

    // 如果数字前面有负号 "-"，就把它砍掉
    if (currentInput.startsWith("-")) {
        currentInput.remove(0, 1); // 从第0个位置开始，删掉1个字符（也就是负号）
    }
    // 如果没有负号，就在前面加一个负号
    else {
        currentInput = "-" + currentInput;
    }

    // 把更新后的结果放回屏幕显示
    ui->display->setText(currentInput);
}


void Widget::on_btnPercent_clicked()
{
    // 把当前输入的字符串转成数字
    double currentNum = currentInput.toDouble();

    // 除以 100
    double result = currentNum / 100.0;

    // 如果你刚刚按了等号，按 % 应该是针对结果进行百分号计算
    // 这里直接更新当前输入，方便后续继续运算
    currentInput = QString::number(result);

    // 把结果显示在屏幕上
    ui->display->setText(currentInput);
}
//完成数字输入
//完成加减乘除运算
//修复问题
