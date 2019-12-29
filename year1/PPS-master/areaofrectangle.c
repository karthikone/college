#include <stdio.h>
#include <stdlib.h>
//#include <conio.h> there is no conio.h file in clang compiler so don't use conio.h. you can use in any other compiler.


int main()
{
    float b,h,c;
    //clrscr();
    printf("This program is written to Find AREA OF TRIANGLE\nEnter the value of BASE  and HEIGHT(in c.m)\n");
    scanf("%f%f",&b,&h);
    c=0.5*b*h;
    
    printf("The area of Triangle is: %f ",c);
    //getch(); 
    return 0;
}

