//Pythagorean Triplets till 500
#include <stdio.h>
#include <math.h>

int main(void){
    int side1, side2, hypotanuse;

    for(side1=1; side1 <= 500; side1++){
        for(side2=side1+1; side2 <= 500; side2++){
            for(hypotanuse=side2 + 1; hypotanuse <= 500; hypotanuse++){
                if(pow(hypotanuse, 2) == pow(side1, 2)+ pow(side2, 2)){
                    printf("( %d, %d, %d) ", side1, side2, hypotanuse);
                }
            }
        }
    }
}
