#include<iostream.h>
#include<string.h>
struct books
{
char title[50];
char author[50];
char subject[100];
int book-id;
};
int main()
{
struct books book1;
struct books book2;
strcpy(book1.title,"learn c++");
strcpy(book1.author,"chandmiyaan");
strcpy(book1.subject,"c++");
book1.book-id=123456;
strcpy(book2.title,"java");
strcpy(book2.author,"nageshwar");
strcpy(book2.subject,"java");
book2.book-id=54321;
cout<<"book1.title"<<book1.title<<endl;
cout<<"book1.author"<<book1.author<<endl;
cout<<"book1.subject"<<book1.subject<<endl;
cout<<"book1.book-id"<<book1.book-id<<endl;
cout<<"book2.title"<<book2.title<<endl;