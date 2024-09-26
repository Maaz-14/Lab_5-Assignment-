#include<stdio.h>
int main(){
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	// ?---> THEN do this
	//(number%2==0) is the if statement
	// : shows----> else do this
	(number%2==0)? printf("Even\n"): printf("Odd\n");
	return 0;
}	
