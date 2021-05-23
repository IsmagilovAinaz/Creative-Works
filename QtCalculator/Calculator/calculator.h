#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include "degrees.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;

    QChar m_degrees = QChar(0x000000B0);
    QChar m_backspace = QChar(0x0000232B);
private slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    void operations();
    void math_operations();
    double on_pushButton_equal_clicked();
    void on_pushButtonAC_clicked();
    void trigonometria();
    void backspace();
    Degrees convert();
};

#endif // CALCULATOR_H
