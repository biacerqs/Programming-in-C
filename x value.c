/******************************************************************************

Author: Beatriz Souza de Cerqueira

What value is assigned to the type double variable x by the statement given below? x = 30.0__.
x = 25.0 * 3.0 / 2.5 ;

*******************************************************************************/
#include <stdio.h>

int main()
{
    double x;
    
    x = 25.0*3.0/2.5;
    
    printf("The value of x is: %lf\n", x); //The value assigned to x is 30.00.
    
    return 0;
    
}

