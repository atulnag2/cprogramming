#include <stdio.h>

int main(void){
    int number;
    int largest = -1;
    int counter = 1;

    while (counter <= 10){
        printf("Enter a number: ");
        scanf("%d",&number);

        if (number > largest){
            largest = number;
        }

        counter++;
    }
    printf("The largest number is %d \n", largest);
}
