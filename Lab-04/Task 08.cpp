#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b, result;

    printf("---- Scientific Calculator ----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            scanf("%f %f", &a, &b);
            result = a + b;
            printf("Result = %.2f", result);
            break;

        case 2:
            scanf("%f %f", &a, &b);
            result = a - b;
            printf("Result = %.2f", result);
            break;

        case 3:
            scanf("%f %f", &a, &b);
            result = a * b;
            printf("Result = %.2f", result);
            break;

        case 4:
            scanf("%f %f", &a, &b);
            if (b == 0) {
                printf("Error: Division by zero not allowed");
            } else {
                result = a / b;
                printf("Result = %.2f", result);
            }
            break;

        case 5:
            scanf("%f", &a);
            result = a * a;
            printf("Result = %.2f", result);
            break;

        case 6:
            scanf("%f", &a);
            result = a * a * a;
            printf("Result = %.2f", result);
            break;

        case 7:
            scanf("%f", &a);
            if (a < 0) {
                printf("Error: Square root of negative number not allowed");
            } else {
                result = sqrt(a);
                printf("Result = %.2f", result);
            }
            break;

        case 8:
            scanf("%f %f", &a, &b);
            result = pow(a, b);
            printf("Result = %.2f", result);
            break;

        case 9:
            scanf("%f", &a);
            if (a < 0)
                result = -a;
            else
                result = a;
            printf("Result = %.2f", result);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

