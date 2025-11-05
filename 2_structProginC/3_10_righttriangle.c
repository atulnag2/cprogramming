#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Enter 3 sides of a right triangle (first is the hypotnuse):");
    scanf("%d %d %d", &a, &b, &c);

    if (a*a == (b*b + c*c)){
        printf("%d, %d and %d are sides of a right triangle.", a, b, c);
    } else {
        printf("%d, %d and %d are not sides of a right triangle.", a, b, c);
    }
}
