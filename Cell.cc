#include <iostream>
using namespace std;
#include "Cell.h"
	
//Constructor

Cell::Cell() {
    PirateArray pirateList = PirateArray();
    cellNumber 		= getNextCellNum();
    spaceRemaining  = MAX_CELL_SPACE;
    numPirates		= 0;
}
	
//Functions
    
int Cell::getNextCellNum() {
    static int id = 1;

    return (id++);
}

int Cell::getSpaceRemaining() {
    return spaceRemaining;
}

void Cell::setSpaceRemaining(int newSpace) {
    spaceRemaining = newSpace;
}

int Cell::getNumPirates() {
    return numPirates;
}

void Cell::setNumPirates(int newNum) {
    numPirates = newNum;
}

bool Cell::pirateFits(Pirate *pirate) {
    if (spaceRemaining >= pirate->getPirateSpace()) {
        return true;
    }
    
    return false;
}

void Cell::addPirate(Pirate *pirate) {
    pirateList.add(pirate);
    spaceRemaining -= pirate->getPirateSpace();
    numPirates++;
}

Pirate* Cell::getPirate(int i){
    return pirateList.getPirate(i);
}
