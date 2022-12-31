#include <stdio.h>

unsigned int oddNum = 1, oddSum = 0;
unsigned int Num;

int main(){

    printf("Enter a number: ");
    scanf("%i", &Num);

    printf("The %i terms of odd numbers are: ", Num);

    for(unsigned int i=0; i<Num; i++){
        printf("%i, ", oddNum);
        oddSum += oddNum;
        oddNum += 2;
    }
    printf("\n");
    printf("the sumtion of %i terms of odd natural numbers is: %i ", Num, oddSum);
    
    return 0;
}