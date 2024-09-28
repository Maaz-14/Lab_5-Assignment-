#include<stdio.h>
int main(){
	int Number;
	printf("Enter a Number: ");
	scanf("%d",&Number);
	if (Number<0){
		printf("Negative Number ");
	}
	else if (Number==0){
		printf("Number is Zero");
	}
	else if (Number>0){
		if (Number%2==0){
			printf("Number is Postive and EVEN");
		}
		else{
			printf("Number is Positive and ODD");
		}
		
	}
	
	return 0;
}
