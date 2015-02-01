#include <iostream>
using namespace std;
#include "Pirate.h"

Pirate::Pirate() {
    id = getNextPirateId();
    // space = Random::randomInt(4) + 2;
    space = 2;
}

int Pirate::getPirateId() {
    return id;
}

int Pirate::getNextPirateId() {
    static int nextId = 1001;
    
    return(nextId++); 
}

int Pirate::getPirateSpace() {
    return space;
}
