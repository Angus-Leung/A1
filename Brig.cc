#include <iostream>
using namespace std;
#include "Brig.h"
#include "Display.h"

Brig::Brig() {
    // constructor
    numCells = 0;
    CellArray cellList = CellArray();
}

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
            Display::pause();
            return;
        }
        cell = new Cell();
        cellList.add(cell, numCells);
        numCells++;
    }

    if (cell->getNumPirates() == MAX_PIRATES) {
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