#ifndef BRIG_H
#define BRIG_H

#define MAX_CELLS      48

#include "CellArray.h"

class Brig {
    
// Data members
private:
    int numCells;
    CellArray cellList;
    
// Constructor
public:
    Brig();
        
// Functions
public:
    int getNumCells();
    Cell* getCell(int);
    void addPirates();
    void addOnePirate(Pirate*);
    void cleanup();
};

#endif
