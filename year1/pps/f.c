#include<stdio.h>
void main()
{
char ch;
FILE *fp;
fp=fopen("cse.txt","r");
if(fp==NULL)
{
printf("file is not opened");
}
while((ch=getc (fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
}
