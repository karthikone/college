#include <stdio.h>
#include <stdlib.h>
//#include <conio.h> there is no conio.h file in clang compiler so don't use conio.h. you can use in any other compiler


int main()
{
    float s,b;
    //clrscr();
    printf("This program is written to find the PERIMETER of SQUARE.\nEnter the side(in cm) value: "); //formula 4*s
    scanf("%f",&s);
    b=4*s; // variable"b" stores the value of 4*s
    printf("The PERIMETER of SQUARE with %f c.m is: %f.",s,b);
    //getch();
    return 0;
}

