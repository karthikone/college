#include<stdio.h>
#define MAX 50
main()
{
    char string1[MAX];
    int i;
    printf("Enter a String : ");
    gets(string1);
    for (i=0; string1[i]!='\0';i++); // ';' after for loop prints last conditional value.
        printf("The lenght of the string is %d",i);
}
