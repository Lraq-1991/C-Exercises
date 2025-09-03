/*
    Search for the pattern of letters ``ould'' in the set of lines

    while (there's another line)
        if (the line contains the pattern)
            print it
*/
#include<stdio.h>

#define MAXLINE 1000
#define MAXTEXT 100000

void get_text(char arg[]);
void match_line(char text[], char line[], int lim); 
int get_match(char line[], int index);
char pattern[MAXLINE];


void main(){
    char text[MAXTEXT];
    char line[MAXLINE];

    printf("Search for:\n"); // Ask for char string to match 

    fgets(pattern, MAXLINE, stdin); // save it

    printf("\nEnter paragraph to search:\n"); // Ask for text

    get_text(text); // Store text

    match_line(text, line, MAXTEXT); // Print line for matches   

}

void get_text(char arg[]){

    int position = 0;
    char value;
    
    while ((value = getchar()) != EOF)
    {
        arg[position] = value; // Assign char into char array for i position
        ++position;
    }

    arg[position] = '\0';  // Assign end of text 

}

void match_line(char text[], char line[], int lim){
    int position = 0;
    int index = 0;

    printf("\nOutput:\n");

    while ((line[index] = text[position])!= '\0')
    {
        if (line[index] != '\n')
        {
            ++position;
            ++index;
        }
        else
        {
            
            if(get_match(line, index)) printf("%s", line); // Call function => If match, print line

            while (index > 0) // Clean line
            {
                line[index] = 0;
                --index;
            }
            
            index= 0;
            ++position;
        }
    }
}

int get_match(char line[], int index){

    int lim = index;
    int length, pindex;

    for ( int position = 0; position < lim; ++position)  // Iterate line
    {
        if (line[position] == pattern[0])                // Find match with first position in pattern
        {
            pindex = 0;
            length = 0;

            while (pattern[pindex] != '\n')              // Iterate pattern 
            {
                if (pattern[pindex] == line[position + pindex]) ++length;   // Use auxiliar index in line subsection to save match length
                ++pindex;
            }

            if (length == pindex) return 1;                // If the length of the coincidences match with the length of the pattern, then return true
            
        }
    }
    
    return 0;                                              // Else return false
    
}