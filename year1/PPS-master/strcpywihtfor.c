#include<stdio.h>
#define MAX 50
int main()
{
    char string1[MAX],string2[MAX];
    int i;
    printf("Enter String : ");
    gets(string1);
    for(i=0;string1[i]!='\0';i++) // here we are copying single char instead all at once.
    //when i =0 string1[0]=string[0]
    //when i= 1 string1[1]=string2[1] . . . .untill string1['\0']
    {
            string2[i]=string1[i];// after completeing for loop string1 stores the string range here we are assigning string2 range = string 1 range.
    }
    string2[i]='\0';
    printf("After Copieing String1 to Sting2\n");
    puts(string2);
}
