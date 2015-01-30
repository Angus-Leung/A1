#ifndef CELL_H
#define CELL_H

#define MAX_CELLS 		48
#define MAX_CELL_SPACE 	7
#define MAX_PIRATES 	16


#include <stdio.h>

class Cell {
    
//Data members
private:
    int cellNumber;
    int spaceRemaining;
    int numPirates;
    
//Constuctors
public:
    Cell();
        
//Functions
public:
    int getNextCellNum();
    int getSpaceRemaining();
    int getNumPirates();
};

#endif
