#include <stdio.h>

int main(void){
    int num;
    unsigned int factorial;
    int count;

    for(num = 1; num <= 20; ++num){
        factorial=1;
        for(count = 1; count <= num; ++count){
            factorial *= count;
        }
        printf("%3d! = %20u \n", num, factorial);
    }
}
