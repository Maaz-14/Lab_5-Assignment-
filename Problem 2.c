#include<stdio.h>
int main(){
	int Number,digit,sum_digits;
	sum_digits=0;
	printf("Enter a number: ");
	scanf("%d",&Number);
	while (Number!=0){
		digit=Number%10;
		Number=Number/10;
		sum_digits=sum_digits+digit;
		
	}
	printf("The sum of digits is: %d",sum_digits,Number);
	return 0;
}

