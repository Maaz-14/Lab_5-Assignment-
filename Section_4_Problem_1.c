#include <stdio.h>

int main() {
    int Num_1,Num_2;

    printf("Enter the first number: ");
    scanf("%d", &Num_1);

    printf("Enter the second number: ");
    scanf("%d", &Num_2);

    printf("Before swapping:\n");
    printf("Number_1 = %d\n", Num_1);
    printf("Number_2 = %d\n", Num_2);

    Num_1 = Num_1 ^ Num_2;
    Num_2 = Num_1 ^ Num_2;
    Num_1 = Num_1 ^ Num_2;

    printf("After swapping:\n");
    printf("Number_1 = %d\n", Num_1);
    printf("Number_2 = %d\n", Num_2);

    return 0;
}
