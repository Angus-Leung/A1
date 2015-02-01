#include "PirateArray.h"

PirateArray::PirateArray() {
    // constructor
    Pirate *pirates[MAX_PIRATES];
}

void PirateArray::add(Pirate *newPirate) {
    static int index = 0;
    pirates[index] = newPirate;
    index++;
}

Pirate* PirateArray::getPirate(int i) {
    return pirates[i];
}

