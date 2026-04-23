#include <stdio.h>

int countWays(int n)
{
    if(n == 0)
        return 1;
    if(n == 1)
        return 1;
    return countWays(n-1) + countWays(n-2);
}

void printPaths(int n, char path[], int index)
{
    if(n == 0)
    {
        path[index-1] = '\0';
        printf("%s\n", path);
        return;
    }
    if(n >= 1)
    {
        path[index] = '1';
        path[index+1] = '+';
        printPaths(n-1, path, index+2);
    }
    if(n >= 2)
    {
        path[index] = '2';
        path[index+1] = '+';
        printPaths(n-2, path, index+2);
    }
}

int main()
{
    int n;
    char path[50];

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Total ways = %d\n", countWays(n));

    printf("Paths for N=%d:\n", n);
    printPaths(n, path, 0);

    return 0;
}