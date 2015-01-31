#ifndef PIRATE_ARRAY
#define PIRATE_ARRAY

#define MAX_PIRATES    16

// Data members
private:
    Pirate *pirates[MAX_PIRATES];

// Constructor
public:
    PirateArray();

// Member functions
public:
    void add(Pirate*);
    //void remove(int);       // the int is an index
    void get(int);
    // void set(int);
    //int getIndex(Pirate*);

#endif 
