#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(this->geometry().width(),this->geometry().height());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString input = ui->input->text();
    QString bitrate = ui->bitrate->text();
    QString rate = ui->rate->text();
    QString codec = ui->codec->text();
    QString output = ui->output->text();
    QString command = "ffmpeg -i iput123 -vn -b:a bitsrat -ar arate3 -c:a codac2 oputut";
    command.replace("iput123", input).replace("bitsrat", bitrate).replace("arate3", rate).replace("codac2", codec).replace("oputut", output);
    std::string strcommand = command.toUtf8().constData();
    const char* charcommand = strcommand.c_str();
    std::system(charcommand);
}

