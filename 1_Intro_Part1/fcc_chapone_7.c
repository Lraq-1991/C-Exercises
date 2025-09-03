// Guess the number

#include<stdio.h>

void main(){
    int value;

    while (scanf("%d", &value) != EOF)
    {
        if (value == 42)
        {
            printf("You win!\n");
            break;
        }
        else if (value > 42) printf("Too high, guess again\n");
        else printf("Too low, guess again\n");        
    }
}