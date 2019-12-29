#include<stdio.h>
#include<string.h>
main()
{
    char str[10];
    char str2[] ="This Program is about strings. \n Program Objectives:\n initializing a string by multiple methods.\n difference between puts and gets,fgets." ;
    char str3[100];
    puts(str2);//Printing a string (str2)
    /*to see the difference between puts and gets statement remove '//'  before the line and put // (comments)  to  print and scanf statement.*/
    //printf("\n Enter string : ");
    //scanf("%s",str);    // no & is required to store string.
    //printf("\n The entered string is : %s \n",str);

    //Same Program by using puts and gets statement

        puts("\nEnter string :");
        //gets( str); // use gets statment only if you know string range.
       // puts(str);
      fgets(str3,100,stdin);
      /*The most important difference is that fgets() knows how big the string
is and gets() does not. That means it is nearly impossible to write
safe code using gets() so don't do it.*/
       puts(str3);
        /*if you enter hello world by useing printf and scanf statements you get out put like this: hello
        scanf doesn't stores the string after space.

puts() and printf() both are in stdio.h header files and are used for output purposes.
The main difference between them is that the string output.
For printing a string using puts(), we can directly write the string name onto it .
For printing string using printf(), we will have to use format specifier ‘%s’ which will not print any blank spaces on the screen.
But there is a method to overcome this problem by using ‘%c’ format specifier, a for loop and incrementing it till you reach the null character, which is little tedious.*/
}
