#include<stdio.h>

void main(){
    int usf,euf ;

    printf("Enter US floor:\n");
    scanf("%d", &usf);  //Works as input and saves the value in the second parameter 
    euf = usf - 1;
    printf("EU floor: %d\n", euf);
}