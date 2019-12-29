#include<string.h>
void main()
{
char a[10],b[10];
printf("enter the string a");
scanf("%s",a);
printf("enter the string b");
scanf("%s",b);
if(strcmp(a,b)==0)
printf("both the strings are equal");
else
printf("both the strings are not equal");
}
