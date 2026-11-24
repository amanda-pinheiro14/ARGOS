// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0015_DaysInMonth.h"

// Function definitions
void ex_0015_DaysInMonth(void)
{
    // Use the following message
    // print with printf("%s", input_message);
    const char *input_message = "Please enter the number of the month (january=1, ... , december=12): ";
    
    int month = 0;
    int days = 0;
    int status = 0;
    const int nbExpectedValues = 1;

    // Saisie en boucle avec validation :
    // redemande tant que scanf échoue ou que month n'est pas compris entre 1 et 12
    do
    {
        printf("%s", input_message);
        status = scanf("%d", &month);

        // Vidage systématique de stdin jusqu'à '\n' ou EOF
        int c;
        do
        {
            c = getchar();
        } while (c != '\n' && c != EOF);

        if (status == EOF)
        {
            return;
        }

    } while (status != nbExpectedValues || month < 1 || month > 12);

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;

        case 2:
            days = 28;
            break;

        default:
            break;
    }

    printf("Month %d has %d days.\n", month, days);
}