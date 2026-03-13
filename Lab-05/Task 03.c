#include <stdio.h>

int main()
{
    int vehicle, option;
    int hours;
    float total = 0;

    printf("Select Vehicle Type:\n1.Car\n2.Bike\n3.Bus\n");
    scanf("%d", &vehicle);

    printf("Enter number of hours: ");
    scanf("%d", &hours);

    switch (vehicle)
    {
        case 1:
            printf("1.Regular (50/hr)\n2.VIP (100/hr)\n");
            scanf("%d", &option);

            switch (option)
            {
                case 1:
                    total = hours * 50;
                    break;
                case 2:
                    total = hours * 100;
                    break;
                default:
                    printf("Invalid Option\n");
                    return 0;
            }
            break;

        case 2:
            printf("1.Regular (20/hr)\n2.Premium (40/hr)\n");
            scanf("%d", &option);

            switch (option)
            {
                case 1:
                    total = hours * 20;
                    break;
                case 2:
                    total = hours * 40;
                    break;
                default:
                    printf("Invalid Option\n");
                    return 0;
            }
            break;

        case 3:
            total = hours * 200;
            break;

        default:
            printf("Invalid Vehicle Type\n");
            return 0;
    }

    printf("Total Parking Fee = Rs. %.2f\n", total);

    return 0;
}
