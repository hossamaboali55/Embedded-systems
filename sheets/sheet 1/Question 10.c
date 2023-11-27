//Write a program that reads a positive integer and check if this number is a base of 2 like 1,2,4,8,16,32, 64...


#include <stdio.h>

int main() {
    signed int number;
    unsigned int index;
    unsigned char isBaseOfTwo = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error: the number should be a positive number.");
        return;
    }
    for (index = 1; index <= number && !isBaseOfTwo; index *= 2)
        if (index == number) isBaseOfTwo = 1;
    printf("%d %s base of 2.", number, (isBaseOfTwo) ? "is" : "is not");


    return 0;
}