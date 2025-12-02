//Largest of 4 floating point numbers
#include <stdio.h>

float largestFloat(float a, float b, float c, float d);

int main(void){
    float a, b, c, d, largest;

    printf("Enter 4 floating point numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    largest = largestFloat(a, b, c, d);
    printf("The largest value is %f", largest);
}

float largestFloat(float a, float b, float c, float d){
    float largest = a;

    if (largest < b){
        largest = b;
    }
    if (largest < c){
        largest = c;
    }
    if (largest < d){
        largest = d;
    }

    return largest;
}
