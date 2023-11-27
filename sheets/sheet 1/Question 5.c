//Write a program that take two numbers and calculate the reminder without using % operation.


#include <stdio.h>
#include <stdlib.h>

void main() {
    signed int firstNumber, secondNumber;
    unsigned char isNegative;
    printf("Enter two integers: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    if (!secondNumber) {
        printf("Error: you cannot divide by zero.");
        return;
    }
    printf("%d %% %d = ", firstNumber, secondNumber);
    isNegative = firstNumber < 0;
    firstNumber = abs(firstNumber);
    secondNumber = abs(secondNumber);
    while (firstNumber >= secondNumber) firstNumber -= secondNumber;
    printf("%d", (isNegative) ? -firstNumber : firstNumber);
}

int abs(int number) {
    return (number < 0) ? number * -1 : number;
}




