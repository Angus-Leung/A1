#include <iostream>
using namespace std;
#include <string>

int main() {
    int choice = -1;
    
    cout << "\n\n\n                   WELCOME TO THE BRIG MANAGEMENT SYSTEM \n\n";
    cout << "( 1 )  Manage pirates\n";
    cout << "( 2 )  View brig\n";
    cout << "( 0 )  Exit\n";
    
    while (choice < 0 || choice > 2) {
        cout << "Enter your selection:  ";
        cin >> choice;
    }
}