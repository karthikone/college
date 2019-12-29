#include<stdio.h>
#define MAX 100
/*Structure is grouping of variables under one name and is  called Structures.*/
main ()
{

 struct book {
 char name[25];
 float price;
 int page;
}; //   ';' is required.

struct book b1;
printf("Enter the Name of the Book : ");
scanf("%s",&b1.name);
printf("\nEnter the Price of the 1st book : ");
scanf("%f",&b1.price);
printf("\nEnter the no.of Pages in 1st book : ");
scanf("%d",&b1.page);
printf(" The Name of Book is : %s .\nThe Price of Book is : %.2f.\nThe NO.of Pages in Book : %d .",b1.name,b1.price,b1.page);
}
