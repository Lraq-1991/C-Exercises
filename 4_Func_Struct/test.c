/*
    Search for pattern of letters "ould" in the set of lines

    logic:

    while (there's another line)
        if(line contains the pattern)
            print it
*/

#include<stdio.h>

#define MAXLINE 1000
#define MAXTEXT 10000

char pattern[MAXLINE];

void process_search();
void find_match(char input[MAXTEXT]);

void main(){ 

    printf("Enter pattern:\n"); // Request pattern as input

    fgets(pattern, MAXLINE, stdin); // Store pattern

    process_search();

}

void process_search(){ // Req and process text to find pattern

    char textbox[MAXTEXT];
    char value;
    int position = 1;

    printf("Insert paragraph:\n"); // Request paragraph as input

    fgets(textbox, MAXTEXT, stdin); // Store paragraph

    while ( (value = getchar()) != EOF) // Loop will last until process is manually terminated
    {
        textbox[position] = value; // Adding new char to char array
        position += 1; 
    }

    find_match(textbox); // Pass paragraph to child function to be processed

}

void find_match( // Finds pattern in text and prints the result
    char input[]
){
    

    printf("\n%s\n", input);

    printf("End.\n");
}