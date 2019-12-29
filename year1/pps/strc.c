#include<string.h>
void main()
{
char a[10],b[10];
printf("enter the string a");
gets(a);
puts(a);
printf("enter the string b");
gets(b);
puts(b);
strcpy(a,b);
puts(a);
}
