#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    hour_(new ClockWidget(2, 4)),
    minute_(new ClockWidget(3, 4)),
    second_(new ClockWidget(3, 4))
{
    ui->setupUi(this);

    ui->horizontalLayout->addWidget(hour_);
    ui->horizontalLayout->addWidget(minute_);
    ui->horizontalLayout->addWidget(second_);

    QObject::connect(&timer, &QTimer::timeout, this, &MainWindow::updateTime);

    timer.setInterval(1000);
    timer.start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTime()
{
    auto currentTime = QTime::currentTime();

    TimeAtBinary hour(currentTime.hour());
    TimeAtBinary minute(currentTime.minute());
    TimeAtBinary second(currentTime.second());

    hour_->update(hour, true);
    minute_->update(minute);
    second_->update(second);
}

