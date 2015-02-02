#include "Control.h"
#include "Display.h"

void Control::startProgram() {
    int choice1 = -1;
    int choice2 = -1;
    
    Random::seed();
    
    Brig myBrig;
    
    while (choice1 != 0) {
        Display::mainMenu(&choice1);
        
        if (choice1 == 0) {
            break;
        }
        
        else if (choice1 == 1) {
            choice2 = -1;
            while (choice2 != 0) {
                Display::pirateMenu(&choice2);
                if (choice2 == 0)
                    break;
                else if (choice2 == 1)
                    myBrig.addPirates();
            }
        }
        
        else if (choice1 == 2) {
            Display::printBrig(&myBrig);
        }
        
        if (choice2 != 0)
            Display::pause();
    }
    
    myBrig.cleanup();
}
