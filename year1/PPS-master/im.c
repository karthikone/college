#include<iostream.h>
#include<alloc.h>
#include<process.h>
struct node
{
int info;
struct node *next;
}*start;
class single_llist
{
public:
node *create_node(int);
void insert_begin();
void insert_pos();
void insert_last();
void delete_pos();
void sort();
void search();
void update();
void reverse();
void display();
single_llist()
{
start=NULL;
}
};
void main()
{
int choice,nodes,element,position,i;
single_llist s1;
start=NULL;
while(1)
{
cout<<endl<<"_________________________"<<endl;
cout<<endl<<"operations on singly linked list"<<endl;
cout<<endl<<"_________________________"<<endl;
cout<<"1.insert node at beginning"<<endl;
cout<<"2.insert node at last"<<endl;
cout<<"3.insert node at position"<<endl;
cout<<"4.sort link list"<<endl;
cout<<"5.delete a particular node"<<endl;
cout<<"6.update node value"<<endl;
cout<<"7.search element"<<endl;
cout<<"8.display linked list"<<endl;
cout<<"9.reverse linked list"<<endl;
cout<<"10.exit"<<endl;
cout<<"enter your choice:";
cin>>choice;
switch(choice)
{
case 1:
cout<<"inserting node  at beginning:"<<endl;
s1.insert_begin();
cout<<endl;
break;
case 2:
cout<<"inserting node at last:"<<endl;
s1.insert_last();
cout<<endl;
break;
case 3:
cout<<"inserting node at given position:"<<endl;
s1.insert_pos();
cout<<endl;
break;
case 4:
cout<<"sort link list:"<<endl;
s1.sort();
cout<<endl;
break;
case 5:
cout<<"delete a particular node:"<<endl;
s1.delete_pos();
break;
case 6:
cout<<"update node value:"<<endl;
s1.update();
cout<<endl;
break;
case 7:
cout<<"search element in link list:"<<endl;
s1.search();
cout<<endl;
break;
case 8:
cout<<"display elements of link list:"<<endl;
s1.display();
cout<<endl;
break;
case 9:
cout<<"reverse elements of link list:"<<endl;
s1.reverse();
cout<<endl;
break;
case 10:
cout<<"exiting..."<<endl;
exit(1);
break;
default:
cout<<"wrong choice"<<endl;
}
}
}
node *single_llist::create_node(int value)
{
struct node*temp,*s;
temp=new(struct node);
if(temp==NULL)
{
cout<<"memory not allocated"<<endl;
return 0;
}
else
{
temp->info=value;
temp->next=NULL;
return temp;
}
}
void single_llist::insert_begin()
{
int value;
cout<<"enter the value to be inserted:";
cin>>value;
struct node*temp,*p;
temp=create_node(value);
if(start==NULL)
{
start=temp;
start->next=NULL;
}
else
{
p=start;
start=temp;
start->next=p;
}
cout<<"element inserted at beginning"<<endl;
}
void single_llist::insert_last()
{
int value;
cout<<"enter the value to be inserted:";
cin>>value;
struct node *temp,*s;
temp=create_node(value);
s=start;
while(s->next!=NULL)
{
s=s->next;
}
temp->next=NULL;
s->next=temp;
cout<<"element inserted at last"<<endl;
}
void single_llist::insert_pos()
{
int value,pos,counter=0;
cout<<"enter the value to be inserted:";
cin>>value;
struct node *temp,*s,*ptr;
temp=create_node(value);
cout<<"enter the position at which node to be inserted:";
cin>>pos;
int i;
s=start;
while(s!=NULL)
{
s=s->next;
counter++;
}
if(pos==1)
{
if(start==NULL)
{
start=temp;
start->next=NULL;
}
else
{
ptr=start;
start=temp;
start->next=ptr;
}
}
else if(pos>1&&pos<=counter)
{
s=start;
for(i=1;i<pos;i++)
{
ptr=s;
s=s->next;
}
ptr->next=temp;
temp->next=s;
}
else
{
cout<<"position out of range"<<endl;
}
}
void single_llist::sort()
{
struct node *ptr,*s;
int value;
if(start==NULL)
{
cout<<"the list is empty"<<endl;
return;
}
ptr=start;
while(ptr!=NULL)
{
for(s=ptr->next;s!=NULL;s=s->next)
{
if(ptr->info>s->info)
{
value=ptr->info;
ptr->info=s->info;
s->info=value;
}
}
ptr=ptr->next;
}
}
void single_llist::delete_pos()
{
int pos,i,counter=0;
if(start==NULL)
{
cout<<"list is empty"<<endl;
return;
}
cout<<"enter the position of value to be deleted:";
cin>>pos;
struct node *s,*ptr;
s=start;
if(pos==1)
{
start=s->next;
}
else
{
while(s!=NULL)
{
s=s->next;
counter++;
}
if(pos>0&&pos<=counter)
{
s=start;
for(i=1;i<pos;i++)
{
ptr=s;
s=s->next;
}
ptr->next=s->next;
}
else
{
cout<<"position out of range"<<endl;
}
free(s);
cout<<"element deleted"<<endl;
}
}
void single_llist::update()
{
int value,pos,i;
if(start==NULL)
{
cout<<"list is empty"<<endl;
return;
}
cout<<"enter the node position to be updated:";
cin>>pos;
cout<<"enter the new value:";
cin>>value;
struct node *s,*ptr;
s=start;
if(pos==1)
{
start->info=value;
}
else
{
for(i=0;i<pos-1;i++)
{
if(s==NULL)
cout<<"there are less than"<<pos<<"elements";
return;
}
s=s->next;
}
s->info=value;
}
cout<<"node updated"<<endl;
}
void single_llist::search()
{
int value,pos=0;
int flag=0;
if(start==NULL)
{
cout<<"list is empty"<<endl;
return;
}
cout<<"enter the value to be searched:";
cin>>value;
struct node *s;
s=start;
while(s!=NULL)
{
pos++;
if(s->info==value)
{
flag=1;
cout<<"element"<<value<<"is found at position"<<pos<<endl;
}
s=s->next;
}
if(!flag)
cout<<"element"<<value<<"not found in the list"<<endl;
}
void single_llist::reverse()
{
struct node *ptr1,*ptr2,*ptr3;
if(start==NULL)
{
cout<<"list is empty"<<endl;
return;
}
if(start->next==NULL)
{
return;
}
ptr1=start;
ptr2=ptr1->next;
ptr3=ptr2->next;
ptr1->next=NULL;
ptr2->next=ptr1;
while(ptr3!=NULL)
{
ptr1=ptr2;
ptr2=ptr3;
ptr3=ptr3->next;
ptr2->next=ptr1;
}
start=ptr2;
}
void single_llist::display()
{
struct node *temp;
if(start==NULL)
{
cout<<"the list is empty"<<endl;
return;
}
temp=start;
cout<<"elements of list are:"<<endl;
while(temp!=NULL)
{
cout<<temp->info<<"->";
temp=temp->next;
}
cout<<"NULL"<<endl;
};



