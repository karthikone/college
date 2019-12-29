#include <stdio.h>
#include <stdlib.h>
//#include <conio.h> there is no conio.h file in clang compiler so don't use conio.h. you can use in any other compiler


int main()
{
    float s,b;
    //clrscr();
    printf("This program is written to find the AREA of SQUARE.\nEnter the side(in cm) value: "); //formula s^2 (^2 = square!)
    scanf("%f",&a);
    b=s*s; // variable"b" stores s*s
    printf("The AREA of SQUARE with %f cm is %f ",s,b);
    //getch();
    return 0;
}

