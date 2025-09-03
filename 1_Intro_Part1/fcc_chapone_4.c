// Read file

#include<stdio.h>

void main(){
    char line[1000];
    FILE *hand;
    hand = fopen("/home/luis/Downloads/user_behavior_dataset.csv", "r");
    
    while (fgets(line, 1000, hand) != NULL)
    {
        printf("%s", line);
    }
    
}