#include <stdio.h>

int main(void){
    float radius;
    float PI = 3.14159;

    printf("Enter the radius:");
    scanf("%f",&radius);

    printf("Diameter of the circle: %.2f \n", 2*radius);
    printf("Circumference of the circle: %.2f \n", 2 * PI * radius);
    printf("Area of the circle: %.2f \n", PI * radius * radius);
}
