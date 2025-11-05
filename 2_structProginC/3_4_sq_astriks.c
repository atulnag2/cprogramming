#include <stdio.h>

int main(void){
    int side;
    int rowcount = 0;
    int colcount;

    printf("Enter the side of the square:");
    scanf("%d", &side);

    while (rowcount < side) {
        colcount = 0;
        while (colcount < side){
            printf("*");
            colcount++;
        }
        printf("\n");
        rowcount++;
    }
}
