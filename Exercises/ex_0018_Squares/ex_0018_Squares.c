// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Local includes
#include "ex_0018_Squares.h"

// Function definitions
// TODO: implement ex_0018_Square and ex_0018_Squares

int ex_0018_Square(int a) {
    int b = pow(a,2);
    return b;
}

bool ex_0018_Squares (int a) {
    if (a < 1 || a > 1000) {
        return false; 
    }
    for(int i = 1; i <= a; i++) {
        int b = ex_0018_Square(i);
        printf("%d ", b);  
    }
    printf("\n");
    return true;
}