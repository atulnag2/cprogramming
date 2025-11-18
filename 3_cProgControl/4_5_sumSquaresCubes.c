#include <stdio.h>
#include <math.h>

int main(void){
    int num;
    int count;
    int sum = 0;
    int sumSquares = 0;
    int sumCubes = 0;

    printf("Enter a number:");
    scanf("%d", &num);

    for(count = 1; count <= num; ++count){
        sum += count;
        sumSquares += pow(count, 2);
        sumCubes += pow(count, 3);
    }
    printf("%4d %6d %8d", sum, sumSquares, sumCubes);
}
