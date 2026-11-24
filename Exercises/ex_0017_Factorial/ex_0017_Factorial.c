// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0017_Factorial.h"

// Function definitions
void ex_0017_Factorial(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter a non-negative integer N: ";

  // TODO: read a non-negative integer N, then compute and print N!

  int status = 0;
  const int nbExpectedValues = 1;
  int a = 0;
  do
  {
    printf("%s", input_message);
    status = scanf("%d", &a);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while ((status != nbExpectedValues || a < 0) && status != EOF);
  //Ajout de a < 0pour pas qu'il accepte les mombres négatif  
  unsigned long long factorial = 1;
    for (int i = 1; i <= a; i++) {
        factorial *= (unsigned long long)i;
    }

    printf("%d! = %llu\n", a, factorial);
    //llu pour unsigned long long
}
