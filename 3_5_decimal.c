#include <stdio.h>

int main(void){
    int digit;
    int binaryNumber;
    int decimalNumber = 0;
    int counter = 10;
    int twoPower = 1;

    printf("Enter 5 digit binary number: ");
    scanf("%d", &binaryNumber);

    while (counter <= 10000) {
        digit = binaryNumber % counter;
        binaryNumber /= counter;
        decimalNumber += digit * 2 * twoPower;
        counter *= 10;
        twoPower *= 2;
    }

    printf("The decimal equivalent is %d", decimalNumber);

}
