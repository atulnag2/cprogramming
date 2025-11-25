// Length of the hypotenuse of a right triangle
#include <stdio.h>
#include <math.h>

double hypotenuse(double b, double c);

int main(void){
    double a, b, c; // sides of a righ triangle

    printf("Enter 2 sides of a right triangle: ");
    scanf("%lf %lf", &b, &c);

    a = hypotenuse(b, c);
    printf("The hypotnuse for %f, %f is %f", b, c, a);
}

double hypotenuse(double b, double c){
    return sqrt(pow(b, 2) + pow(c, 2));
}

