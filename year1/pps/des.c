#include<stdio.h>
int main()
{
int i,cnt=0,p8[8]={6,7,8,9,1,2,3,4};
int p10[10]={6,7,8,9,10,1,2,3,4,5};
char input[11],k1[10],k2[10],temp[11];
char LS1[5],LS2[5];
printf("enter 10 bits input:");
scanf("%s",input);
input[10]='\0';
for(i=0;i<10;i++)
{
cnt=p10[i];
temp[i]=input[cnt-1];
}
temp[i]='\0';
printf("\n Your p10 key is:");
for(i=0;i<10;i++)
{
printf("%d",p10[i]);
}
printf("\n Bits after p10:");
puts(temp);
for(i=0;i<5;i++)
{
if(i==4)
temp[i]=temp[0];
else
temp[i]=temp[i+1];
}
for(i=5;i<10;i++)
{
if(i==9)
temp[i]=temp[5];
else
temp[i]=temp[i+1];
}
printf("Output after LS-1:");
puts(temp);
printf("\n Your p8 key is:");
for(i=0;i<8;i++)
{
printf("%d",p8[i]);
}
for(i=0;i<8;i++)
{
cnt=p8[i];
k1[i]=temp[cnt-1];
}
printf("\n Your key k1 is:");
puts(k1);
return 0;
}