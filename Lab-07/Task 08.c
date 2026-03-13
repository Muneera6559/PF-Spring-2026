#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter characters:\n");

    scanf("%[^A-Za-z]",str);

    printf("Non alphabet characters:\n%s",str);

    return 0;
}