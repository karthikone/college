#include<iostream.h>
#include<process.h>
#include<alloc.h>
struct node
{
int info;
struct node*next;
struct node*prev;
}*start;
class double_llist
{
public:
void create_list(int value);
void add_begin(int value);
void add_after(int value,int position);
void delete_element(int value);
void search_element(int value);
void display_dlist();
void count();
void reverse();
double_llist()
{
start=NULL;
}
};
int main()
{
int choice,element,position;
double_llist dl;
while(1)
{
cout<<endl<<"_________________"<<endl;
cout<<endl<<"operations on double linked list"<<endl;
cout<<endl<<"_________________"<<endl;
cout<<"1.create node"<<endl;
cout<<"2.add at beggining"<<endl;
cout<<"3.add after position"<<endl;
cout<<"4.delete"<<endl;
cout<<"5.display"<<endl;
cout<<"6.count"<<endl;
cout<<"7.reverse"<<endl;
cout<<"8.quit"<<endl;
cout<<"enter your choice:";
cin>>choice;
switch(choice)
{
case 1:
cout<<"enter the element:";
cin>>element;
dl.create_list(element);
cout<<endl;
break;
case 2:
cout<<"enter the element:";
cin>>element;
dl.add_begin(element);
cout<<endl;
break;
case 3:
cout<<"enter the element:";
cin>>element;
cout<<"insert element after position:";
cin>>position;
dl.add_after(element,position);
cout<<endl;
break;
case 4:
if(start==NULL)
{
cout<<"list empty,nothing to delete"<<endl;
break;
}
cout<<"enter the element for deletion:";
cin>>element;
dl.delete_element(element);
cout<<endl;
break;
case 5:
dl.display_dlist();
cout<<endl;break;
case 6:
dl.count();
break;
case 7:
if(start==NULL)
{
cout<<"list empty,nothing to reverse"<<endl;
break;
}
dl.reverse();
cout<<endl;
break;
case 8:
exit(1);
default:
cout<<"wrong choice"<<endl;
}
}
return 0;
}
void double_llist::create_list(int value)
{
struct node*s,*temp;
temp=new(struct node)
temp->info=value;
temp->next=NULL;
if(start==NULL)
{
temp->prev=NULL;
start=temp;
}
else
{
s=start;
while(s->next!=NULL)
s=s->next;
s->next=temp;
temp->prev=s;
}
}
void doble_llist::add_begin(int value)
{
if(start==NULL)
{
cout<<"first create the list."<<endl;
return;
}
struct node*temp;
temp=new(struct node);
temp->prev=NULL;
temp->info=value;
temp->next=start;
start->prev=temp;
start=temp;
cout<<"element inserted"<<endl;
}
void double_llist::add_after(int value,int pos)
{
if(start==NULL)
{
cout<<"first create the list."<<endl;
return;
}
struct node*tmp,*q;
int i;
q=start;
for(i=0;i<pos-1;i++)
{
q=q->next;
if(q==NULL)
{
cout<<"there are less than";
cout<<pos<<"element."<<endl;
return;
}
}
tmp=new(struct node);
tmp->info=value;
if(q->next==NULL)
{
q->next=tmp;
tmp->next=NULL;
tmp->prev=q;
}
else
{
tmp->next=q->next;
tmp->next->prev=tmp;
q->next=tmp;
tmp->prev=q;
}
cout<<"element inserted"<<endl;
}
void double_llist::delete_element(int value)
{
struct node*tmp,*q;
if(start->info==value)
{
tmp=start;
start=start->next;
start->prev=NULL;
cout<<"element deleted"<<endl;
free(tmp);
return;
}
q=start;
while(q->next->next!=NULL)
{
if(q->next->info==value)
{
tmp=q->next;
q->next=tmp->next;
tmp->next->prev=q;
cout<<"element deleted"<<endl;
free(tmp);
return;
}
q=q->next;
}
if(q->next->info==value)
{
tmp=q->next;
free(tmp);
q->next=NULL;
cout<<"element deleted"<<endl;
return;
}
cout<<"element"<<value<<"not found"<<endl;
}
void double_llist::display_dlist()
{
struct node*q;
if(start==NULL)
{
cout<<"list empty,nothing to display"<<endl;
return;
}
q=start;
cout<<"the doubly link list is:"<<endl;
while(q!=NULL)
{
cout<<"NULL"<<endl;
}
void double_llist::count()
{
struct node*q=start;
int cnt=0;
while(q!=NULL)
{
q=q->next;
cnt++;
}
cout<<"number of elements are:"<<cnt<<endl;
}
void double_llist::reverse()
{
struct node*p1,*p2;
p1=start;
p2=p1->next;
p1->next=NULL;
p1->prev=p2;
while(p2!=NULL)
{
p2->prev=p2->next;
p2->next=p1;
p1=p2;
p2=p2->prev;
}
start=p1;
cout<<"list reversed"<<endl;
}


