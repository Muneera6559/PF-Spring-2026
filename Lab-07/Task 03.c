#include <stdio.h>

int main()
{
    int pass[10];
    int fail[10];
    int i=0;
    int p=0,f=0;
    int marks;
    float avgp=0,avgf=0;

    printf("Enter marks (-1 to stop):\n");

    while(i<10)
    {
        scanf("%d",&marks);

        if(marks==-1)
        break;

        if(marks>=5 && marks<=10)
        {
            pass[p]=marks;
            avgp=avgp+marks;
            p++;
        }
        else if(marks>=0 && marks<5)
        {
            fail[f]=marks;
            avgf=avgf+marks;
            f++;
        }

        i++;
    }

    printf("Pass marks:\n");
    for(i=0;i<p;i++)
    printf("%d ",pass[i]);

    printf("\nFail marks:\n");
    for(i=0;i<f;i++)
    printf("%d ",fail[i]);

    if(p>0)
    printf("\nAverage Pass = %.2f",avgp/p);

    if(f>0)
    printf("\nAverage Fail = %.2f",avgf/f);

    return 0;
}