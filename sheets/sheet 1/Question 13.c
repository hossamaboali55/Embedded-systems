//You are designing a poster which prints out numbers with a unique style applied to each of them. The styling is based on the number of closed 
//paths or holes present in a giver number. The number of holes that each of the digits from 0 to 9 have are equal to the number of closed paths in the digit.

#include <stdio.h>
int  main() {
    signed int n, sum = 0;
    unsigned char digit;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: the number should be a positive number.");
        return;
    }
    while (n) {
        digit = n % 10;
        sum += (digit == 8) ? 2 : (digit == 0 || digit == 4 || digit == 6 || digit == 9) ? 1 : 0;
        n /= 10;
    }
    printf("Number of holes are %d.", sum);
    return 0;
}