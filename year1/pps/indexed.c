#include<stdio.h>
#include<conio.h>
struct fileTable
{
char name[20];
int nob,blocks[30];
}
ft[30];
void main()
{
int i,j,n;
char s[20];
clrscr();
printf("Enter no of files :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter file name %d :",i+1);
scanf("%s",ft[i].name);
printf("Enter no of blocks in file %d:",i+1);
scanf("%d",&ft[i].nob);
printf("Enter the blocks of the file :");
for(j=0;j<ft[i].nob;j++)
scanf("%d",&ft[i].blocks[j]);
}
printf("\nEnter the file to be searched--");
scanf("%s",s);
for(i=0;i<n;i++)
if(strcmp(s,ft[i].name)==0)
break;
if(i==n)
printf("\nFile Not Found");
else
{
printf("\nFILE NAME NO OF BLOCKS BLOCKS OCCUPIED");
printf("\n %s\t\t%d\t",ft[i].name,ft[i].nob);
for(j=0;j<ft[i].nob;j++)
printf("%d",ft[i].blocks[j]);
}
getch();
}