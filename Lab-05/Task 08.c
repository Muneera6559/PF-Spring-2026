#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2, result;

    printf("===== Scientific Calculator =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power (x^y)\n");
    printf("7. Logarithm (base 10)\n");
    printf("8. Absolute Value\n");
    printf("9. Sine\n");
    printf("10. Cosine\n");
    printf("11. Tangent\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);

            if(num2 == 0)
                printf("Division by zero not allowed\n");
            else
            {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            }
            break;

        case 5:
            printf("Enter number: ");
            scanf("%lf", &num1);

            if(num1 < 0)
                printf("Square root of negative number not allowed\n");
            else
            {
                result = sqrt(num1);
                printf("Result = %.2lf\n", result);
            }
            break;

        case 6:
            printf("Enter base: ");
            scanf("%lf", &num1);
            printf("Enter power: ");
            scanf("%lf", &num2);

            result = pow(num1, num2);
            printf("Result = %.2lf\n", result);
            break;

        case 7:
            printf("Enter number: ");
            scanf("%lf", &num1);

            if(num1 <= 0)
                printf("Logarithm of zero or negative not allowed\n");
            else
            {
                result = log10(num1);
                printf("Result = %.2lf\n", result);
            }
            break;

        case 8:
            printf("Enter number: ");
            scanf("%lf", &num1);

            result = fabs(num1);
            printf("Result = %.2lf\n", result);
            break;

        case 9:
            printf("Enter angle in radians: ");
            scanf("%lf", &num1);

            result = sin(num1);
            printf("Result = %.2lf\n", result);
            break;

        case 10:
            printf("Enter angle in radians: ");
            scanf("%lf", &num1);

            result = cos(num1);
            printf("Result = %.2lf\n", result);
            break;

        case 11:
            printf("Enter angle in radians: ");
            scanf("%lf", &num1);

            result = tan(num1);
            printf("Result = %.2lf\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
