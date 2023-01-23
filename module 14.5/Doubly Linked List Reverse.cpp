
//git add .
//git commit -m "exam file edit"
//git push
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

      void SearchIndex(int index)
      {
            if(head==NULL || index>=sz)
            {
                  return;
            }
            if(index==0)
            {
                  cout<<head->data<<" \n";
                  return;
            }
            node* temp = head;
            int i=0;
            while(i!=index-1)
            {
                  temp=temp->next;
                  i++;
            }
            cout<<temp->next->data<< " \n";

      }

      void ContainsElement(int value)
      {
             if(head==NULL)
            {
                  return;
            }

            node* temp = head;
            int i=0;
            while(temp && temp->data != value)
            {
//                  cout<<temp->data<<"\n";
                  temp=temp->next;
                  i++;
            }
            if(temp!=NULL)
            {
                  cout<<"YES data= "<<temp->data<<" index= "<<i<<"\n";
                  return;
            }
            if(temp==NULL)
            {
                  cout<<"NO\n";
                  return;
            }
      }

      node* rev(node* a)
      {
            if(a==NULL)  return a;
            rev(a->next);
            cout<<a->data<<" ";

      }

      void RecursiveReverse()
      {
            rev(head);
            cout<<"\n";
      }

      void ReverseAll()
      {
            if(head==NULL)
            {
                  return;
            }
            node*temp = head;
            int i=0;
            while(i!=sz-1)
            {
//                  node*a = temp;
//                  a=temp->prev;
//                  temp->prev=temp->next;
//                  temp->next=a;
//                  swap(temp->prev , temp->next);
//                  cout<<temp->next<<" ";
//                  cout<<temp->prev< <" \n";
                  temp=temp->next;
                  i++;
            }
            node* a =head;
            while(a!=NULL)
            {
                  swap(a->next , a->prev);
                  a=a->prev;
            }
            head=temp;
//            node* c = head;
//            while(c!=NULL)
//            {
//                  cout<<c->data<<" ";
//                  c=c->next;
//            }

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
//      dl.Traverse();
      dl.InsertByIndex(1,10);
      dl.InsertByIndex(0,17);
      dl.InsertByIndex(5,20);
      dl.InsertByIndex(6,23);
      dl.Traverse();
//      dl.SearchIndex(6);
//      dl.SearchIndex(0);
//      dl.SearchIndex(1);
//      dl.SearchIndex(7);
//      dl.Traverse();
//      dl.ContainsElement(23);
//      dl.ContainsElement(3);
//      dl.RecursiveReverse();
//      dl.Traverse();
      dl.ReverseAll();
      dl.Traverse();
      dl.RecursiveReverse();
      dl.Traverse();




}


