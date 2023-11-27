//write a program to take even numbers from user and print the sum of them after each entry if the user enters 2 odd number the program print "bye" and stopped.

#include <stdio.h>
void main() {
    signed int number;
    unsigned int sumOfEven = 0;
    unsigned char numberOFOdd = 0;
    do {
        printf("Enter an even number: ");
        scanf("%d", &number);
        if (number & 1) numberOFOdd++;
        else printf("The sum is %u\n", sumOfEven += number);
    } while (numberOFOdd < 2);
    printf("bye");


    return 0;
}