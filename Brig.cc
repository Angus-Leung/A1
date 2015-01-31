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
    Pirate* newPirate;
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
    Cell* cell = NULL;
    int index = -1;
    int i;

    for (i = 0; i< numCells; ++i) {
        if (pirateFits(cells.get(i), pirate)) {
            cell = cells.get(i);
        }
    }

    if (cell == NULL) {
        if (numCells == MAX_CELLS) {
            // these next 2 lines could be replaced by something like pause() from Christine's util.c in a control object
            cout << "Could not add pirate -- press enter to continue...";
            getchar();
            return;
        }
        cell = new Cell();
        // these are all handled in the constructor:
        // cell->cellNumber     = getNextCellId();
//         cell->spaceRemaining = MAX_CELL_SPACE;
//         cell->numPirates     = 0;
        cells.add(cell);
        numCells++;
    }

    if (cell->numPirates == MAX_PIRATES) {
        // again, replace this with a pause() function in a control object
        printf("Could not add pirate -- press enter to continue...");
        getchar();
        return;
    }
    
    cell->add(newPirate);
    cell->numPirates++;
    cell->spaceRemaining -= newPirate->space;
}