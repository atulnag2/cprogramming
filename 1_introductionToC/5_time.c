#include <stdio.h>

int main(void){
    int totalSeconds;
    int hours, minutes, seconds;

    printf("Enter total time elapsed in seconds:");
    scanf("%d",&totalSeconds);

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    minutes = totalSeconds / 60;
    totalSeconds = totalSeconds % 60;
    seconds = totalSeconds;

    printf("Time elapsed %d : %d : %d", hours, minutes, seconds);

}