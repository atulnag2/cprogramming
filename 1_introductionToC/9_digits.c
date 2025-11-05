#include <stdio.h>

int main(void){
    int num;
    int a, b, c, d, e;

    printf("Enter a 5 digit number:");
    scanf("%d", &num);

    a = num / 10000;
    num = num % 10000;
    printf("%d   ", a);
    b = num / 1000;
    num = num % 1000;
    printf("%d   ", b);
    c = num / 100;
    num = num % 100;
    printf("%d   ", c);
    d = num / 10;
    num = num % 10;
    printf("%d   ", d);
    printf("%d", num);

}
