#ifndef CELL_H
#define CELL_H

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
    
    Cell(int cNum, int sRem);
        
//Functions
public:
    int getCellNum();
    int getSpaceRemaining();
    int getNumPirates();
    void setSpaceRemaining();
    void addNumPirates();
    
};

#endif
