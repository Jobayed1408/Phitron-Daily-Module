


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
      node* head , *tail;
      int sz;
      DoublyLIst()
      {
            head = NULL;
            tail = NULL;
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
                  tail = temp;
                  return;
            }
//            node* t = temp;
//            tail->next = t;
//            t->prev = tail;
//            t->next=NULL;
//            tail = t;

            temp->next = head;
            head->prev = temp;
            head = temp;
//            cout<<"Tail data "<<tail->prev->data<<"\n";

      }

      int Check()
      {
            node* p = head;
            node* t = tail;
            int a=1 , i=0;
            while(i!=sz/2)
            {
                  if(p->data != t->data)
                  {
//                        cout<<"Not palindrome\n";
                        return 0;
                  }
                  if(p->data == t->data)
                  {
                        p=p->next;
                        t=t->prev;
                  }
                  i++;

            }
            return a;
      }

      void CheckPalindrome()
      {
            int res = Check();
//            cout<<res<<endl;
            if(res==1)
            {
                  cout<<"Palindrome\n";
            }
            else cout<<"Not plaindrome\n";
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
                  tail = temp;
                  cout<<"Tail "<<tail->data<<"\n";
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
      dl.InsertHead(12);
//      dl.InsertHead(12);
      dl.InsertHead(15);
//      dl.InsertHead(18);
//      dl.InsertHead(5);
      dl.InsertByIndex(5,5);
      dl.InsertByIndex(6,14);
      dl.InsertByIndex(6,8);
      dl.InsertByIndex(8,12);
      dl.InsertByIndex(9,15);
      dl.Traverse();
      dl.CheckPalindrome();



}


