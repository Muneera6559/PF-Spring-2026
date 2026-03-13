#include<stdio.h>
int main(){

int attendance_percentage;
printf("Enter your attendance percentage:");
scanf("%d",&attendance_percentage);
if (attendance_percentage >= 75)
  { 
  printf("Eligible for Exam");
  }     else 
         {
  
    printf("Not eligible for Exam");
         }
return 0;
}
