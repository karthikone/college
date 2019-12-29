#include <stdio.h>
#include <stdlib.h>
//#include <conio.h> there is no conio.h file in clang compiler so don't use conio.h. you can use in any other compiler.


int main()
{
    int a,b,c;
    //clrscr();
    printf("This program is written to SWAP 2 VALUES WITH THE HELP OF 3 VARIABLES\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The SWAPPED values are: %d and %d.",a,b);
    //getch();
    return 0;
}

