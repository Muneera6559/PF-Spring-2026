#include <stdio.h>

int main()
{
    int a[10];
    int i;
    int max,min;

    printf("Enter 10 numbers:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    max = a[0];
    min = a[0];

    for(i=1;i<10;i++)
    {
        if(a[i]>max)
        max = a[i];

        if(a[i]<min)
        min = a[i];
    }

    printf("Difference = %d",max-min);

    return 0;
}