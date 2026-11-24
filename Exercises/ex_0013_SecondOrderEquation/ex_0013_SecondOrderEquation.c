// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <math.h>

// Local includes
#include "ex_0013_SecondOrderEquation.h"

// Function definitions
void ex_0013_SecondOrderEquation(void)
{
    // Messages prédéfinis
    const char *usage_message = "Compute solutions of an equation of the form ax^2 + bx + c = 0\n";
    const char *input_message = "Please enter coefficients a, b, and c: ";
    const char *no_solution_message = "This equation has no solution.\n";
    const char *any_real_message = "Any real is solution of this equation.\n";
    const char *no_real_solution_message = "This equation has no real solution.\n";
    const char *linear_solution_message = "The solution of this linear equation is: \n";
    const char *double_solution_message = "The double real solution of this equation is: \n";
    const char *real_solutions_message = "The real solutions of this equation are: \n";

    double a = 0.0, b = 0.0, c = 0.0;
    int status = 0;
    const int nbExpectedValues = 3;

    // Boucle de saisie : le test réaffiche les deux messages à chaque tentative
    do
    {
        printf("%s", usage_message);
        printf("%s", input_message);
        status = scanf("%lf %lf %lf", &a, &b, &c);

        // Vidage du buffer stdin jusqu'à '\n' ou EOF
        int ch;
        do
        {
            ch = getchar();
        } while (ch != '\n' && ch != EOF);

    } while (status != nbExpectedValues && status != EOF);

    if (status != nbExpectedValues)
    {
        return;
    }

    // Traitement des cas
    if (a == 0.0)
    {
        if (b == 0.0)
        {
            if (c == 0.0)
            {
                // 0x^2 + 0x + 0 = 0
                printf("%s", any_real_message);
            }
            else
            {
                // 0x^2 + 0x + c = 0 (c != 0)
                printf("%s", no_solution_message);
            }
        }
        else
        {
            // bx + c = 0 => x = -c / b
            double x = -c / b;
            printf("%s", linear_solution_message);
            printf("x = %.4f\n", x);
        }
    }
    else
    {
        // Équation du second degré : a != 0
        double delta = (b * b) - (4.0 * a * c);

        if (delta < 0.0)
        {
            printf("%s", no_real_solution_message);
        }
        else if (delta == 0.0)
        {
            double x = -b / (2.0 * a);
            printf("%s", double_solution_message);
            printf("x = %.4f\n", x);
        }
        else
        {
            double sqrt_delta = sqrt(delta);
            double x1 = (-b + sqrt_delta) / (2.0 * a);
            double x2 = (-b - sqrt_delta) / (2.0 * a);
            printf("%s", real_solutions_message);
            printf("x1 = %.4f\n", x1);
            printf("x2 = %.4f\n", x2);
        }
    }
}