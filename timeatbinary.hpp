#ifndef TIMEATBINARY_HPP
#define TIMEATBINARY_HPP

#include <QString>

#include "decay.hpp"
#include "binarynumbers.hpp"

class TimeAtBinary
{
public:
    TimeAtBinary(int number);

    QString getFirst() const noexcept;
    QString getSecond() const noexcept;

private:

    void convert(int number);

    QString firstDigit_;
    QString secondDigit;
};

#endif // TIMEATBINARY_HPP
