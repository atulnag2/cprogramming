#include <stdio.h>

int main(void){
    int num1, num2, num3;
    int largest, smallest;

    printf("Enter 3 numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = num1;
    smallest = num1;

    if (num2 > largest) {
        largest = num2;
    }
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    printf("Largest: %d\nSmallest: %d", largest, smallest);
    
}