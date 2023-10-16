#include <stdio.h>

/* Lab 2; program by Beatriz Souza de Cerqueira

Write code to convert a temperature in degrees Fahrenheit to degrees
Celsius. The formula is C = (5/9)*(F - 32). Your program should get the
temperature Fahrenheit from the user and print the result as:

FAHRENHEIT TO CELSIUS CALCULATOR
Enter temperature Fahrenheit: <value>
<value> degrees Fahrenheit is <value> degrees Celsius */

int main()
{
    float value, celsius;

    printf("FAHRENHEIT TO CELSIUS CALCULATOR\n");
    printf("What is the Fahrenheit temperature: ");
    scanf("%f", &value);

    celsius= (5.0/9.0)*(value-32);

    printf("%f degrees Fahrenheit is %f degrees Celsius", value, celsius);

    return 0;
}

