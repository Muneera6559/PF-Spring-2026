#include<stdio.h>
float triageScore(int severity, int age, int vitals);
int main(){
	int s,a,v;
	float score;
	printf("Enter severity,age, vitals:");
	scanf("%d %d %d", &s, &a, &v);
	score=triageScore(s,a,v);
	printf("score: %.2f\n", score);
	if(score>7)
		printf("Immediate attention\n");
		else if(score>=4)
			printf("Moderate\n");
			
		else 
			printf("Can wait\n");
		
	 
	return 0;
	
}
float triageScore(int severity, int age, int vitals){
	return (severity*0.5)+(age*0.3)+(vitals*0.2);
}