#include <iostream>
using namespace std;
#include "Brig.h"

Brig::Brig() {
    // constructor
    numCells = 0;
    // cells = new CellArray
}

/*
    Prompts the user to indicate the number of pirates to add,
    and adds each pirate to the brig
*/

Brig::addPirates() {
    Pirate *newPirate;
    int num;

    // THIS IS SOMETHING THAT SHOULD BE IN A USER I/O CLASS
    cout << "\nEnter the number of pirates:   ";
    cin >> num;

    while (num > 0) {
    
        newPirate = new Pirate(getNextPirateId(), randomInt(4)+2);
        addOnePirate(newPirate);
        --num;
    }
}

Brig::addOnePirate(Pirate *newPirate) {
/*  // figure out how the CellArray works first
    CellType *cell = NULL;
    int index = -1;
    int i;

    for (i=0; i<brig->numCells; ++i) {
        if (pirateFits(brig->cells[i], pirate)) {
            cell = brig->cells[i];
        }
    }

    if (cell == NULL) {
        if (brig->numCells == MAX_CELLS) {
            printf("Could not add pirate -- press enter to continue...");
            getchar();
            return;
        }
        cell = (CellType *) malloc(sizeof(CellType));
        cell->cellNumber     = getNextCellId();
        cell->spaceRemaining = MAX_CELL_SPACE;
        cell->numPirates     = 0;
        brig->cells[brig->numCells] = cell;
        brig->numCells++;
    }

    if (cell->numPirates == MAX_PIRATES) {
        printf("Could not add pirate -- press enter to continue...");
        getchar();
        return;
    }
    cell->pirates[cell->numPirates] = pirate;
    cell->numPirates++;
    cell->spaceRemaining -= pirate->space;
*/
}