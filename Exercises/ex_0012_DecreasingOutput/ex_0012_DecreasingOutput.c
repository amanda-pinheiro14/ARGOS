// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0012_DecreasingOutput.h"

// Function definitions
void ex_0012_DecreasingOutput(void)
{
  // TODO: read 3 integers separated by commas, then print them in decreasing order
  int a,b,c;
  int status = 0;
  const int nbExpectedValues = 3;
  do
  {
    printf("Please enter 3 integers separated by commas: ");
    status = scanf("%d , %d , %d", &a, &b, &c);

    {
      int ch;
      do
      {
        ch = getchar();
      } while (ch != '\n' && ch != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  int temp;

  if (a < b) {
    temp = a;
    a = b;
    b = temp;
  }
  if (a < c) {
      temp = a;
      a = c;
      c = temp;
  }
  if (b < c) {
    temp = b;
    b = c;
    c = temp;
  }

  printf("The 3 integers sorted in decreasing order: %d, %d, %d\n", a, b, c);
}
