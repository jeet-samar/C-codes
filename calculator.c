#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double num1, num2, result;
    int choice;
    char continue_calculator, operators;

    do {   
        // Taking user input
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Display calculator options
        printf("Choose operation:\n");
        printf("1 → Addition (+)\n");
        printf("2 → Subtraction (-)\n");
        printf("3 → Multiplication (*)\n");
        printf("4 → Division (/)\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Switch-case
        switch (choice) {
            case 1:
                operators = '+';
                result = num1 + num2;
                break;
            case 2:
                operators = '-';
                result = num1 - num2;
                break;
            case 3:
                operators = '*';
                result = num1 * num2;
                break;
            case 4:
                operators = '/';
                if (num2 != 0) {
                    double quotient = num1 / num2;
                    int remainder = (int)num1 - ((int)num2 * (int)(num1 / num2));

                    printf("Quotient: %.2lf\n", quotient);
                    printf("Remainder: %d\n", remainder);

                    result = quotient; 
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                    continue;
                }
                break;
            default:
                printf("Invalid choice! Please enter 1, 2, 3, or 4.\n");
                continue;
        }

        
        printf("%.2lf %c %.2lf = %.2lf\n", num1, operators, num2, result);

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continue_calculator); 

    } while (continue_calculator == 'y' || continue_calculator == 'Y');

    printf("Calculator program ended.\n");
    return 0;
}

