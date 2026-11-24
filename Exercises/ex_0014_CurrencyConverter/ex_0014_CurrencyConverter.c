// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h> // for bool, true, false

// Local includes
#include "ex_0014_CurrencyConverter.h"

// Function definitions
void ex_0014_CurrencyConverter(void)
{ 
    const double WON2CHF = 0.00070;
    const double USD2CHF = 0.99;
    const double YEN2CHF = 0.0067;
    const double POUND2CHF = 1.13;

    // Use the following messages
    // print with printf("%s", input_message);
    const char *input_message = "USAGE: non-negative value [W | $ | Y | P]\n"
                                "Won = W  Dollar = $  Yen = Y  Pound = P\n"
                                "Please enter the amount to convert: ";
    // print with printf("%s", error_message);
    const char *error_message = "The input format is not correct!!\n";
    // print with printf("%s", unsupported_currency_message);
    const char *unsupported_currency_message = "Unsupported currency!!\n";
    // print with printf("%s", negative_amount_message);
    const char *negative_amount_message = "The input amount is negative!!\n";

    double amount = 0.0;
    char currency = '\0';
    bool is_valid = false;

    do
    {
        printf("%s", input_message);

        int status = scanf(" %lg %c", &amount, &currency);

        // Vidage systématique de stdin jusqu'à '\n' ou EOF
        int ch;
        do
        {
            ch = getchar();
        } while (ch != '\n' && ch != EOF);

        if (status == EOF)
        {
            return;
        }

        // Validation du format
        if (status != 2)
        {
            printf("%s", error_message);
        }
        else
        {
            bool valid_currency = (currency == 'W' || currency == '$' || currency == 'Y' || currency == 'P');
            bool valid_amount = (amount >= 0.0);

            // Vérification de la devise d'abord, puis du montant
            if (!valid_currency)
            {
                printf("%s", unsupported_currency_message);
            }
            if (!valid_amount)
            {
                printf("%s", negative_amount_message);
            }

            if (valid_currency && valid_amount)
            {
                is_valid = true;
            }
        }

    } while (!is_valid);

    // Conversion selon la devise
    double chf_amount = 0.0;
    switch (currency)
    {
        case 'W':
            chf_amount = amount * WON2CHF;
            break;
        case '$':
            chf_amount = amount * USD2CHF;
            break;
        case 'Y':
            chf_amount = amount * YEN2CHF;
            break;
        case 'P':
            chf_amount = amount * POUND2CHF;
            break;
        default:
            break;
    }

    printf("Swiss francs: %.3f\n", chf_amount);
}