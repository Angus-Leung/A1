#include "CellArray.h"

CellArray::CellArray() {
    // constructor
    Cell *cells[MAX_CELLS];
}

void CellArray::add(Cell *newCell, int index) {
    cells[index] = newCell;
}

Cell* CellArray::get(int i) {
    return cells[i];
}