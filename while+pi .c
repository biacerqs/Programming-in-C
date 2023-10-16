/******************************************************************************

Author: Beatriz Souza de Cerqueira

The value for PI can be determined by the series equation:
PI = 4(1/1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 ...)
Write a function using a loop to approximate the value of PI using the formula
given including terms up through 1/99, 1/999 and 1/9999. As the number of
iterations increase, the estimate gets closer to the value of PI. The function
should accept the number of iterations and return the estimate of PI.
Hint: To flip the sign from + to -, declare a variable and multiply it by -1
inside the loop. Sample output:
Run 1:
ESTIMATE PI
Enter number of iterations: 99
Estimated PI is 3.121595
Run 2:
ESTIMATE PI
Enter number of iterations: 9999
Estimated PI is 3.141393

*******************************************************************************/
#include <stdio.h>

// Function to estimate PI using the series equation
double estimatePi(int iterations) {
    double pi = 0.0;
    int sign = 1;  // To alternate between addition and subtraction
    int i = 1;
    
    while (i <= iterations) {
        double term = 1.0 / (2 * i - 1);
        pi += sign * term;
        sign *= -1;  // Flip the sign from + to -
        i++;
    }
    
    return 4 * pi;
}

int main() {
    int iterations;
    
    printf("ESTIMATE PI\nEnter number of iterations: ");
    scanf("%d", &iterations);
    
    if (iterations <= 0) {
        printf("Please enter a positive number of iterations.\n");
    } else {
        double estimatedPi = estimatePi(iterations);
        printf("Estimated PI is %.6lf\n", estimatedPi);
    }
    
    return 0;
}
