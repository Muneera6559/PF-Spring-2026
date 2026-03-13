#include <stdio.h>

int main()
{
    int category, item, quantity;
    float price = 0;

    printf("Select Category:\n1.Fast Food\n2.Desi Food\n");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("1.Burger (500)\n2.Pizza (1200)\n");
            scanf("%d", &item);

            if (item == 1)
                price = 500;
            else if (item == 2)
                price = 1200;
            else
            {
                printf("Invalid Item\n");
                return 0;
            }
            break;

        case 2:
            printf("1.Biryani (350)\n2.Karahi (1500)\n");
            scanf("%d", &item);

            if (item == 1)
                price = 350;
            else if (item == 2)
                price = 1500;
            else
            {
                printf("Invalid Item\n");
                return 0;
            }
            break;

        default:
            printf("Invalid Category\n");
            return 0;
    }

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Total Bill = Rs. %.2f\n", price * quantity);

    return 0;
}
