//Total Sales per Day
#include <stdio.h>

int main(void){
    float totalSales = 0.0;
    float totalProductSales;
    int product, quantity;
    int count;

    for(count = 1; count <= 5; count++){
        printf("Enter the product sold and quantity:");
        scanf("%d %d", &product, &quantity);

        totalProductSales = 0.0;

        switch(product){
        case 1:
            totalProductSales = quantity * 298.5;
            break;
        case 2:
            totalProductSales = quantity * 450;
            break;
        case 3:
            totalProductSales = quantity * 998.5;
            break;
        case 4:
            totalProductSales = quantity * 449;
            break;
        case 5:
            totalProductSales = quantity * 687;
            break;
        default:
            puts("Enter correct product number.");
        }
        totalSales += totalProductSales;
    }

    printf("Total Sales = %.2f", totalSales);
}
