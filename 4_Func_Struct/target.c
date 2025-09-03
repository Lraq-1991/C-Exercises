#include<stdio.h>
#include "global_var.c"

extern char greeting;

void main(){
    printf("%c", greeting);
}