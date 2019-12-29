#include <stdio.h>
#include <stdlib.h>
//#include <conio.h> there is no conio.h file in clang compiler so don't use conio.h. you can use in any other compiler.


int main()
{
    float a,c;
    //clrscr();
    printf("This program is written to Find THE VOLUME OF CUDE\nEnter the VOLUME of RADIUS.(in c.m)\n");
    scanf("%f",&a);
    c=a*a*a;

    printf("THE VOLUME OF CUDE IS: %f ",c);
    //getch();
    return 0;
}

