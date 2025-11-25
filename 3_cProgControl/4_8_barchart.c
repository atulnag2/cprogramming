// Bar Chart Program
#include <stdio.h>

int main(void){
    int num;
    int count, star;

    for(count=1;count <= 5; count++){
        printf("Enter a number between 1 - 30:");
        scanf("%d", &num);

        for(star = 1;star <= num; star++){
            printf("%s","*");
        }
        printf("\n");
    }
}
