//
//  Pirate.cc
//  
//
//  Created by Angus Leung on 2015-01-28.
//
//

#include <iostream>
using namespace std;
#include "Pirate.h"

Pirate::Pirate(int i, int s) {
    id = i;
    space = s;
}

int Pirate::getPirateId() {
    return id;
}

int Pirate::getNextPirateId() {
    static int nextId = 1;
    
    return(nextId++); 
}

int Pirate::getPirateSpace() {
    return space;
}
