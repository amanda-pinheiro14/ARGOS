// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0016_SumProductMean.h"

// Function definitions
void ex_0016_SumProductMean(void)
{
    // Use the following messages
    // print with printf("%s", input_message);
    const char *input_message = "Number of values to read: ";
    // print with printf(value_message, i); where i is the value number, starting at 1
    const char *value_message = "%d. number: ";

    int n = 0;
    int status = 0;
    const int nbExpectedValues = 1;
    
    printf("%s", input_message);
    do
    {
        status = scanf("%d", &n);

        int c;
        do
        {
            c = getchar();
        } while (c != '\n' && c != EOF);

        if (status == EOF)
        {
            return;
        }

    } while (status != nbExpectedValues || n < 1 || n > 15);

    int sum = 0;
    int product = 1;

    for (int i = 1; i <= n; ++i)
    {
        int val = 0;
        int val_status = 0;

        do
        {
            printf(value_message, i);
            val_status = scanf("%d", &val);

            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);

            if (val_status == EOF)
            {
                return;
            }

        } while (val_status != nbExpectedValues);

        sum += val;
        product *= val;
    }

    double mean = (double)sum / (double)n;

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Mean = %.4f\n", mean);
}