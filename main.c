#include <stdio.h>
#include <math.h>

/* Lab 2; program by Beatriz Souza de Cerqueira

Write code that calculates mileage reimbursement for a salesperson at
a rate of $0.655 per mile. Your program should get the mileage from the user
in this manner:

MILEAGE REIMBURSEMENT CALCULATOR
Enter beginning odometer reading: <user response>
Enter ending odometer reading: <user response>
You traveled <value> miles. At $0.655 per mile, your reimbursement $<value>.

NOTE: an input of -20 or any negative number of miles is nonsense and should be rejected; we will
return to this problem once we have covered the C statement(s) that allow us to make that check.
*/

int main(void)
{
    float value;

    printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
    printf("What is the mileage? ");
    scanf("%f", &value);
    
    if (value<0){
        printf("ERROR: this value cannot be processed");

        return 1;
    }
    
    float reimbursement = value * 0.655;
    
    if (reimbursement - floor(reimbursement) >= 0.5) {
        reimbursement = ceil(reimbursement);
    } else {
        reimbursement = floor(reimbursement);
    }

    printf("You traveled %.2f miles. At $0.655 per mile, your reimbursement is $%.0f\n", value, reimbursement);

    return 0;
}
