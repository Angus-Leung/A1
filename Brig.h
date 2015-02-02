#ifndef BRIG_H
#define BRIG_H

#include "CellArray.h"

#define MAX_CELLS      48

class Brig {
    
//Data members
private:
    int numCells;
    CellArray cellList;
    
//Constuctors
public:
    Brig();
        
//Functions
public:
    int getNumCells();
    Cell* getCell(int);
    void addPirates();
    void addOnePirate(Pirate*);
    void cleanup();
};

#endif
