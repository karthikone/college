#include<stdio.h>
int main()
{
    int i;
    char string[6][10]={"apple","microsoft","spacex","facebook","bitcoin"};//here [6] is rows and [10] coloumns.
    for(i=0;i<5;i++)
        puts(string[i]) ;
}
