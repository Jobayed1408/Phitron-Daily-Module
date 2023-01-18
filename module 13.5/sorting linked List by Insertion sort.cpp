#include<bits/stdc++.h>
using namespace std;

class node{
public:
      int data;
      node* next;
};

class LinkedList{
public:
      node *head ,*sorted;
      node* a= head;
      LinkedList()
      {
            head = NULL;
            sorted = NULL;
      }

      node* createNode(int value)
      {
            node* newNode = new node;
            newNode->data = value;
            newNode->next = NULL;
            return newNode;
      }

      void Insertdata(int value)
      {
            node* temp = createNode(value);

            if(head==NULL)
            {
                  head = temp;
                  a=temp;
                  return;
            }
            temp->next = head;

//            a=a->next;

            head= temp;
            cout<<a->data<<" \n" ;
//            a=temp;
      }

      void insertTail(int value)
      {
            node* temp = createNode(value);
            if(head==NULL)
            {
                  head = temp;
                  a=temp;
                  return;
            }
            temp->next = NULL;

            a->next = temp;
            a=a->next;
            cout<<a->data<<" \n" ;

      }

//      void insertTail(int value)
//      {
//            if(head == NULL)
//            {
//                  Insertdata(value);
//                  return;
//            }
//            node*temp = head;
//
//            while(temp->next != NULL)
//            {
//                  temp = temp->next;
//            }
//
//            node*curr = createNode(value);
//            curr->next = NULL;
//            temp->next = curr;
//            temp = temp->next;
//
//      }

      void Sort( )
      {
            node* current = head;
            while(current!=NULL)
            {
                  node* next = current->next;
                  InsertionSort(current) ;
                  //delete current;
                  current=next;

            }
            head = sorted;
      }

      void InsertionSort(node* newnode)
      {
            if(sorted == NULL || sorted->data <= newnode->data)
            {
                  newnode->next = sorted;
                  sorted = newnode;
            }else{
                  node* curr = sorted;
                  while( curr->next  && curr->next->data > newnode->data )
                  {
                        curr=curr->next;
                  }
                  newnode->next = curr->next;
                  curr->next = newnode;

            }

      }

      void Print()
      {
            node* temp = head;
            while(temp)
            {
                  cout<< (*temp).data << " " ;
                  temp=temp->next ;
            }
            cout<<"\n" ;
      }

};

int main()
{
      LinkedList l;
      l.Insertdata(5);
      l.Insertdata(10);
      l.Insertdata(15);
      l.Print();
      l.insertTail(20);
      l.insertTail(25);
      l.insertTail(22);
      l.Print();
      cout<<"After sorting :\n";
      l.Sort();
      l.Print();
//      l.Print();
}
