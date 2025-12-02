//Seperate digits
#include <stdio.h>

void printDigits(int num);

int main(void){
    int number;

    printf("Enter a number:");
    scanf("%d", &number);

    printDigits(number);
}

void printDigits(int num){
    int quot;
    int rem;
    int divisor;

    for(divisor = 10000; divisor > 0; divisor /= 10){
        if (num < divisor){
            continue;
        }
        quot = num / divisor;
        rem = num % divisor;
        num = rem;
        printf("%2d", quot);
    }
}
