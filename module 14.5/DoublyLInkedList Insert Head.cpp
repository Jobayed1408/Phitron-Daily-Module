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
      DoublyLIst()
      {
            head = NULL;
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
            if(head == NULL)
            {
                  head = temp;
                  return;
            }

            temp->next = head;
            head->prev = temp;
            head = temp;

      }


      void Traverse()
      {
            node*temp = head;
            while(temp!=NULL)
            {
                  cout<<temp->data<<" ";
                  temp = temp->next;
            }
            cout<<"\n";
      }

};

int main()
{
      DoublyLIst dl;
      dl.InsertHead(5);
      dl.InsertHead(8);
      dl.InsertHead(14);
      dl.Traverse();
}
