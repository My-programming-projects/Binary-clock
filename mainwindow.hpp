#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QTimer>
#include <QTime>

#include "clockwidget.hpp"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateTime();

private:
    Ui::MainWindow *ui;

    ClockWidget* hour_;
    ClockWidget* minute_;
    ClockWidget* second_;

    QTimer timer;
};
#endif // MAINWINDOW_HPP
