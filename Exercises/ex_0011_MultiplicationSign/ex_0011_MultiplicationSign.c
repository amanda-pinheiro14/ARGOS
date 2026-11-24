// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0011_MultiplicationSign.h"

// Function definitions
void ex_0011_MultiplicationSign(void)
{
  // TODO: read 2 integers, then print the sign of their product without computing it
  int a,b;
  int status = 0;
  const int nbExpectedValues = 1;
  do
  {
    printf("Please enter 2 integers:");
    status = scanf("%d %d",&a, &b);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);
  if (status == EOF) {
      return;
  } 
  if ( a == 0 || b == 0) {
    printf("%d * %d = 0", a, b);
  }
  if (a == 0 || b == 0) {
    printf("%d * %d = 0\n", a, b);
  }
  else if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
    // Si les deux sont positifs OU les deux sont négatifs
    printf("%d * %d > 0\n", a, b);
  }
  else {
    // Sinon (l'un est positif et l'autre négatif)
    printf("%d * %d < 0\n", a, b);
  }
}
