#include <iostream>
using namespace std;
#include "Pirate.h"

Pirate::Pirate() {
    id = getNextPirateId();
    space = Random::randomInt(4) + 2;
}

int Pirate::getPirateId() {
    return id;
}

static int Pirate::getNextPirateId() {
    static int nextId = 1;
    
    return(nextId++); 
}

int Pirate::getPirateSpace() {
    return space;
}
