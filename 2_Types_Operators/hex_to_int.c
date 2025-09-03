/*
    Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits
    (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
    through 9, a through f, and A through F.
*/

#include<stdio.h>

#define MAXLINE 1000

void main(){

    char hex_string[MAXLINE];
    int value;

    printf("Enter an hexadecimal value: \n");

    //fgets(hex_string, MAXLINE, stdin);

    value = getchar();

    printf("Your value is: %x\n", value);

}