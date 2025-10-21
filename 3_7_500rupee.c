// 500 rupee symbols
#include <stdio.h>

int main(void){
    int numSymbols = 1;

    while (numSymbols <= 500){
        printf("₹ ");
        if (numSymbols % 50 == 0){
            printf("\n");
        }
        numSymbols++;
    }
}
