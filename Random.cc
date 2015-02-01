#include "Random.h"
#include <stdlib.h>

int randomInt(int max)
{
	double r = ( (double)rand() / ((double)(RAND_MAX)+(double)(1)) ); 
	return (int)(r * max);
}