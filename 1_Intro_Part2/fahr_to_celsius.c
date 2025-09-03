#include<stdio.h>

#define LOWER 0 /* lower limit of temperature scale*/
#define UPPER 300 /*Upper limit*/
#define STEP 20 /*step size*/

int main()
{
    int fahr, celsius;

    fahr = LOWER;
    while (fahr <= UPPER)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    
}
