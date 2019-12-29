#include<stdio.h>
#include<string.h>
#define MAX 50
main()
{
    char string1[MAX],string2[MAX],string3[MAX];
    printf("Enter string1 : ");
    gets(string1);
    printf("Enter string2 :  ");
    gets(string2);
    //syntax strcat(destination,source)
    /*let's assume string1 = hello strig2= world
    now hello stored in string3 and world also stored in stirng3
    so expected output is helloworld*/

    strcat(string3,string1);
    strcat(string3,string2);
    printf("\n String1 '%s' and string2 '%s' after Concatenates : %s",string1,string2,string3);
}
