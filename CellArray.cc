#include "CellArray.h"

CellArray::CellArray() {
    // constructor
    Cell *cells[MAX_CELLS];
}

void CellArray::add(Cell *newCell) {
    static int index = 0;
    cells[index] = newCell;
    index++;
}

Cell* CellArray::get(int i) {
    return cells[i];
}