#include <stdio.h>

unsigned int GetSum(unsigned int N1, unsigned int N2);

int main()
{
    unsigned int ErrorState = 0;
    ErrorState = GetSum(2,3);
    ErrorState |= GetSum(2,5);
    ErrorState |= GetSum(1,3);
    ErrorState |= GetSum(6,3);
    ErrorState |= GetSum(1,2);
    printf("ErrorState= %i \n", ErrorState);

    return 0;
}

unsigned int GetSum(unsigned int N1, unsigned int N2)
{
    unsigned int ErrorState = 0;

    if ( (N1>5) || (N2>5) ) 
    {
        ErrorState = 1;
    }else{
        printf("Summing = %i \n", (N1+N2));
    }
    
    return ErrorState;
}