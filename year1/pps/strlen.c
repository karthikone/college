#include<stdio.h>
#include<string.h>

main()
{
    int a;
    char string1[20];
    printf("Enter the String : ");
    gets(string1);
    strlen(string1);
    printf("The length of The string is %d ",strlen(string1));

    //here a short cut for find a lenght of string.
    printf("hello%n\n",&a); //%n also count length of string before %n.
    printf("%d",a);
}
