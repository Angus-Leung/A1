//
//  Control.cc
//  
//
//  Created by Angus Leung on 2015-01-31.
//
//

#include "Control.h"

void Display::mainMenu(void)
{
    
    
    while (choice1 != 0) {
        mainMenu(&choice1);
        if (choice1 == 0) {
            break;
        }
        else if (choice1 == 1) {
            choice2 = -1;
            while (choice2 != 0) {
                pirateMenu(&choice2);
                if (choice2 == 0)
                    break;
                else if (choice2 == 1)
                    addPirates(&brig);
            }
        }
        else if (choice1 == 2) {
            printBrig(&brig);
        }
        if (choice2 != 0)
            pause();
    }
    cleanup(&brig);
    
}