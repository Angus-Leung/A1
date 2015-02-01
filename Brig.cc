#include <iostream>
using namespace std;
#include "Brig.h"

Brig::Brig() {
    // constructor
    numCells = 0;
    CellArray cells = CellArray();
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
    cout << "Brig: #cells=" << this.numCells << endl;
    
    for (i = 0; i < numCells; ++i) {
        cout << "--Cell " << i << ": space remaining=" << cells.get(i)->spaceRemaining << endl;
        Cell *cell = cells.get(i);
        for (j = 0; j < cell->getNumPirates(); ++j) {
            if (cell->pirates[j] == 0)
                continue;
            cout << "----Pirate id: " << cell->pirates[j]->getPirateId() 
                    << "  space: " << cell->pirates[j]->getPirateSpace() << endl;
        }
    }
}