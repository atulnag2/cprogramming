#include <stdio.h>

int main(void) {
    float u, a, t;
    float v, s;

    printf("Enter values for u a and t: ");
    scanf("%f %f %f", &u, &a, &t);

    v = u + a * t;
    s = u*t + 0.5 * a * t * t;

    printf("Final Velocity : %f\n", v);
    printf("Distance Covered: %f", s);
}