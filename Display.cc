#include "Display.h"
#include <iostream>
#include <string>

using namespace std;

void Display::mainMenu(int *choice) {
    *choice = -1;
    
    cout << "\n\n\n                   WELCOME TO THE BRIG MANAGEMENT SYSTEM \n\n";
    cout << "( 1 )  Manage pirates\n";
    cout << "( 2 )  View brig\n";
    cout << "( 0 )  Exit\n";
    
    while (*choice < 0 || *choice > 2) {
        cout << "Enter your selection:  ";
        cin >> *choice;
    }
}

void Display::pirateMenu(int *choice) {
    *choice = -1;
    
    cout << "\n\n\n                   PIRATE MANAGEMENT MENU \n\n";
    cout << "( 1 )  Add pirates\n";
    cout << "( 0 )  Exit\n";
    
    while (*choice < 0 || *choice > 1) {
        cout << "Enter your selection:  ";
        cin >> *choice;
    }
}

void Display::pause() {
    cout << "Could not add pirate -- press enter to continue...";
    getchar();
}

void Display::printBrig(Brig *brig) {
    int i, j;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Brig: #cells=" << brig->getNumCells() << endl;

    for (i = 0; i < brig->getNumCells(); ++i) {
        cout << "--Cell " << i << ": space remaining= " << brig->getCell(i)->getSpaceRemaining() << endl;
        Cell *cell = brig->getCell(i);
        for (j = 0; j < cell->getNumPirates(); ++j) {
            if (cell->getPirate(j) == 0)
                continue;
            cout << "----Pirate id: " << cell->getPirate(j)->getPirateId() << "  space: " << cell->getPirate(j)->getPirateSpace() << endl;
        }
    }
}

void Display::promptNumPirates(int *num) {
    cout << "\nEnter the number of pirates:   ";
    cin >> *num;
}