#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

#include <QDebug>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn__1_clicked();

    void on_btn__2_clicked();

    void on_btn__3_clicked();

    void on_btn__4_clicked();

    void on_btn__5_clicked();

    void on_btn__6_clicked();

    void on_btn__7_clicked();

    void on_btn__8_clicked();

    void on_btn__9_clicked();

    void on_btn__0_clicked();

    void on_btn__clear_clicked();

    void on_btn__enter_clicked();

    void on_btn__add_clicked();

    void on_btn__sub_clicked();

    void on_btn__mul_clicked();

    void on_btn__div_clicked();

private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state = 0;
    float result;
    short operand;

    void numberClickedHandler(int);
    void clearAndEnterClickHandler(bool);
    void addSubMulDivClickHandler(int);
    void resetLineEditor();
};
#endif // MAINWINDOW_H
