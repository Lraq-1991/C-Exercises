// Get max and min, alternative take

#include<stdio.h>

void main(){
    int first = 0;
    int min, max, value;

    while (scanf("%d", &value) != EOF)
    {
        if (first || value > max)
        {
            max = value;
        }

        if (first || value < min)
        {
            min = value;
        }
        
        first = 0;        
    }

    printf("Max value is %d\n", max);
    printf("Min value is %d\n", min);    
}