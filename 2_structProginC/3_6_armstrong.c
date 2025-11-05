//Armstrong numbers
#include <stdio.h>

int main(void){
    int num = 100;
    int digitSum = 0;
    int digit;
    int tempNum;

    while (num < 1000){
        tempNum = num;
        while (tempNum > 0){
            digit = tempNum % 10;
            tempNum = tempNum / 10;
            digitSum += digit * digit * digit;
        }
        if (digitSum == num){
            printf("%d \n", num);
        }
        digitSum = 0;
        num++;
    }
}
