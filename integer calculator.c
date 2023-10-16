/* Author: Beatriz Souza de Cerqueira

Quest 2. 

LAB3 CIS1057
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265 
#define e 2.718281827

double sqrt(double x);
double pow(double x, double y);

float my_function(double integer)
{
    double formula;
    
    formula = pow((integer/e),integer) * sqrt(PI*(2*integer+1/3));
    
    return formula;
}

int main()
{
    double integer, result;
    
    printf("Enter an integer: ");
    scanf("%lf", &integer);
    
    if (integer>0) {
        double result = my_function(integer);
        printf("%.lf! equals approximately: %.4lf\n", integer, result);
    }else if (integer == 0){
        printf("0! equals approximately: 1\n");
    }
    else{
        printf("ERROR\n");
    }
    
    return 0;
    
}
    



