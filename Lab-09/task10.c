#include <stdio.h>

// simple functions
int basicAttack(int d, int h)
{
    return h - d;
}

int powerStrike(int d, int h)
{
    return h - (int)(d * 2.5);
}

int healPlayer(int d, int h)
{
    return h + 20;
}

int poisonAttack(int d, int h)
{
    printf("Poison effect!\n");
    return h - (d / 2);
}

int main()
{
    int hp = 100;
    int dmg = 25;

    int choice;
    int turn;

    int (*funPtr)(int, int);   // pointer

    for(turn = 1; turn <= 3; turn++)
    {
        printf("\nTurn %d\n", turn);
        printf("1 Basic  2 Power  3 Heal  4 Poison\n");
        printf("Enter: ");
        scanf("%d", &choice);

        // assigning function (simple way)
        if(choice == 1)
        {
            funPtr = basicAttack;
        }
        else if(choice == 2)
        {
            funPtr = powerStrike;
        }
        else if(choice == 3)
        {
            funPtr = healPlayer;
        }
        else
        {
            funPtr = poisonAttack;
        }

        // calling function using pointer
        hp = funPtr(dmg, hp);

        printf("HP = %d\n", hp);
    }

    return 0;
}