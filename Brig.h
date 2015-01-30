#ifndef BRIG_H
#define BRIG_H

#include <stdio.h>

class Brig {
    
//Data members
private:
    int numCells;
    CellArray cells;
    
//Constuctors
public:
    Brig();
        
//Functions
public:
    int getNumCells();
    void addPirates();
    void addOnePirate(Pirate*);
};

#endif
