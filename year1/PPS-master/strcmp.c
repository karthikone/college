#include<stdio.h>
#include<string.h> //strcmp is in string.h header file to use strcmp or strcpy ,strlen,strcat,strchr,strstr string.h file is required.
#define MAX 50
main()
{
    char string1[MAX],string2[MAX];
    int i;
    printf("Enter a string 1 : ");
    gets(string1);
    printf("Enter a string 2 : ");
    gets(string2);
    strcmp(string1,string2);
    /*strcmp returns 3 values
    1. ZERO (both stirngs are equal(comparing by ascii values.))
    2. Positive(string1 > string2)
    3. Negitive(sting1<string2)*/

    if(i=0) //i stores the returned value.
        printf("%s and %s are equal",string1,string2);
    else if (i>0)
        printf("%s is greater than %s.",string1,string2);
    else
        printf("%s is greater than %s.",string2,string1);

}
