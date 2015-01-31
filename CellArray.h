#ifndef CELLARRAY_H
#define CELLARRAY_H

#define MAX_CELLS      48

class CellArray {

// Data members
private:
    Cell *cells[MAX_CELLS];
    
// Constructor
public:
    CellArray();

// Member functions
public:
    void add(Cell*);
    void remove(int);       // the int is an index
    Cell* get(int);      
    void set(int);
    int getIndex(Cell*);
    
}

#endif
