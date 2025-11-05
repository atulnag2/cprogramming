#include <stdio.h>

int main(void){
    int number;
    int factor = 1;
    int num_factors = 0;

    printf("Enter a number to check for primality:");
    scanf("%d", &number);

    while (factor <= number) {
        if (number % factor == 0){
            num_factors++;
        }
        factor++;
    }

    if (num_factors > 2){
        printf("%d is a composite number.", number);
    } else {
        printf("%d is a prime number", number);
    }
}
