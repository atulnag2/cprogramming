// Function for even or odd
#include <stdio.h>

int isEven(int num); // function prototype

int main(void){
    int number;
    int choice;
    do {
        printf("Enter a number:");
        scanf("%d", &number);

        if (isEven(number)){
            printf("%d is even \n", number);
        } else {
            printf("%d is odd \n", number);
        }
        printf("Do you want to continue? (1 = continue / -1 = to exit):");
        scanf("%d", &choice);
    }while(choice == 1);
}

int isEven(int num){
    if(num % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}
