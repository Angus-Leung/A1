#include <iostream>
using namespace std;
#include "Brig.h"

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

    // THIS IS SOMETHING THAT SHOULD BE IN A USER I/O CLASS
    cout << "\nEnter the number of pirates:   ";
    cin >> num;
    cout << "making " << num << " pirates" << endl;

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
        if (cellList.get(i)->pirateFits(newPirate)) {
            cell = cellList.get(i);
        }
    }

    if (cell == NULL) {
        if (numCells == MAX_CELLS) {
            // these next 2 lines could be replaced by something like pause() from Christine's util.c in a user IO object
            cout << "Could not add pirate -- press enter to continue...";
            getchar();
            return;
        }
        cout << "making a new cell" << endl;
        cell = new Cell();
        cellList.add(cell);
        numCells++;
    }

    if (cell->getNumPirates() == MAX_PIRATES) {
        // again, replace this with a pause() function in a control object
        cout << "Could not add pirate -- press enter to continue...";
        getchar();
        return;
    }
    
    cell->addPirate(newPirate);
}

void Brig::printBrig()
{
    int i, j;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Brig: #cells=" << numCells << endl;

    for (i = 0; i < numCells; ++i) {
        cout << "--Cell " << i << ": space remaining= " 
            << cellList.get(i)->getSpaceRemaining() << endl;
        Cell *cell = cellList.get(i);
        for (j = 0; j < cell->getNumPirates(); ++j) {
            if (cell->getPirate(j) == 0)
                continue;
            cout << "----Pirate id: " << cell->getPirate(j)->getPirateId() 
                << "  space: " << cell->getPirate(j)->getPirateSpace() << endl;
        }
    }
}






