#include <stdio.h>

int main(void){
    int digit;
    int binaryNumber;
    int decimalNumber = 0;
    int counter = 10;
    int twoPower = 1;

    printf("Enter binary number: ");
    scanf("%d", &binaryNumber);

    while (binaryNumber > 0) {
        digit = binaryNumber % counter;
        binaryNumber /= counter;
        printf("%d, %d \n", digit, binaryNumber);
        decimalNumber += digit * twoPower;
        twoPower *= 2;
    }

    printf("The decimal equivalent is %d", decimalNumber);

}
