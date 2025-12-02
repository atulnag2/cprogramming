//Currency Conversion
#include <stdio.h>

float toYen(float usd);
float toEuro(float usd);

int main(void){
    int currency;

    printf("%5s %10s %7s \n","USD", "Yen", "Euro");
    for(currency = 10; currency <= 10000; currency *= 10){
        printf("%5d %10.2f %7.2f \n", currency, toYen(currency), toEuro(currency));
    }
}

float toYen(float usd){
    return usd * 118.87;
}

float toEuro(float usd){
    return usd * 0.92;
}
