#include<stdio.h>

// line input

/* void main(){
    char line[1000];

    printf("Enter line\n");
    scanf("%[^\n]1000s", line);
    printf("Line: %s\n", line);
}

*/

// line inout(safe)

void main(){
    char line[1000];

    printf("Enter line\n");
    fgets(line, 1000, stdin);
    printf("Line: %s\n", line);
}
