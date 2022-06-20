#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this,&MainWindow::sendFilePath,&sorter,&fileSorter::setFileDir);
    connect(this,&MainWindow::sendFilePath1,&sorter,&fileSorter::setdestinationDir);

    setWindowTitle("微信PC文件整理器");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    dirPath=QFileDialog::getExistingDirectory(this);
    emit sendFilePath(dirPath);
    qDebug()<<dirPath;
}


void MainWindow::on_pushButton_3_clicked()
{
    destinationDirPath=QFileDialog::getExistingDirectory(this);
    emit sendFilePath1(destinationDirPath);
    qDebug()<<destinationDirPath;
}


void MainWindow::on_pushButton_clicked()
{
    sorter.sort();
}

