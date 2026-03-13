#include <stdio.h>

int main()
{
    int a[10];
    int i;
    int num;
    int count=0;

    printf("Enter 10 numbers:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d",&num);

    for(i=0;i<10;i++)
    {
        if(a[i]==num)
        {
            count++;
        }
    }

    if(count==0)
    printf("Number not found");
    else
    printf("Number occurred %d times",count);

    return 0;
}