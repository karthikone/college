#include<stdio.h>
void main()
{
int n,r,sum=0;
printf("enter then n value");
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(n==sum)
print("it is palindrome");
else
print("not a palindrome");
}

