#ifndef PIRATE_H
#define PIRATE_H

class Pirate {
    
// Data members
private:
    int id;
    int space;
    
// Constructors
public:
    Pirate();
        
// Functions
public:
    int getPirateId();
    int getPirateSpace();
    static int getNextPirateId();
};



#endif
