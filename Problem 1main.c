#include <stdio.h>

int main() {
    int Num1, Num2, Num3;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &Num1, &Num2, &Num3);

    if (Num1 >= Num2) {
        if (Num1 >= Num3) {
            printf("The greatest number is: %d\n", Num1);
        } else {
            printf("The greatest number is: %d\n", Num3);
        }
    } else {
        if (Num2 >= Num3) {
            printf("The greatest number is: %d\n", Num2);
        } else {
            printf("The greatest number is: %d\n", Num3);
        }
    }

    return 0;
}