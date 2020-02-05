#ifndef CLOCKWIDGET_HPP
#define CLOCKWIDGET_HPP

#include <QWidget>
#include <QLabel>

#include "pixmapfiles.hpp"
#include "timeatbinary.hpp"

namespace Ui {
class ClockWidget;
}

class ClockWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClockWidget(int firstDigit, int secondDigit, QWidget *parent = nullptr);
    ~ClockWidget();

    void update(const TimeAtBinary& timeAtBinary, bool isHour = false);

private:
    Ui::ClockWidget *ui;

    void create(int size, int col, QVector<QLabel *> &labels);
    void updateSelected(const QString& binaryNumber, QVector<QLabel*> labels);

    QVector<QLabel*> firstNumberlabels_;
    QVector<QLabel*> secondNumberLabels_;

    enum { MAX_LABELS = 4 };
};

#endif // CLOCKWIDGET_HPP
