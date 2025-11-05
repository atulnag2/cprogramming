#include <stdio.h>

int main(void) {
    float highestRainfall;
    float currentRainfall;

    printf("Enter the highest rainfall recorded (in mm): ");
    scanf("%f", &highestRainfall);

    printf("Enter the current rainfall (in mm): ");
    scanf("%f", &currentRainfall);

    if (currentRainfall > highestRainfall){
        printf("The current rainfall is higher than highest rainfall");
        highestRainfall = currentRainfall;
    } 
}