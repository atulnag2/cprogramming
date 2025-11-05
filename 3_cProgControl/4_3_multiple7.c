#include <stdio.h>

int main(void){
    int i; // control variable
    int sum = 0;

    for(i = 1; i <= 100; i++){
        if (i % 7 == 0){
            sum += i;
        }
    }
    printf("The sum of multiples of 7 from 1 to 100 is %d", sum);
}
