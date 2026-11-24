// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

// Function definitions
// TODO: implement ex_0025_FillArray
int status = 0;
int ex_0025_FillArray(int array[],int max_capacity){
    if (max_capacity <= 0) {
        return 0;
    }
    int count =0;
    const int nbExpectedValues = 1;
    while (count < max_capacity) {
        int x = 0;
        int status;

        // Ton bloc de lecture et de nettoyage du buffer
        do {
            status = scanf("%d", &x);

            {
                int c;
                do {
                    c = getchar();
                } while (c != '\n' && c != EOF);
            }
        } while (status != nbExpectedValues && status != EOF);

        // Si on a atteint la fin de l'entrée (EOF) ou lu une valeur négative, on arrête
        if (status == EOF || x < 0) {
            break;
        }

        array[count] = x;
        count++;
    }

    return count;
}
