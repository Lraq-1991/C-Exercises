#include<stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;

    while ((len = get_line(line, MAXLINE)) > 0)
    {        
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) printf("\nLongest: %s\n", longest);
    
    return 0;
    
}

// get character array length and value

int get_line(char char_array[], int lim){
    int position;
    char value;

    for(
        position = 0; 
        position < lim -1 && (value = getchar()) != EOF && value != '\n'; 
        ++position
    )
    {
        char_array[position] = value;
    }
    
    if (value == '\n')
    {
        char_array[position] = value;
        ++position;
    }
    
    char_array[position] = '\0';
    return position;
}

// Copy longest char array

void copy(char to[], char from[]){
    int position = 0;

    while ((to[position] = from[position]) != '\0')
    {
        ++position;
    }
    
}