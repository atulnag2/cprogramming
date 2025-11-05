#include <stdio.h>

int main(void){
    int celcius;
    float fahrenheit;


    printf("%7s%13s\n","Celcius","Fahrenheit");

    for(celcius = 30; celcius <= 50; ++celcius){
        fahrenheit = (9 * celcius) / 5 + 32;
        printf("%7d%13.2f\n",celcius, fahrenheit);
    }
}
