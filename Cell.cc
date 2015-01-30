#include <iostream>
using namespace std;
#include "Cell.h"

Cell::Cell() {
/*	
	Pirate::Pirate(int i, int s){
    id = i;
    space = s;
}

int getPirateId()
{
    return id;
}

int getPirateSpace(){
    return space;
}
*/
	
//Constructor

	Cell:Cell(){
		cellNumber 		= getCellNum();
		spaceRemaining  = MAX_CELL_SPACE;
		numPirates		= 0;
	}

//Functions
/*	int getNextCellNum();
    int getSpaceRemaining();
    int getNumPirates();
    void setSpaceRemaining(); */
	
	int Cell::getNextCellNum(){
		static int id = 1;
	
		return (id++);
	}
	
	int Cell::getSpaceRemaining(){
		return spaceRemaining;
	}
	
	int Cell::getNumPirates(){
		return numPirates;
	}
	

}