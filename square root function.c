#include <stdio.h>
#include <math.h>

//lab quest2a

int main() {
    char choice;

    do {
        double a, b, c;
        double discriminant, realPart, imaginaryPart;
        double x1, x2;

        printf("Enter the coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
        scanf("%lf %lf %lf", &a, &b, &c);

        discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two real solutions: x1 = %lf and x2 = %lf\n", x1, x2);
        } else if (discriminant == 0) {
            x1 = x2 = -b / (2 * a);
            printf("One real solution: x = %lf\n", x1);
        } else {
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Complex solutions: x1 = %lf + %lfi and x2 = %lf - %lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        }

        printf("Do you want to solve another equation? type y (for yes) or no: ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}


