#include "calculator.h"
#include "ui_calculator.h"
#include <QtMath>
#include <QString>
#include "degrees.h"
#include <QDebug>
using namespace std;

double first_num;//Первая переманная
double second_n;//вторая переманная
double answer;//полученный результат
bool got_answer = false;//проверка на наличие результата
bool have_second = false;// проверка на наличие второй переменной
Degrees a;//градусы
double second_degree;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{

    ui->setupUi(this);
    //Ввод цифр

    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    //Математические операции
    connect(ui->pushButton_PlusMin, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_slesh, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(math_operations()));
    //Тригонометрические функции
    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(trigonometria()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(trigonometria()));
    connect(ui->pushButton_tg, SIGNAL(clicked()), this, SLOT(trigonometria()));
    connect(ui->pushButton_arcsin, SIGNAL(clicked()), this, SLOT(trigonometria()));
    connect(ui->pushButton_arccos, SIGNAL(clicked()), this, SLOT(trigonometria()));
    connect(ui->pushButton_arctg, SIGNAL(clicked()), this, SLOT(trigonometria()));
    connect(ui->pushButton_grad, SIGNAL(clicked()), this, SLOT(convert()));
    connect(ui->pushButton_minut, SIGNAL(clicked()), this, SLOT(convert()));
    connect(ui->pushButton_sec, SIGNAL(clicked()), this, SLOT(convert()));
    //Удаление
    connect(ui->pushButton_backspace, SIGNAL(clicked()), this, SLOT(backspace()));
    ui->pushButton_grad->setText(m_degrees);
    ui->pushButton_backspace->setText(m_backspace);

    ui->pushButton_PlusMin->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_slesh->setCheckable(true);
    ui->pushButton_x->setCheckable(true);
}

Calculator::~Calculator()
{
    delete ui;
}

//Работа с цифрами
void Calculator::digits_numbers(){
    //char degree = QString(m_degrees).at(0).unicode();
    QPushButton *button = (QPushButton*)sender();
    double numbers;
    QString nlabel;
    if (got_answer){
        ui->result_show->setText("0");
        got_answer = false;
    }
    if (ui->result_show->text().contains(".") && button->text()=="0"){
        nlabel = ui->result_show->text() + button->text();
        ui->result_show->setText(nlabel);
    }
    else if ((ui->result_show->text().contains("'")||ui->result_show->text().contains('"')
              ||ui->result_show->text().contains(m_degrees))){
        nlabel = ui->result_show->text() + button->text();
        ui->result_show->setText(nlabel);
    }
    else {

        numbers = (ui->result_show->text() + button->text()).toDouble();
        nlabel = QString::number(numbers, 'g', 15);
        if (ui->result_show_2->text().contains('+') || ui->result_show_2->text().contains('-') ||
            ui->result_show_2->text().contains('x') || ui->result_show_2->text().contains('/')){
            second_n = numbers;
            have_second = true;
        }
        ui->result_show->setText(nlabel);
    }
}

//Функция нажатия на точку
void Calculator::on_pushButton_dot_clicked()
{
    if (!ui->result_show->text().contains('.')){
        ui->result_show->setText(ui->result_show->text()+ ".");
    }
}

//Операция +/-
void Calculator::operations(){
    QPushButton *button = (QPushButton*)sender();
    double numbers;
    QString nlabel;
    if (button->text() == "+/-"){
        if ((ui->result_show->text().contains("'")||ui->result_show->text().contains('"')||ui->result_show->text().contains(m_degrees))){
            nlabel = "-" + ui->result_show->text();
            ui->result_show->setText(nlabel);
            a.degrees = a.degrees * (-1);
            ui->result_show_2->setText(QString::number(a.degrees)+m_degrees);
        }
        else{
            numbers = (ui->result_show->text().toDouble());
            numbers = numbers * -1;
            nlabel = QString::number(numbers, 'g', 15);
            ui->result_show->setText(nlabel);
        }
        //ui->result_show_2->setText(nlabel);
    }
    button->setChecked(true);
}

//Математические операции
void Calculator::math_operations(){
    QPushButton *button = (QPushButton*)sender();
    QString nlabel;
    if (a.degrees != 0){
        nlabel = ui->result_show_2->text();
        nlabel.chop(1);
        first_num = (nlabel).toDouble();
    }

    if (!ui->result_show_2->text().contains('+') && !ui->result_show_2->text().contains('-') &&
        !ui->result_show_2->text().contains('x') && !ui->result_show_2->text().contains('/'))
    {
        first_num = ui->result_show->text().toDouble();
    }
    if(got_answer){
        nlabel = QString::number(first_num, 'g', 15);
        ui->result_show_2->setText(nlabel);
        got_answer = false;
    }
    if (have_second){
        button->setChecked(true);
        on_pushButton_equal_clicked();
        nlabel = QString::number(answer, 'g', 15);
        ui->result_show_2->setText(nlabel);
        first_num = ui->result_show->text().toDouble();
        have_second = false;

    }
    if (first_num >= 0 && !have_second && (ui->result_show_2->text().contains('+') || ui->result_show_2->text().contains('-') ||
        ui->result_show_2->text().contains('x') || ui->result_show_2->text().contains('/')))
    {
        ui->pushButton_plus->setChecked(false);
        ui->pushButton_minus->setChecked(false);
        ui->pushButton_slesh->setChecked(false);
        ui->pushButton_x->setChecked(false);
        nlabel = ui->result_show_2->text();
        nlabel.chop(1);
        ui->result_show_2->setText(nlabel);
        ui->result_show_2->setText(ui->result_show_2->text()+ button->text());
    }
    else{
        if(a.degrees != 0){
            ui->result_show_2->setText(ui->result_show_2->text()+ button->text());
            ui->result_show->setText("");
        }
        else{
            ui->result_show_2->setText(ui->result_show->text()+ button->text());
            ui->result_show->setText("");
        }
    }
    button->setChecked(true);
}

double Calculator::on_pushButton_equal_clicked()
{
    QString nlabel;
    double sec_num;
    if ((ui->result_show->text().contains("'")||ui->result_show->text().contains('"')||ui->result_show->text().contains(m_degrees))){
        //Degrees b;
        //b.degrees = 0; b.minutes = 0; b.seconds = 0;
        //b = convert();
        convert();
        sec_num = a.degrees;
        if (sec_num < first_num){
            sec_num = first_num - sec_num;
        }
        else{
            sec_num = sec_num - first_num;
        }

    }
    else {
        sec_num = (ui->result_show->text().toDouble());
    }

    if(ui->pushButton_plus->isChecked()){
        answer = first_num + sec_num;
        nlabel = QString::number(answer, 'g', 15);
        ui->result_show->setText(nlabel);
        ui->result_show_2->setText("");
        ui->pushButton_plus->setChecked(false);
        got_answer = true;
        have_second = false;
        return answer;
    }
    else if(ui->pushButton_minus->isChecked()){
        answer = first_num - sec_num;
        nlabel = QString::number(answer, 'g', 15);
        ui->result_show->setText(nlabel);
        ui->result_show_2->setText("");
        ui->pushButton_minus->setChecked(false);
        got_answer = true;
        have_second = false;
        return answer;
    }
    else if(ui->pushButton_x->isChecked()){
        answer = first_num * sec_num;
        nlabel = QString::number(answer, 'g', 15);
        ui->result_show->setText(nlabel);
        ui->result_show_2->setText("");
        ui->pushButton_x->setChecked(false);
        got_answer = true;
        have_second = false;
        return answer;
    }
    else if(ui->pushButton_slesh->isChecked()){
        if (second_n == 0){
            ui->result_show->setText("divided to 0");
            ui->result_show_2->setText("");
        }
        else{
            answer = first_num / sec_num;
            nlabel = QString::number(answer, 'g', 15);
            ui->result_show->setText(nlabel);
            ui->result_show_2->setText("");
            ui->pushButton_slesh->setChecked(false);
            got_answer = true;
            have_second = false;
            return answer;
        }
    }
    return answer;
}

void Calculator::on_pushButtonAC_clicked()
{
    ui->pushButton_slesh->setChecked(false);
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_x->setChecked(false);
    ui->result_show->setText("0");
    ui->result_show_2->setText("");
    got_answer = false;
    have_second = false;
    a.degrees = 0;
    a.minutes = 0;
    a.seconds = 0;
}

void Calculator::trigonometria(){
    QString nlabel;
    double sec_num;
    sec_num = a.degrees;
    double degrees;
    QPushButton *button = (QPushButton*)sender();
    if (button->text() == "sin"){
        if (a.degrees != 0){
            nlabel = QString::number(sec_num);;
            if(have_second && a.degrees != 0){
                /*if (degrees < first_num){
                    sec_num = a.degrees - sec_num;
                }
                else{
                    sec_num = sec_num - a.degrees;
                }*/
                sec_num = a.degrees - second_degree;
            }
            degrees = qDegreesToRadians(sec_num);
             degrees = sin(degrees);
             if(!have_second){
                 ui->result_show_2->setText("");
             }
             nlabel = QString::number(sec_num);
             ui->result_show_2->setText(ui->result_show_2->text()+button->text()+'('+nlabel+m_degrees+')');
             nlabel = QString::number(degrees, 'g', 15);
             ui->result_show->setText(nlabel);
        }
        else{
            nlabel = ui->result_show->text();
            degrees = nlabel.toDouble();
            degrees = qDegreesToRadians(degrees);
            ui->result_show_2->setText(ui->result_show_2->text()+button->text()+'('+nlabel+')');
            degrees = sin(degrees);
            nlabel = QString::number(degrees, 'g', 15);
            ui->result_show->setText(nlabel);
        }
    }
    else if(button->text() == "cos"){
        if (a.degrees != 0){
            nlabel = QString::number(sec_num);;
            if(have_second && a.degrees != 0){
                /*if (degrees < first_num){
                    sec_num = a.degrees - sec_num;
                }
                else{
                    sec_num = sec_num - a.degrees;
                }*/
                sec_num = a.degrees - second_degree;
            }
            degrees = qDegreesToRadians(sec_num);
             degrees = cos(degrees);
             if(!have_second){
                 ui->result_show_2->setText("");
             }
             nlabel = QString::number(sec_num);
             ui->result_show_2->setText(ui->result_show_2->text()+button->text()+'('+nlabel+m_degrees+')');
             nlabel = QString::number(degrees, 'g', 15);
             ui->result_show->setText(nlabel);
        }
        else{
            nlabel = ui->result_show->text();
            degrees = nlabel.toDouble();
            degrees = qDegreesToRadians(degrees);
            ui->result_show_2->setText(ui->result_show_2->text()+button->text()+'('+nlabel+')');
            degrees = cos(degrees);
            nlabel = QString::number(degrees, 'g', 15);
            ui->result_show->setText(nlabel);
        }
    }
    else if(button->text() == "tg"){
        if (a.degrees != 0){
            nlabel = QString::number(sec_num);;
            if(have_second && a.degrees != 0){
                sec_num = a.degrees - second_degree;
            }
            degrees = qDegreesToRadians(sec_num);
             degrees = tan(degrees);
             if(!have_second){
                 ui->result_show_2->setText("");
             }
             nlabel = QString::number(sec_num);
             ui->result_show_2->setText(ui->result_show_2->text()+button->text()+'('+nlabel+m_degrees+')');
             nlabel = QString::number(degrees, 'g', 15);
             ui->result_show->setText(nlabel);
        }
        else{
            nlabel = ui->result_show->text();
            degrees = nlabel.toDouble();
            degrees = qDegreesToRadians(degrees);
            ui->result_show_2->setText(ui->result_show_2->text()+button->text()+'('+nlabel+')');
            degrees = tan(degrees);
            nlabel = QString::number(degrees, 'g', 15);
            ui->result_show->setText(nlabel);
        }
    }
    else if(button->text() == "arcsin"){
        if((ui->result_show->text().contains("'")||ui->result_show->text().contains('"')||ui->result_show->text().contains(m_degrees))){
            ui->result_show_2->setText("ERROR");
            ui->result_show->setText("0");
        }
        else{
            nlabel = ui->result_show->text();
            degrees = nlabel.toDouble();
            ui->result_show_2->setText(ui->result_show_2->text()+button->text()+'('+nlabel+')');
            degrees = asin(degrees);
            degrees = qRadiansToDegrees(degrees);
            nlabel = QString::number(degrees, 'g', 15);
            ui->result_show->setText(nlabel);
        }

    }
    else if(button->text() == "arccos"){
        if((ui->result_show->text().contains("'")||ui->result_show->text().contains('"')||ui->result_show->text().contains(m_degrees))){
            ui->result_show_2->setText("ERROR");
            ui->result_show->setText("0");
        }
        else{
            nlabel = ui->result_show->text();
            degrees = nlabel.toDouble();
            ui->result_show_2->setText(ui->result_show_2->text()+button->text()+'('+nlabel+')');
            degrees = acos(degrees);
            degrees = qRadiansToDegrees(degrees);
            nlabel = QString::number(degrees, 'g', 15);
            ui->result_show->setText(nlabel);
        }
    }
    else if(button->text() == "arctg"){
        if((ui->result_show->text().contains("'")||ui->result_show->text().contains('"')||ui->result_show->text().contains(m_degrees))){
            ui->result_show_2->setText("ERROR");
            ui->result_show->setText("0");
        }
        else{
            nlabel = ui->result_show->text();
            degrees = nlabel.toDouble();
            ui->result_show_2->setText(ui->result_show_2->text()+button->text()+'('+nlabel+')');
            degrees = atan(degrees);
            degrees = qRadiansToDegrees(degrees);
            nlabel = QString::number(degrees, 'g', 15);
            ui->result_show->setText(nlabel);
        }
    }
}

Degrees Calculator::convert(){

    QString str;
    QString label_str;
    double l_degrees = 0;
    int i,j;
    int d = -1, m = -1, s = -1;
    QPushButton *button = (QPushButton*)sender();
    //ввод знаков градуса, минут, секунд
    if (!ui->result_show->text().contains(button->text())){
        ui->result_show->setText(ui->result_show->text()+ button->text());
    }
    if (button->text() == m_degrees){
        d = ui->result_show->text().indexOf(m_degrees);
        j = d;
        if(ui->result_show->text().contains("'")){
            m = ui->result_show->text().indexOf("'")+1;
            if(m < d){
                i = m;
            }
        }
        if(ui->result_show->text().contains('"')){
            s = ui->result_show->text().indexOf('"')+1;
            if (s<d){
                i = s;
            }
        }
        if (m == -1 && s==-1){
            i = 0;
        }
        else{
            if (m<s){
                i = s;
            }
            else{
                i = m;
            }
        }
        int z = 0;
        while(i < j){
            label_str = ui->result_show->text();
            str[z] = label_str[i];
            i++;
            z++;
        }
        l_degrees = QString(str).toDouble();
    }
    if (button->text() == "'"){
        m = ui->result_show->text().indexOf("'");
        j = m;
        if(ui->result_show->text().contains(m_degrees)){
            d = ui->result_show->text().indexOf(m_degrees)+1;
            if(d < m){
                i = d;
            }
        }
        if(ui->result_show->text().contains('"')){
            s = ui->result_show->text().indexOf('"')+1;
            if (s<m){
                i = s;
            }
        }
        if (d == -1 && s==-1){
            i = 0;
        }
        else{
            if (d<s){
                i = s;
            }
            else{
                i = d;
            }
        }
        int z = 0;
        while(i < j){
            label_str = ui->result_show->text();
            str[z] = label_str[i];
            i++;
            z++;
        }
        a.minutes = QString(str).toDouble();
    }
    if (button->text() == '"'){
        s = ui->result_show->text().indexOf('"');
        j = s;
        if(ui->result_show->text().contains(m_degrees)){
            d = ui->result_show->text().indexOf(m_degrees)+1;
            if(d < s){
                i = d;
            }
        }
        if(ui->result_show->text().contains("'")){
            m = ui->result_show->text().indexOf("'")+1;
            if (m<s){
                i = m;
            }
        }
        if (d == -1 && m==-1){
            i = 0;
        }
        else{
            if (d<m){
                i = m;
            }
            else{
                i = d;
            }
        }
        int z = 0;
        while(i < j){
            label_str = ui->result_show->text();
            str[z] = label_str[i];
            i++;
            z++;
        }
        a.seconds = QString(str).toDouble();
    }
    a.convert(l_degrees);
    if (!have_second){
        ui->result_show_2->setText(QString::number(a.degrees)+m_degrees);
        second_degree = a.degrees;
    }
    return a;
}

void Calculator::backspace(){
    QString nlabel;
        if(!got_answer){
        nlabel = ui->result_show->text();
        nlabel.chop(1);
        ui->result_show->setText(nlabel);
    }
}
