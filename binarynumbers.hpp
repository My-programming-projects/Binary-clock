#ifndef BINARYNUMBERS_HPP
#define BINARYNUMBERS_HPP

#include <QStringList>

class BinaryNumbers
{
public:
    BinaryNumbers() = default;

    static QString getNumber(int index);

private:
    static QStringList numbers;
};

#endif // BINARYNUMBERS_HPP
