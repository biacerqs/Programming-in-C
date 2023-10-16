/******************************************************************************

Author: Beatriz Souza de Cerqueira

An integer n is divisible by 9 if the sum of its digits is divisible by 9.
Develop a function to display each digit, starting with the rightmost digit.
Your program should also determine whether the number is divisible by
9. Write a function that calculates the sum of the digits in an int, checks to
see if the sum is evenly divisible by 9 and returns 1 for yes and 0 for no.
Test it on the following numbers:
n = 154368
n = 621594
n = 123456
Hint: Use the % and 10 operator to get the least significant digit and use /
and 10 to remove the least significant digit. Sample output:
Run 1:
IS IT DIVISIBLE BY 9
Enter an integer: 154368
154368 is divisible by 9
Run 2:
IS IT DIVISIBLE BY 9
Enter an integer: 123456
123456 is NOT divisible by 9

*******************************************************************************/
#include <stdio.h>

// Function to calculate the sum of digits and check divisibility by 9
int isDivisibleBy9(int n) {
    int sum = 0;
    int original = n;
    
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    
    if (sum % 9 == 0) {
        printf("%d is divisible by 9\n", original);
        return 1;
    } else {
        printf("%d is NOT divisible by 9\n", original);
        return 0;
    }
}

int main() {
    int n;
    
    do {
        printf("IS IT DIVISIBLE BY 9\nEnter an integer: ");
        scanf("%d", &n);
        
        if (n == -1) {
            break;  // Exit the loop if -1 is entered as the sentinel
        }
        
        if (n < 0) {
            printf("Please enter a non-negative integer or -1 to exit.\n");
        } else {
            isDivisibleBy9(n);
        }
    } while (1);
    
    return 0;
}

