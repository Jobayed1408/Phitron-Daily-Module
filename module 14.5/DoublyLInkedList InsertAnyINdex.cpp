#include<bits/stdc++.h>
using namespace std;

class node{
public:
      int data;
      node* prev;
      node* next;
};

class DoublyLIst{
public:
      node* head;
      int sz;
      DoublyLIst()
      {
            head = NULL;
            sz=0;
      }

      node* createNode(int value)
      {
            node* newnode = new node;
            newnode->data = value;
            newnode->prev = NULL;
            newnode->next = NULL;
            return newnode;
      }

      void InsertHead(int value)
      {
            node* temp = createNode(value);
            sz++;
            if(head == NULL)
            {
                  head = temp;
                  return;
            }

            temp->next = head;
            head->prev = temp;
            head = temp;
      }

      void InsertByIndex(int index, int value)
      {
            if( index<0 || index>sz)
            {
                  return;
            }
            if(head == NULL || index==0){
                  InsertHead(value);
                  return;
            }
            node* temp = createNode(value);
            int i=0;
            node * curr = head;
            if(index == sz)
            {

                  while(i!=sz-1)
                  {
                        curr=curr->next;
                        i++;
                  }
                  curr->next = temp;
                  temp->prev=curr;
                  sz++;
                  return;
            }


            while(i!=index-1)
            {
                  curr=curr->next;
                  i++;
            }
            node* a = curr->next;
            temp->next = curr->next;
            temp->prev=curr;
            curr->next=temp;
            a->prev=temp;
            sz++;

      }


      void Traverse()
      {
            node*temp = head;
            while(temp!=NULL)
            {
                  cout<<temp->data<<" ";
                  temp = temp->next;
            }
            cout<<"\nSZ = "<<sz<<"\n";
      }

};

int main()
{
      DoublyLIst dl;
      dl.InsertHead(5);
      dl.InsertHead(8);
      dl.InsertHead(14);
      dl.Traverse();
      dl.InsertByIndex(1,10);
      dl.InsertByIndex(0,17);
      dl.InsertByIndex(5,20);
      dl.InsertByIndex(6,23);
      dl.Traverse();
}
