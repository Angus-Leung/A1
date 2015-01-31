#include <iostream>
using namespace std;
#include "Cell.h"
	
//Constructor

Cell:Cell() {
    cellNumber 		= getNextCellNum();
    spaceRemaining  = MAX_CELL_SPACE;
    numPirates		= 0;
}
	
//Functions
    
static int Cell::getNextCellNum() {
    static int id = 1;

    return (id++);
}

int Cell::getSpaceRemaining() {
    return spaceRemaining;
}

int Cell::getNumPirates() {
    return numPirates;
}