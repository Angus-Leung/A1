//
//  Display.cc
//  
//
//  Created by Angus Leung on 2015-01-28.
//
//

#include "Display.h"
#include <iostream>
#include <string>

using namespace std;

static void Display::mainMenu (int *choice){
    
    *choice = -1;
    
    cout << "\n\n\n                   WELCOME TO THE BRIG MANAGEMENT SYSTEM \n\n";
    cout << "( 1 )  Manage pirates\n";
    cout << "( 2 )  View brig\n";
    cout << "( 0 )  Exit\n";
    
    while (*choice < 0 || *choice > 2) {
        cout << "Enter your selection:  ";
        cin >> choice;
    }
}

static void Display::pirateMenu (){
    
    *choice = -1;
    
    cout << "\n\n\n                   PIRATE MANAGEMENT MENU \n\n";
    cout << "( 1 )  Add pirates\n";
    cout << "( 0 )  Exit\n";
    
    while (*choice < 0 || *choice > 1) {
        cout << "Enter your selection:  ";
        cin >> choice;
    }

}
