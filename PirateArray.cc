#include "PirateArray.h"

PirateArray::PirateArray() {
    // constructor
    Pirate *pirates[MAX_PIRATES];
}

void PirateArray::add(Pirate *newPirate, int index) {
    pirates[index] = newPirate;
}

Pirate* PirateArray::getPirate(int i) {
    return pirates[i];
}

