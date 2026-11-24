// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0022_Invert.h"

// Function definitions
// TODO: implement ex_0022_Invert
int ex_0022_Invert(int n)
{
    if (n < 0) {
        return -1;
    }

    int inverted = 0;
    while (n > 0) {
        int digit = n % 10; //prend le dernier chiffre
        inverted = inverted * 10 + digit;
        n /= 10; //supprime le dernier chiffre
    }

    return inverted;
}