#include <stdio.h>

int main() {
    int smallest = 0; 
    int largest = 0;  
    int sum_of_numbers = 0;
    int count = 0;
    int num;

    printf("Enter a list of positive integers (ENTER -1 TO EXIT:\n");
    scanf("%d", &num);
    
    if (num == -1) {
        printf("No positive integers entered.\n");
        return 0;
    }

    smallest = largest = sum_of_numbers = num;
    count = 1;

    while (1) {
        scanf("%d", &num);
        
        if (num == -1) {
            break;
        }
        
        if (num < smallest) {
            smallest = num;
        }
        if (num > largest) {
            largest = num;
        }
        sum_of_numbers += num;
        count++;
    }

    double average = (double)sum_of_numbers / count;

    printf("Number of integers entered: %d\n", count);
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    printf("Average of all numbers (excluding -1): %.2f\n", average);

    return 0;
}

