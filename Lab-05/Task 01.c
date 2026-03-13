#include<stdio.h>
int main(){
    int income;
    int cgpa;
    printf("Enter your CGPA:");
    scanf("%d",&cgpa);
    if (cgpa>=3.5){
        if (income<50000){
            printf("100%% Scholorship");
        } else printf("50%% Percent Scholarship");
    } else {
        if(cgpa>=3.0 && income<40000){
            printf("50%% Scholarship");
        } else printf("No Scholarship");
    }
    
    return 0;
    
}
