#include<stdio.h>
void main()
{
int week;
printf("enter the week values(1-7)");
scanf("%d",&week);
switch(week)
{
case 1:printf("monday");
case 2:printf("tuesday");
case 3:printf("wednesday");
case 4:printf("thursday");
case 5:printf("friday");
case 6:printf("saturday");
case 7:printf("sunday");
deafult:printf("wrong choice");
}
}
