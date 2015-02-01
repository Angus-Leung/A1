#ifndef PIRATE_ARRAY
#define PIRATE_ARRAY

#define MAX_PIRATES    16

class PirateArray {

// Data members
private:
    Pirate *pirates[MAX_PIRATES];

// Constructor
public:
    PirateArray();

// Member functions
public:
    void add(Pirate*);
    void get(int);
    
};
#endif 
