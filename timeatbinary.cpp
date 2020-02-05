#include "timeatbinary.hpp"

TimeAtBinary::TimeAtBinary(int number)
{
    convert(number);
}

QString TimeAtBinary::getFirst() const noexcept
{
    return firstDigit_;
}

QString TimeAtBinary::getSecond() const noexcept
{
    return secondDigit;
}

void TimeAtBinary::convert(int number)
{
    auto digits = decayToDigits(number);

    firstDigit_ = BinaryNumbers::getNumber(digits.first);
    secondDigit = BinaryNumbers::getNumber(digits.second);
}
