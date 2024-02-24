#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Numbers
void MainWindow::on_btn__1_clicked()
{
numberClickedHandler(1);
}


void MainWindow::on_btn__2_clicked()
{
numberClickedHandler(2);
}


void MainWindow::on_btn__3_clicked()
{
numberClickedHandler(3);
}


void MainWindow::on_btn__4_clicked()
{
numberClickedHandler(4);
}


void MainWindow::on_btn__5_clicked()
{
numberClickedHandler(5);
}


void MainWindow::on_btn__6_clicked()
{
numberClickedHandler(6);
}


void MainWindow::on_btn__7_clicked()
{
numberClickedHandler(7);
}


void MainWindow::on_btn__8_clicked()
{
numberClickedHandler(8);
}


void MainWindow::on_btn__9_clicked()
{
numberClickedHandler(9);
}


void MainWindow::on_btn__0_clicked()
{
numberClickedHandler(0);
}

//Operands
void MainWindow::on_btn__add_clicked()
{
    addSubMulDivClickHandler(1);
}


void MainWindow::on_btn__sub_clicked()
{
    addSubMulDivClickHandler(2);
}


void MainWindow::on_btn__mul_clicked()
{
    addSubMulDivClickHandler(3);
}


void MainWindow::on_btn__div_clicked()
{
    addSubMulDivClickHandler(4);
}

//Actions
void MainWindow::on_btn__clear_clicked()
{
    clearAndEnterClickHandler(false);
}


void MainWindow::on_btn__enter_clicked()
{
    clearAndEnterClickHandler(true);
}




void MainWindow::numberClickedHandler(int number)
{
    switch(state){
        case 0:
            number1 += QString::number(number);
            ui->lineEdit__num1->setText(number1);
            break;
        case 1:
            number2 += QString::number(number);
            ui->lineEdit__num2->setText(number2);
            break;
        case 2:
            resetLineEditor();
            break;
    }
        qDebug()<<number1<<number2;
}

void MainWindow::clearAndEnterClickHandler(bool enter)
{
    if(enter){
        state = 2;
        switch(operand){
            case 1:
                result = number1.toFloat() + number2.toFloat();
                break;
            case 2:
                result = number1.toFloat() - number2.toFloat();
                break;
            case 3:
                result = number1.toFloat() * number2.toFloat();
                break;
            case 4:
                result = number1.toFloat() / number2.toFloat();
                break;
        }

            ui->lineEdit__result->setText(QString::number(result));
    }else{
        resetLineEditor();
    }
}

void MainWindow::addSubMulDivClickHandler(int op)
{
    state = 1;
    switch(op){
        case 1:
            operand = 1;
            break;
        case 2:
            operand = 2;
            break;
        case 3:
            operand = 3;
            break;
        case 4:
            operand = 4;
            break;
    }

}

void MainWindow::resetLineEditor()
{
    state = 0;
    number1 = "";
    number2 = "";
    result = 0;

    ui->lineEdit__num1->setText("");
    ui->lineEdit__num2->setText("");
    ui->lineEdit__result->setText("");
}

