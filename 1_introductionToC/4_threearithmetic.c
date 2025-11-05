#include <stdio.h>

int main(void){
    int num1, num2, num3;
    int sum, product, smallest, largest;
    float average;

    printf("Enter 3 numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    product = num1 * num2 * num3;
    average = sum / 3;

    smallest = num1;
    largest = num1;

    if (num2 < smallest) {
        smallest = num2;
    }
    if (num2 > largest) {
        largest = num2;
    }

    if (num3 < smallest) {
        smallest = num3;
    }
    if (num3 > largest) {
        largest = num3;
    }

    printf("Sum is %d\n", sum);
    printf("Product is %d\n", product);
    printf("Average is %f\n", average);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

}
