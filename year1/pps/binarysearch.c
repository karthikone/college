#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10],n,i;
system("cls");
printf("Enter two numbers to convert : ");
scanf("%d",&n);
for(i=0;n>0;i++);
{
a[i]=n%2;
}
printf("\n binary of given number is =");
for(i=i-1;i>=0;i--);
{
printf("%d",a[i]);
}
return 0;
}