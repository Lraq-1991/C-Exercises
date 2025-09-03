/*
    Exercise 1-19. Write a function reverse(s) that reverses the character string s. 
    Use it to write a program that reverses its input a line at a time.
*/

#include<stdio.h>

#define MAXLINE 1000

int reverse(char string[MAXLINE], char reverted[MAXLINE]);

void main(){

    char string[MAXLINE];
    char output[MAXLINE];
    int len;

    printf("Enter string: \n");
    fgets(string, MAXLINE, stdin);

    len = reverse(string, output);

    printf("Reversed: %s \n", output);

}

int reverse(char string[], char reverted[]){

    int position = 0;
    int index = 0;

    while (string[position] != '\n'){ //Getting length
        ++position;
    }

    while( position >= 0 ){
        reverted[index] = string[position]; //Inverting values
        ++index;
        --position;
    }

    return index;    
}
