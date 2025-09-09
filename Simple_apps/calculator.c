#include <stdio.h>

int main() {

        int a,b; // Operands

        char operator;

        int i = 1;

        float resp = 1.0;

        printf("Welcome to this DIY calculator, remember that the valid operators are: +,-,*,/,e(exponent)\n");

        printf("Insert fist number:\n"); // Ask for first operand

        scanf("%d", &a); // Insert value into variable

        // below you will repeat same procedure to get b and operand

        printf("Insert operator:\n");

        scanf(" %c", &operator);

        printf("Insert second number:\n");

        scanf("%d", &b);

        if (operator == '+' ) {
                resp = a + b;
        }
        else if (operator == '-' ) {
                resp = a - b;
        }
        else if (operator == '*' ) {
                resp = a * b;
        }
        else if (operator == '/' ) {
                resp = a / b;
        }
        else if ( operator == 'e' && b > 0 ) {

                while ( i <= b ) { // emulating power operation, when exponent in positive
                        resp = resp * a;
                        i++;
                }

                i = 1;

        }
        else if ( operator == 'e'  &&  b == 0 ) {
                resp = 1;
        }
        else if ( operator == 'e' && b < 0 ) {
                printf("negative exponent provided, exceeding this app range");

                return 0;
        }
        else {
                printf("'%c' is not a valid operator, try again\n", operator); // case no valid operator is passed
                return 0;
        }

        printf("Result: %.2f\n", resp); // output the result

        return 0;

}