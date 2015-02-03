#ifndef   DISPLAY_H
#define   DISPLAY_H

#include "Brig.h"

class Display {

// Member functions
public:
    static void mainMenu(int*);
    static void pirateMenu(int*);
    static void pause();
    static void printBrig(Brig*);
    static void promptNumPirates(int*);
};

#endif