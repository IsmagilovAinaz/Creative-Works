#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QPainter>
#include <QtMath>
#include <QtDebug>
#include <QMessageBox>

bool TabEmpty = 0;
bool DrawPremission = 0;
int ways[100][100];
int min = 10000;
bool rep=0;

//
int completed[100];
int n , cost=0;
int array[1000];
int ind =0;


//
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPalette palette;

    palette.setColor(QPalette::Window,QColor(40, 46, 60));
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_makeTab_clicked()//Нажата кнопка создания таблицы
{
    ui->tableWidget->setRowCount(ui->Quantity->value());
    ui->tableWidget->setColumnCount(ui->Quantity->value());
    for(int row =0; row<ui->Quantity->value(); row++){              //Заполнение ячеек * с равным номером строки и столбца
        for(int column =0; column<ui->Quantity->value(); column++){
            if(row == column){
                QTableWidgetItem *item = new QTableWidgetItem();
                item->setText(QString('*'));
                ui->tableWidget->setItem(row, column, item);
                ui->tableWidget->item(row,column)->setFlags(Qt::ItemIsEnabled);
            }
            else{
               QTableWidgetItem *item = new QTableWidgetItem();
               item->setText(QString('0'));
               ui->tableWidget->setItem(row, column, item);

            }
        }
    }
    TabEmpty =1;
}

void MainWindow::on_clearTab_clicked()        //Очистка таблицы
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);
    TabEmpty = 0;
    DrawPremission = 0;
    cost = 0, ind = 0;
}

void MainWindow::on_printGraph_clicked()//Нажата кнопка нарисовать граф
{
    int size =ui->Quantity->value();
    int EmptyElem = 0;
    if(TabEmpty){
        for(int i = 0; i<size; i++){
            for(int j = 0; j<size; j++){
                QTableWidgetItem *item = new QTableWidgetItem();
                if(ui->tableWidget->item(i,j)->text().isEmpty()){
                    EmptyElem=EmptyElem+1;
                }
            }
        }
        if(EmptyElem!=0){
            QMessageBox::critical(this, "ERROR", "Таблица заполнена не до конца");
            DrawPremission=0;
        } else{
            DrawPremission=1;
            repaint();
        }
    }
    else{
        QMessageBox::critical(this, "ERROR", "Таблица пуста");
    }
}

void MainWindow::paintEvent(QPaintEvent *event){
    if(DrawPremission){
        QPainter paint(this);
        QBrush brush;
        QPen pen;
        QFont font;
        brush.setStyle(Qt::SolidPattern);
        brush.setColor(QColor(83, 179, 105));
        pen.setWidth(2);
        font.setPointSize(10);
        paint.setPen(pen);
        paint.setFont(font);
        paint.setBrush(brush);

        paint.begin(this);
        Q_UNUSED(event);
        int size =ui->Quantity->value();
        double degrees;
        //int quantity = degrees;
        int x_graph = 570;
        int y_graph = 240;
        //int bias =10;
        double R = 150;
        double r = 50;
        int *X = new int[size];
        int *Y = new int[size];

         for (int i =0; i<size;i++){

             degrees = M_PI*3/2+2*M_PI*i/size;
             X[i] = x_graph+R*cos(degrees);
             Y[i] = y_graph+R*-sin(degrees);
         }

         for (int row =0; row<size;row++){                  //Рисование линий
             for(int column = 0; column < size; column++){
                 QTableWidgetItem *item = new QTableWidgetItem();
                 item = ui->tableWidget->item(row,column);
                 if(item->text().toDouble()!=0){
                     paint.drawLine(X[row]-25,Y[row]-25,X[column]-25,Y[column]-25);
                     //paint.drawText(X[row]+48,Y[row]+bias, item->text());

                 }

             }

         }
         for (int i =0; i<size;i++){;//Рисование узлов
             paint.drawEllipse(X[i]-r,Y[i]-r, r, r);
             paint.drawText(X[i]-26,Y[i]-23, QString::number(i+1));
         }

         if(rep){
             pen.setColor(QColor(83, 179, 105));
             paint.setPen(pen);
             for (int i=0;i<size;i++){
                 paint.drawLine(X[array[i]-1]-25,Y[array[i]-1]-25,X[array[i+1]-1]-25,Y[array[i+1]-1]-25);

             }
         }
         DrawPremission = 0;
         rep=0;
         paint.end();
    }
}

int least(int c)
{
    int nc = 999;
    int min = 999, kmin;

    for (int i = 0; i < n; i++)
    {
        if ((ways[c][i] != 0) && (completed[i] == 0))
            if (ways[c][i] + ways[i][c] < min)
            {
                min = ways[i][0] + ways[c][i];
                kmin = ways[c][i];
                nc = i;
            }
    }

    if (min != 999)
        cost += kmin;

    return nc;
}

void mincost(int city)
{
    int i, ncity;

    completed[city] = 1;
    array[ind] = city + 1;
    ind++;
    ncity = least(city);

    if (ncity == 999)
    {
        ncity = 0;
        array[ind] = ncity + 1;
        ind++;
        cost += ways[city][ncity];
        return;
    }

    mincost(ncity);
}

void MainWindow::on_findMinWay_clicked()
{
    int size =ui->Quantity->value();
    n = size;
    ui->Answer->setText("");

    if(TabEmpty){
        /*l = 0;
        ind =0;
        min = 10000;
        visited = new bool[size];
        road = new int [size];
        min_lenght = new int[size];
        for(int i = 0; i<size; i++){
            min_lenght[i]=-1;
            road[i]=-1;
        }
        bool nw=false;*/
        for(int row=0;row<size;row++){
           for(int column=0; column<size;column++){
               QTableWidgetItem *item = new QTableWidgetItem();        //Заполнение массива данными из таблицы
               item = ui->tableWidget->item(row,column);
               if(item->text()!='*'){      //Если в ячейке находиться "*",то вместо нее заносим 0
                  ways[row][column] = item->text().toInt();
               }
               else{
                   ways[row][column] = 0;
               }
           }
           completed[row] = 0;
        }
        /*
        for(int i = 0; i<size; i++){
            Find(0, i);
        }
        for(int i = 0; i<size;i++){
            if(min_lenght[i]==-1){
                nw=true;
            }
        }
        if(min==10000||nw){
            QString str = "Маршрут не существует";
            ui->Answer->setText(ui->Answer->text()+str);
        }
        else{
            //min+=ways[min_lenght[size-3]-1][min_lenght[size-2]-1];
            ui->Answer->setText(QString::number(min));

        }*/
        mincost(0);
        int cities;
        for(int i; i<size;i++){
            if(completed[i]!=0){
                cities+=1;
            }
        }
        if(cities!=size){
            QString str = "Маршрут не существует";
            ui->Answer->setText(str);
        }
        else{
            ui->Answer->setText(QString::number(cost));
            rep = 1;
            DrawPremission = 1;
            repaint();
        }
        cost = 0;
    }

}
