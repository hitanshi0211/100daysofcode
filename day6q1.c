Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main() {
    int num;

    // Input an integer from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check whether the number is even or odd using if-else
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}