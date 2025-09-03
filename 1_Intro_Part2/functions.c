#include<stdio.h>

/* Declaring the function*/

int power(int base, int exp)
{
    int counter, accumulate;

    accumulate = 1;

    for ( counter = 0; counter < exp; counter++)
    {
        accumulate = base * accumulate;
    }

    return accumulate;
    
}

/* Test power function*/

void main()
{
    int i;

    for ( i = 0; i < 10; i++)
    {
        printf("%d, %d, %d\n", i, power(2,i), power(-3,i));
    }
    
}