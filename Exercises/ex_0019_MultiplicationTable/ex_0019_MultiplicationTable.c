// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0019_MultiplicationTable.h"

// Function definitions
// TODO: implement ex_0019_Read and ex_0019_MultiplicationTable

int ex_0019_Read(int min, int max){
    int status = 0;
    int x = 0;


    do {
        printf("Please enter the multiplication table (in [%d..%d]): ", min, max);
        status = scanf("%d",&x);
        {
        int c;
        if (status == EOF) {
            return min; 
        }
        do {
            c = getchar();
            
        } while (c != '\n' && c != EOF);
    } 
    } while (status != 1 || x < min || x > max);
    return x;
    

}

void ex_0019_MultiplicationTable ( int a) {

    printf("\nMULTIPLICATION TABLE FOR %d\n",a);

    for (int i=1;i <=10 ; i++){
        int b = a * i;
        printf("%d X %d = %d\n",a,i,b);
    }
}
