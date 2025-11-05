#include <stdio.h>

int main(void){
    int num1, num2;

    printf("Enter 2 numbers:");
    scanf("%d %d",&num1, &num2);

    if (num1 % num2 == 0){
        printf("%d is a mulitple of %d", num1, num2);
    }
    if (num1 % num2 != 0){
        printf("%d is a not a mulitple of %d", num1, num2);
    }
}