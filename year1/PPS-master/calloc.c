#include<stdio.h>
#include<stdlib.h>
void main()
{
int array,i,n,size;
array=(int*)calloc(size,sizeof(int));
for(i=0;i<n;i++)
{
printf("enter%d value:",i++);
scanf("%d",array+1);
}
printf("entered values");
for(i=0;i<n;i++)
{
printf("%d values=%d",i+1,array+1);
}
}