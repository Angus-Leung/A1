#include <iostream>
using namespace std;
#include "Brig.h"
#include "Display.h"

Brig::Brig() {
    // constructor
    numCells = 0;
    CellArray cellList = CellArray();
}

/*
    Prompts the user to indicate the number of pirates to add,
    and adds each pirate to the brig
*/

int Brig::getNumCells() {
    return numCells;
}

void Brig::addPirates() {
    Pirate* newPirate;
    int num;

    Display::promptNumPirates(&num);

    while (num > 0) {
        newPirate = new Pirate();
        addOnePirate(newPirate);
        --num;
    }
}

Cell* Brig::getCell(int index) {
    return cellList.get(index);
}

void Brig::addOnePirate(Pirate *newPirate) {
    Cell* cell = NULL;
    int i;

    for (i = 0; i< numCells; ++i) {
        if (cellList.get(i)->pirateFits(newPirate)) {
            cell = cellList.get(i);
        }
    }

    if (cell == NULL) {
        if (numCells == MAX_CELLS) {
            // these next 2 lines could be replaced by something like pause() from Christine's util.c in a user IO object
            Display::pause();
            return;
        }
        cell = new Cell();
        cellList.add(cell, numCells);
        numCells++;
    }

    if (cell->getNumPirates() == MAX_PIRATES) {
        // again, replace this with a pause() function in a user IO object
        Display::pause();
        return;
    }
    
    cell->addPirate(newPirate);
}

void Brig::cleanup() {
    int i, j;

    for (i = 0; i < numCells; ++i) {
        for (j = 0; j < cellList.get(i)->getNumPirates(); ++j) {
            delete cellList.get(i)->getPirate(j);
        }
        delete cellList.get(i);
    }
}