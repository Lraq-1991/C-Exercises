// In this section I'm emulating a loop, using an if statement
// to confirm they are the same in practice.

#include<stdio.h>

int i = 0;

void main()
{
    if(i < 20)
    {
        printf("%d\n", i);
        ++i;
        main();
    }  
}
