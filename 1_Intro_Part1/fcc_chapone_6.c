// Get max and min from input

#include<stdio.h>
#include <stdbool.h>

void main(){
    int maxval = 0;
    int minval = 0;
    int ival;

    while (true)
    {
        printf("Enter new value:\n");
        scanf("%d", &ival);

        if (ival == 0)
        {
            break;
        }

        if (maxval == 0 || ival > maxval)
        {
            maxval = ival;
        }

        if (minval == 0 || ival < minval)
        {
            minval = ival;
        }        
    }
    
    printf("Max value: %d\n", maxval);
    printf("Min value: %d\n", minval);
}