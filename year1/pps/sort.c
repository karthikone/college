#include<stdio.h>
void main()
{
int n,i,j,a[20],temp;
printf("enter the n value");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i])
}
for(i=0;i<n;i++)
{
for(j=0;j<n,j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("after sorting the elements are");
for(i=0;i<n;i++)
{
printf("%d",&a[i]);
}
}