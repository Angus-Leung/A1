#ifndef CELL_H
#define CELL_H

#define MAX_CELLS 		48
#define MAX_CELL_SPACE 	7
#define MAX_PIRATES 	16


#include <stdio.h>

class Cell {
    
//Data members
private:
    PirateArray pirates;
    int cellNumber;
    int spaceRemaining;
    int numPirates;
    
//Constuctors
public:
    Cell();
        
//Functions
public:
    static int getNextCellNum();
    int getSpaceRemaining();
    void setSpaceRemaining(int);
    int getNumPirates();
    void setNumPirates(int);
};

#endif
