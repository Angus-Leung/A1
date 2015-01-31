#ifndef PIRATE_H
#define PIRATE_H

#include <stdio.h>

class Pirate {
    
//Data members
private:
    int id;
    int space;
    
//Constuctors
public:
    Pirate();
        
//Functions
public:
    int getPirateId();
    int getPirateSpace();
    static int getNextPirateId();
};



#endif
