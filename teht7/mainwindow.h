#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_start_clicked();

    void on_pushButton_stop_clicked();

    void on_pushButton_120sec_clicked();

    void on_pushButton_5min_clicked();

    void on_pushButton_player1_clicked();

    void on_pushButton_player2_clicked();
    void playerTimer();

private:
    Ui::MainWindow *ui;
    QTimer *objectTimer;
    int playerTurn = 0;
    int playerOneTime = 0;
    int playerTwoTime = 0;
    int gameTime = 0;
};
#endif // MAINWINDOW_H
