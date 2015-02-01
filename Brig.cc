#include <iostream>
using namespace std;
#include "Brig.h"

Brig::Brig() {
    // constructor
    numCells = 0;
    CellArray cells;
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

    // THIS IS SOMETHING THAT SHOULD BE IN A USER I/O CLASS
    cout << "\nEnter the number of pirates:   ";
    cin >> num;

    while (num > 0) {
    
        newPirate = new Pirate();
        addOnePirate(newPirate);
        --num;
    }
}

void Brig::addOnePirate(Pirate *newPirate) {
    Cell* cell = NULL;
    int i;

    for (i = 0; i< numCells; ++i) {
        if (cells.get(i)->pirateFits(pirate)) {
            cell = cells.get(i);
        }
    }

    if (cell == NULL) {
        if (numCells == MAX_CELLS) {
            // these next 2 lines could be replaced by something like pause() from Christine's util.c in a user IO object
            cout << "Could not add pirate -- press enter to continue...";
            getchar();
            return;
        }
        cell = new Cell();
        cells.add(cell);
        numCells++;
    }

    if (cell->getNumPirates == MAX_PIRATES) {
        // again, replace this with a pause() function in a control object
        cout << "Could not add pirate -- press enter to continue...";
        getchar();
        return;
    }
    
    cell->add(newPirate);
}

void Brig::printBrig()
{
    int i, j;
    
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Brig: #cells=" << numCells << "\n";
    
    for (i = 0; i < numCells; ++i) {
        Cell *myCell = cells.get(i);
        numPirates = myCell->getNumPirates();
        
        cout << "--Cell %d: space remaining=" << i <<
               myCell->getSpaceRemaining();
        for (j = 0; j < numPirates(); ++j) {
            if (myCell->getPirate(j) == NULL)
                continue;
            cout << "----Pirate id: "<<myCell->getPirate(j)->getPirateId()  << "space: " << myCell->getPirates(j)->getPirateSpace()
                << "\n";
        }
    }
}






