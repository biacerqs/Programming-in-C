#include <stdio.h>

//lab62b

int main() {
    int num_months, month;
    double rabbits, foxes;
    double b = 0.2, d = 0.3, e = 0.1, e_prime = 0.1;

    printf("Enter the number of months for the simulation: ");
    scanf("%d", &num_months);

    printf("Enter the initial population of rabbits: ");
    scanf("%lf", &rabbits);

    printf("Enter the initial population of foxes: ");
    scanf("%lf", &foxes);

    for (month = 0; month < num_months; month++) {
        double new_rabbits = rabbits + (b * rabbits) - (e * rabbits * foxes);
        double new_foxes = foxes - (d * foxes) + (e_prime * rabbits * foxes);

        if (new_rabbits <= 0 || new_foxes <= 0) {
            if (new_rabbits <= 0 && new_foxes <= 0) {
                printf("Both species have gone extinct.\n");
            } else if (new_rabbits <= 0) {
                printf("Rabbit population has gone extinct.\n");
            } else {
                printf("Fox population has gone extinct.\n");
            }
            break;
        }

        rabbits = new_rabbits;
        foxes = new_foxes;

        printf("Month %d: Rabbits = %.2lf, Foxes = %.2lf\n", month, rabbits, foxes);
    }

    return 0;
}

