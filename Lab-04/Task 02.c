#include<stdio.h>
int main(){

int units;
printf("Total units consumed:");
scanf("%d",&units);
if (units <= 100)
    { 
    printf("Low usage");
    }   
    else if (units >= 101 && units <= 300)
    {
    printf("Medium usage");
    }
    else if (units > 300)
    {
        printf("High usage");
    }
    
    return 0;
}
