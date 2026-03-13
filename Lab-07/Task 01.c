#include <stdio.h>

int main()
{
    int a[5];
    int i;
    int last;

    printf("Enter 5 numbers:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    last = a[4];

    for(i=4;i>0;i--)
    {
        a[i] = a[i-1];
    }

    a[0] = last;

    printf("Array after shifting:\n");

    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}