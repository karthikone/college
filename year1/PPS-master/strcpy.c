#include<stdio.h>
#include<string.h>
#define MAX 50
main()
{
    char string1[MAX], string2[MAX];
    printf("This Program is about string copy(strcpy)\nEnter String : ");
    gets(string1); //Entred string will be strored in string1
    strcpy(string2,string1); //entered string will be copy to string2 from string 1.
    puts(string2);//printing string2
}
