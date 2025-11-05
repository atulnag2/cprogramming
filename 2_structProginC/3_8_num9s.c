#include <stdio.h>

int main(void){
    int num;
    int digit;
    int num9s = 0;

    printf("Enter a number (5 digits or less):");
    scanf("%d", &num);

    while (num > 0){
        digit = num % 10;
        num = num / 10;
        if (digit == 9){
            num9s++;
        }
    }
    printf("Number of 9s: %d", num9s);
}
