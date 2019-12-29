#include<stdio.h>
#include<string.h>
int main(void)
{
int len;
char ch [100];
printf("\nEnter the string : ");
scanf("%s",&ch);
len=strlen(ch);
printf("The length of string : %d",len);
}
