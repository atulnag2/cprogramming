#include <stdio.h>
#include <math.h>

int main(void){
    double principal = 1000.0;
    float rate;
    unsigned int year;
    double amount;

    printf("%4s %5s %21s \n", "Year","Rate", "Amount on deposit");

    for(rate=5; rate <= 10; ++rate){
        for(year = 1; year <= 10; ++year){
                amount = principal * pow(1 + rate/100, year);
                printf("%4u%5.1f%21.2f\n", year, rate , amount);
        }
        printf("\n");
    }
}
