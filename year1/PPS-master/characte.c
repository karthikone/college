#include<stdio.h>
#include<conio.h>
#include<string.h>
void delchar(char x[],int a,int b);
int main()
{
char string[10];
int n,pos,p;
printf("enter a string");
scanf("%s",string);
printf("enter the position from where you want to delete:");
scanf("%d",&pos);
printf("enter the number ofcharacters to be deleted:");
scanf("%d",&n);
delchar(string,n,pos);
return 0;
}
//function to delete n characters
void delchar(char x[],int a,int b)
{
if((a+b-1)<=strlen(x))
{
strcpy(&x[b-1],&x[a+b-1]);
puts(x);
}
}