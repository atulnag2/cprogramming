#include <stdio.h>

int main(void){
    int choice = 1;
    float principal, rate, days, interest;

    while (choice >= 0){
        printf("Enter principal, rate and days:");
        scanf("%f %f %f", &principal, &rate, &days);

        printf("Principal: %.2f \n", principal);
        printf("Rate: %.2f \n", rate);
        printf("Days: %.2f \n", days/365);

        interest = principal * rate * days / 365;

        printf("Interest for loan is %.2f \n", interest);

        printf("To stop enter -1 else enter 1:");
        scanf("%d", &choice);
    }
}
