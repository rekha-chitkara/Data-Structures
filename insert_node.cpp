#include <iostream>

using namespace std;
  struct node{

  int data;
  node *link;


  };
  node *head,*tail;
  void create_node(int value){

  node *temp=new node;
  temp->data=value;
  temp->link=NULL;
  if(head==NULL){
    head=temp;
    tail=temp;



  }
  else{


    tail->link=temp;
    tail=temp;
    tail->link=NULL;

  }

  }
  void display()
  {
      node *temp=new node;
      temp=head;
      while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->link;
        

      }



  }
    void front1(int n)
    {
        node *temp = new node;
        temp -> data = n;
        temp -> link = head;
        head = temp;
    }

int main()
{

    head=NULL;
    tail=NULL;
    create_node(10);
    create_node(20);
    front1(3);
    display();
    return 0
}
