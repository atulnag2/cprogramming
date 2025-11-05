#include <stdio.h>

int main(void) {
    int num1, num2;
    int sum, diff, prod, remainder, quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    remainder = num1 % num2;
    quotient = (float)num1 / num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Remainder: %d\n", remainder);
    printf("Quotient: %f\n", quotient);
    
}