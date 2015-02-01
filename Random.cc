//
//  Random.cc
//  
//
//  Created by Angus Leung on 2015-01-31.
//
//

#include "Random.h"
#include <stdlib.h>

static void seed(){
    srand((usigned)time(0));
}

static int randomInt(int){
    
    double r = ( (double)rand() / ((double)(RAND_MAX)+(double)(1)) );
    
    return (int)(r * max);
}