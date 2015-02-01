#include <iostream>
using namespace std;
#include <string>

#include "Brig.h"

int main() {
    // PIRATE
    
    Pirate *p1 = new Pirate();
    Pirate *p2 = new Pirate();
    Pirate *p3 = new Pirate();
    
    cout << p1->getPirateId() << endl;
    cout << p1->getPirateSpace() << endl;
    
    cout << p2->getPirateId() << endl;
    cout << p2->getPirateSpace() << endl;
    
    cout << p3->getPirateId() << endl;
    cout << p3->getPirateSpace() << endl;
    
    // CELL
    
    Cell *c1 = new Cell();
    Cell *c2 = new Cell();
    Cell *c3 = new Cell();
    
    c1->addPirate(p1);
    cout << c1->getPirate(0)->getPirateId() << endl;
    c1->addPirate(p2);
    cout << c1->getPirate(1)->getPirateId() << endl;
    
    Brig *b1 = new Brig();
    b1->addPirates();
    b1->printBrig();
}