//Area of a triangle
#include <stdio.h>
#include <math.h>

double areaOfTriangle(double a, double b, double c);

int main(void){
    double a, b, c;
    double area;

    printf("Enter 3 sides of a triangle:");
    scanf("%lf %lf %lf", &a, &b, &c);

    area = areaOfTriangle(a, b, c);
    printf("Area of the traingle with sides %.2f, %.2f, %.2f is %.2f",
           a, b, c, area);
}

double areaOfTriangle(double a, double b, double c){
    double area;
    double s;
    if((a + b) > c && (a + c) > b && (b + c) > a ){
        printf("This is a valid traingle.\n");
        s = (a + b + c)/2;
        area = pow(s * (s - a) * (s - b )* (s - c)),0.5);
    } else {
        printf("This is an invalid traingle.\n");
        area = 0.0;
    }

    return area;
}
