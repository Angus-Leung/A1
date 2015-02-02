#ifndef PIRATEARRAY_H
#define PIRATEARRAY_H

#define MAX_PIRATES    16

#include "Pirate.h"

class PirateArray {

// Data members
private:
    Pirate *pirates[MAX_PIRATES];

// Constructor
public:
    PirateArray();

// Member functions
public:
    void add(Pirate*, int);
    //void remove(int);       // the int is an index
    Pirate* getPirate(int);
    // void set(int);
    //int getIndex(Pirate*);
    
};
#endif 
