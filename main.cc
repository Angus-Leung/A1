#include <iostream>
using namespace std;
#include <string>

#include "Brig.h"

int main() {
    // PIRATE
    
//     Pirate *p1 = new Pirate();
//     Pirate *p2 = new Pirate();
//     Pirate *p3 = new Pirate();
//     
//     cout << p1->getPirateId() << endl;
//     cout << p1->getPirateSpace() << endl;
//     
//     cout << p2->getPirateId() << endl;
//     cout << p2->getPirateSpace() << endl;
//     
//     cout << p3->getPirateId() << endl;
//     cout << p3->getPirateSpace() << endl;
//     
//     Pirate *p4 = new Pirate();
//     Pirate *p5 = new Pirate();
//     Pirate *p6 = new Pirate();
//     
//     // CELL
//     
//     Cell *c1 = new Cell();
//     Cell *c2 = new Cell();
//     
//     c1->addPirate(p1);
//     cout << c1->getPirate(0)->getPirateId() << endl;
//     c1->addPirate(p2);
//     cout << c1->getPirate(1)->getPirateId() << endl;
//     c1->addPirate(p3);
//     cout << c1->getPirate(2)->getPirateId() << endl;
//     
//     c2->addPirate(p4);
//     cout << c2->getPirate(3)->getPirateId() << endl;
//     c2->addPirate(p5);
//     cout << c2->getPirate(4)->getPirateId() << endl;
//     c2->addPirate(p6);
//     cout << c2->getPirate(5)->getPirateId() << endl;
    
    Brig *b1 = new Brig();
    b1->addPirates();
    b1->printBrig();
    
    b1->cleanup();
}