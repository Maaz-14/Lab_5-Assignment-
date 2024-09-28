#include <stdio.h>

int main() {
    int num,Status;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    Status = (num > 0) ? "positive" : (num < 0) ? "negative" : "zero";

    printf("The number %d is %s.\n", num, Status);

    return 0;
}
