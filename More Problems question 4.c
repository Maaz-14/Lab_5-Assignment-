#include<stdio.h>
int main(){
	int age,income,credit_score;
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your income: ");
	scanf("%d",&income);
	printf("Enter credit score: ");
	scanf("%d",&credit_score);	
	if ((age>=18&&income>=60000 && credit_score>=720)||(age>=17 && income>=100000 && credit_score>=500)){
		printf("You are eligible for loan\n");
	}
	else 
	printf("You are not eligible for loan\n");
return 0;	
}
	
	
	

