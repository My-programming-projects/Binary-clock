#ifndef DECAY_H
#define DECAY_H

#include <QPair>

inline QPair<int, int> decayToDigits(int number)
{
    return qMakePair(number / 10, number % 10);
}

#endif // DECAY_H
