#include <stdio.h>

int main() {
    int age, citizenship;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your citizenship status (1 for Vaild citizen, 0 for Unvalid citizen): ");
    scanf("%d", &citizenship);

    if (age >= 18 && citizenship == 1) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
