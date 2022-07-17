#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

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
    QMessageBox::critical(this,"CBC CURSOS","Texto teste mutcho legalzinho ERRO !!!");
    QMessageBox::about(this,"Teste","TESTE!!!");
    QMessageBox::question(this,"Pergunta","Gostou?");
    QMessageBox::warning(this,"ERRO","Mais um teste");
}

