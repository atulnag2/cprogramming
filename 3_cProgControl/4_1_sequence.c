#include <stdio.h>

int main(void){
    int n; // number of sequence
    int i; // control variable
    int num;
    int sum = 0;
    float average;

    printf("Enter the seqeunce number and the sequence of numbers:");
    scanf("%d",&n);

    i = n;

    while (i > 0){
        scanf("%d",&num);
        sum += num;
        i--;
    }

    average = sum / n;

    printf(" Sum: %d", sum);
    printf(" Average: %f", average);

}
