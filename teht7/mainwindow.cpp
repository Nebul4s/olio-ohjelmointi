#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objectTimer = new QTimer();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectTimer;
    objectTimer = nullptr;
}

void MainWindow::on_pushButton_start_clicked()
{
    //crash on connect
    connect(objectTimer, SIGNAL(timeout()), this, SLOT(playerTimer()));
    objectTimer->start(1000);

    ui->label_status->setText("Game ongoing");
}

void MainWindow::playerTimer()
{

    if(playerTurn == 0){
        if(playerOneTime == 0){
            ui->label_status->setText("Player 2 Wins");
            objectTimer->stop();
        }
        playerOneTime -= 1;
        float perc = (float)playerOneTime/gameTime * 100;
        ui->progressBar_player1->setValue((int)perc);
    }else{
        if(playerTwoTime == 0){
            ui->label_status->setText("Player 1 Wins");
            objectTimer->stop();
        }
        playerTwoTime -= 1;
        float perc = (float)playerTwoTime/gameTime * 100;
        ui->progressBar_player2->setValue((int)perc);
    }
}

void MainWindow::on_pushButton_stop_clicked()
{
    objectTimer->stop();

    ui->progressBar_player1->setValue(0);
    ui->progressBar_player2->setValue(0);
    ui->label_status->setText("New game via start button");
}


void MainWindow::on_pushButton_120sec_clicked()
{
    playerOneTime = 120;
    playerTwoTime = 120;
    gameTime = 120;

    ui->progressBar_player1->setValue((playerOneTime/gameTime) * 100);
    ui->progressBar_player2->setValue((playerTwoTime/gameTime) * 100);
    ui->label_status->setText("ready to play");
}


void MainWindow::on_pushButton_5min_clicked()
{
    playerOneTime = 300;
    playerTwoTime = 300;
    gameTime = 300;

    ui->progressBar_player1->setValue((playerOneTime/gameTime) * 100);
    ui->progressBar_player2->setValue((playerTwoTime/gameTime) * 100);
    ui->label_status->setText("ready to play");
}


void MainWindow::on_pushButton_player1_clicked()
{
    playerTurn = 1;
}


void MainWindow::on_pushButton_player2_clicked()
{
    playerTurn = 0;
}


