#ifndef   DISPLAY_H
#define   DISPLAY_H

#include "Brig.h"

class Display {
    
public:
    //Functions
    static void mainMenu(int*);
    static void pirateMenu(int*);
    static void pause();
    static void printBrig(Brig*);
};

#endif