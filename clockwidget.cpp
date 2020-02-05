#include "clockwidget.hpp"
#include "ui_clockwidget.h"

ClockWidget::ClockWidget(int firstDigit, int secondDigit, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClockWidget)
{
    ui->setupUi(this);

    create(firstDigit, 0, firstNumberlabels_);
    create(secondDigit, 1, secondNumberLabels_);
}

ClockWidget::~ClockWidget()
{
    delete ui;
}

void ClockWidget::create(int size, int col, QVector<QLabel*>& labels)
{
    int row = MAX_LABELS - size;

    for(int i = 0; i < size; ++i)
    {
        QLabel* label = new QLabel(this);
        label->setPixmap(QPixmap(PixmapFiles::getFileName(0)));
        ui->gridLayout->addWidget(label, row, col);
        labels.push_back(label);

        row++;
    }
}

void ClockWidget::update(const TimeAtBinary& timeAtBinary, bool isHour)
{
    auto firstDigit = ( isHour ? timeAtBinary.getFirst().mid(2, 2) : timeAtBinary.getFirst().mid(1, 3) );

    updateSelected(firstDigit, firstNumberlabels_);
    updateSelected(timeAtBinary.getSecond(), secondNumberLabels_);
}

void ClockWidget::updateSelected(const QString& binaryNumber, QVector<QLabel*> labels)
{
    for(int i = 0; i < binaryNumber.size(); ++i)
    {
        int fileNumber = ( binaryNumber[i] == "0" ? 0 : 1 );
        labels[i]->setPixmap(QPixmap(PixmapFiles::getFileName(fileNumber)));
    }
}
