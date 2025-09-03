/*
    while (next operator or operand is not EOF indicator)
        if (number)
            push it
        else if (operator)
             pop operands
             do operation 
             push result
        else if (new line)
            pop and print top of stack
        else
            error    
*/

#include<stdio.h>

#define MAXINPUT 1000

int operand1, operand2, res;
char operator;

char operation();

int main(){

    char input[MAXINPUT];
    char value;
    int index = 0;
    char a[MAXINPUT], b[MAXINPUT];

    printf("Please introduce the operation and press 'Enter' key:\n");
    
    while ((value = getchar()) != '\n')
    {
        input[index] = value;

        index += 1;
    }

    operand1 = input[0] - '0';

    operand2 = input[2] - '0';

    operator = input[1]; 

    operation();
    
    printf("\nThe result is: \n%d \n", res);

    return 0;

}

char operation(){
    if (operator == '+')
    {
        res = operand1 + operand2;

    } else if (operator == '-')
    {
        res = operand1 - operand2;
        
    } else if (operator == '*')
    {
        res = operand1 * operand2;
        
    } else if (operator == '/')
    {
        res = operand1 / operand2;
        
    } else {
        return printf("Incorrect operator\n");
    }
}