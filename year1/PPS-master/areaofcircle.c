#include <stdio.h>
#include <stdlib.h>
//#include <conio.h> there is no conio.h file in clang compiler so don't use conio.h. you can use in any other compiler.

int main()
{
    float r,c;
    //clrscr();
    printf("This program is written to Find AREA OF CIRCLE\nEnter the value of RADIUS.(in c.m)\n");
    scanf("%f",&r);
    c=3.14285714*r*r;

    printf("The area of Circle is: %f ",c);
    //getch();
    return 0;
}

