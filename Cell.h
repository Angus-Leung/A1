#ifndef CELL_H
#define CELL_H

#define MAX_CELL_SPACE 	7

#include "PirateArray.h"

class Cell {
    
// Data members
private:
    PirateArray pirateList;
    int cellNumber;
    int spaceRemaining;
    int numPirates;
    
// Constructor
public:
    Cell();
        
// Functions
public:
    int getNextCellNum();
    int getSpaceRemaining();
    void setSpaceRemaining(int);
    int getNumPirates();
    void setNumPirates(int);
    bool pirateFits(Pirate*);
    void addPirate(Pirate*);
    Pirate* getPirate(int);
};

#endif
