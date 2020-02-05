#include "binarynumbers.hpp"

QStringList BinaryNumbers::numbers
{
    "0000",
    "0001",
    "0010",
    "0011",
    "0100",
    "0101",
    "0110",
    "0111",
    "1000",
    "1001",
    "1010",
    "1011",
    "1100"
};

QString BinaryNumbers::getNumber(int index)
{
    return numbers[index];
}
