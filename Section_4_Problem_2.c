#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
    	
        if (num & 1) {
            count=count+1;
        }
        
        num = num >> 1;
        
    }

    printf("Number of 1s in the binary representation: %d\n", count);

    return 0;
}
