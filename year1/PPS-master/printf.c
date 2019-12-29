#include<stdio.h>
void main()
{
    int a=10,b=2,c;float d=2;
    /*printf is use to DISPLAY/PRINT on screen */
    //syntax of printf is: printf("[text]",[variable]);

//printing plane text
    printf("Hello world\n");//output: Hello world. \n makes print other statements in NEXT LINE

//printing variable.
    printf("%d\n\t",a);//%d is integer data type and a is refers/adress.this line print the value of a: 10. \t leaves the Tab of space.

//printing text and variable.
    c=a+b;//operation
    printf("The Sum of %d and %d is %d\n",a,b,c);//output: The Sum of 10 and 2 is 12 .
    printf("The Sum of %d and %d is %d\n",a,b,a+b);// since c=a+b.output: The Sum of 10 and 2 is 12 .

//printing float
    printf("%f\n",d); // %f is float integer d is adress. out put:2.000000.
//printing float with disired decimal point.
    printf("%.2f",d); // ".2" between % and f removes 4 zeros after decimal point Out put: 2.00 .

// for better understandment see output of this file.
}

