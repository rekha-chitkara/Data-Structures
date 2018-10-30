#include<iostream>
using namespace std;
struct node
{
  node *prev;
  int data;
  node *next;  
};
node *head,*tail;
void frontt(int n)
{
  node *temp=new node;
  temp->data=n;
  temp->prev=NULL;
  temp->next=NULL;
  if(head==NULL)
  {
    head=temp;
    tail=temp;
    return;
    
  }
  else
  {
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
  }
}
void display()
{
  node *temp=new node;
  temp=head;
  
  while(temp!=NULL)
  {
    cout<<temp->data<<"\t";
    temp=temp->next;
  }
}
int check(int n)
{
  int c=0;
  node *temp=new node;
  temp=head;
  
  while(temp!=NULL)
  {
    if(temp->data>n)
    {
      c++; 
    }
    temp=temp->next;
  }
  return c+1;
}
void insert(int n,int pos)
{
  
  node *temp1=new node;
  temp1->data=n;
  temp1->next=NULL;
  if(pos==1)
  {
    temp1-
}
int main()
{
  head=NULL;
  frontt(11);
  frontt(15);
  frontt(26);
  frontt(27);
  display();
  int k;
  cin>>k;
  int pos=check(k);
  cout<<"The element has been inserted at : "<<pos<<" position"<<endl;
  display();
  insert(n,pos);
   return 0;
  }
   
