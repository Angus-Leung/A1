#ifndef CELLARRAY_H
#define CELLARRAY_H

#define MAX_PIRATES    16

class CellArray {

// Data members
private:
    Pirate *pirates[MAX_PIRATES];
    
// Constructor
public:
    CellArray();

// Member functions
public:
    void add(Pirate*);
    void remove(int);       // the int is an index
    void get(int);      
    void set(int);
    int getIndex(Pirate*);
}
#endif
