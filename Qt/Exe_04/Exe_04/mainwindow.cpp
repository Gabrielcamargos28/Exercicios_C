#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QtDebug>

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


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton resposta=QMessageBox::question(this,"","Fechar programa",QMessageBox::Yes|QMessageBox::No);
    if(resposta==QMessageBox::Yes){
        //close();
        QApplication::quit();
    }else{
    //QMessageBox::about(this,"Mensagem","Programa permanece aberto");
    qDebug() <<"Programa não foi fechado";
}
}

