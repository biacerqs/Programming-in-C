/*
Author: Beatriz Souza de Cerqueira

*/
#include <stdio.h>
#include <math.h>

float powf(float x, float y);
float my_function()
{
    float principal,car_cost,down_payment,monthly_rate,annual_rate,payment,denomenator,result;
    
    principal==car_cost-down_payment;
    monthly_rate==annual_rate/12;
    denomenator= powf((1+monthly_rate),(-payment));
    result == (principal*monthly_rate)/ (denomenator-1);
    
    return result;
    
}


float car_cost,down_payment,annual_rate, payment;

int main()
{
    printf("CALCULATE LOAN PAYMENT\n");
    printf("Enter cost of car: $");
    scanf("%f",&car_cost);
    printf("Enter down payment: $");
    scanf("%f", &down_payment);
    printf("Enter annual interest rate: $");
    scanf("%f", &annual_rate);
    printf("Enter number of payments: ");
    scanf("%f", &payment);
    
    float monthly_payment, result;
    monthly_payment=my_function();
    
    printf("sum= %f", monthly_payment);
    
    ///return(0);
  
}








