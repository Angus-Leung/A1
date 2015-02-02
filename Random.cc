#include "Random.h"
#include <stdlib.h>
#include <time.h>

int randomInt(int max)
{
	double r = ( (double)rand() / ((double)(RAND_MAX)+(double)(1)) ); 
	return (int)(r * max);
}

void Random::seed(){
    srand(time(0));
}