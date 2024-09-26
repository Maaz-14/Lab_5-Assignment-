#include<stdio.h>
int main(){
	int N1,N2,N3;
	printf("Enter Number1: ");
	scanf("%d",&N1);
	printf("Enter Number2: ");
	scanf("%d",&N2);
	printf("Enter Number3: ");
	scanf("%d",&N3);
	if (N1>N2){
		if (N1>N3)
		printf("Greatest Number is: %d ",N1);
		else{
			printf("Greatest Number is: %d",N3);
		// means that N1<N3 and Since N1>N2 so it shows that Being larger that N1 indicates that N3 is GREATEST!! Hence greatest number is N3.
		}
	}

	
	else if(N2>N3){
	// No need to check N2>N1 since if statement is FALSE indicates that N2>N1
		
		printf("Greatest Number is: %d",N2);
	}
	else{
		printf("Greatest Number is: %d",N3);
		
	}
	
	return 0;
}
