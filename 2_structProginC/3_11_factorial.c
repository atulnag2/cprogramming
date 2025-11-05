#include <stdio.h>

int main(void){
    int number;
    int factorial = 1;
    int i;

    printf("Enter the number:");
    scanf("%d", &number);

    i = number;

    while( i > 0){
        factorial *= i;
        i--;
    }

    printf("%d ! = %d", number, factorial);
}
