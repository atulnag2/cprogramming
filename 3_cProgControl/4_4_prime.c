// prime numbers from 1 to 100
#include <stdio.h>

int main(void){
    int num;
    int factor;
    int numFactors;


    for(num = 1; num <= 100; ++num){
        numFactors = 0;
        for(factor=1; factor <= num; ++factor){
            if(num % factor == 0){
                numFactors++;
            }
        }
        if(numFactors > 2){
                continue;
        }
        printf("%d ", num);
    }
}
