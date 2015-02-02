#ifndef CELLARRAY_H
#define CELLARRAY_H

#define MAX_CELLS      48

#include "Cell.h"

class CellArray {

// Data members
private:
    Cell *cells[MAX_CELLS];
    
// Constructor
public:
    CellArray();

// Member functions
public:
    void add(Cell*, int);
    Cell* get(int);
};

#endif
