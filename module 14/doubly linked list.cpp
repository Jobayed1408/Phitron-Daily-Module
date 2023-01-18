#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node*prev;
    node* next;
};

class LinkedList
{
public:
    node* head, *tail;
    int sz;
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        sz=0;
    }

    node* createNode(int val)
    {
        node* newnode = new node;
        newnode->data=val;
        newnode->prev=NULL;
        newnode->next=NULL;
        sz++;
        return newnode;
    }

    void InsertHead(int value)
    {
        node * temp = createNode(value);
        if(head==NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        //node* t=temp;
        temp->next=head;
        head->prev=temp;
        head=temp;

    }
    void InsertTail(int value)
    {

        if(head==NULL)
        {
            InsertHead(value);
            return;
        }
        node*temp=createNode(value);
        node*a = tail;
//        while(a->next!=NULL)
//        {
//            a=a->next;
//        }
        a->next=temp;
        temp->prev=a;
        //tail=temp;

        a=a->next;
        tail=a;
    }

    void InsertByindex(int index, int value)
    {
        if(index<0 || index>sz)
        {
            return;
        }
        if(index==0)
        {
            InsertHead(value);
            return;
        }
        node* curr = createNode(value);
        node*temp = head;
        int i=0;
        while(i != index-1)
        {
            temp=temp->next;
            i++;
        }

        node* c = temp->next;
        curr->next=c;
        c->prev = curr;
        temp->next = curr;
        curr->prev = temp;

//        node* b=temp;
//        curr->next = b->next;
//        curr->prev = b;
//        b->next  = curr;
//        b->next->prev = curr;
//        temp->next=b;


    }

    void DeleteNode(int index)
    {
        if(index<0 || index>=sz)
        {
            return;
        }
        if(index==0)
        {
            node*temp = head;
            head=head->next;
            head->prev=NULL;
            sz--;
            delete temp;
            return;
        }
        if(index==sz-1)
        {
            node*t=tail;
            t->prev->next=NULL;
            tail=t->prev;
            delete t;
            sz--;
            return;
        }
        node* tmp = head;
        int i=0;
        while(i != index-1)
        {
            tmp=tmp->next;
            i++;
        }
        node* a=tmp->next;
        tmp->next=a->next;
        a->next->prev=tmp;
        sz--;
        delete a;

    }

    void Reverse()
    {
          if(head ==NULL) return;
        node*temp= head;
        int i=0;

        while(i!=sz-1)
        {
            temp=temp->next;
            i++;
        }
//            head =temp;
        node* a =head;
        while(a!=NULL)
        {
            swap(a->next, a->prev);
            a=a->prev;
        }
        head=temp;
    }

    void PrintList()
    {
          int i=0;
        node* a= head;
        while(a!=NULL)
        {
            i++;
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\nSz = "<<i <<'\n';
    }

};

int main()
{
    LinkedList li;
//    li.InsertTail(2);
    li.InsertHead(5);
    li.InsertHead(10);
    li.InsertHead(15);
    li.InsertHead(20);
   li.PrintList();
   li.InsertTail(25);
   li.InsertTail(12);
   li.InsertTail(39);
   li.InsertTail(27);
   li.PrintList();
   li.InsertHead(23);
//    li.InsertHead(13);
   li.PrintList();
   li.InsertByindex(2,31);
   li.InsertByindex(2,32);
   li.InsertByindex(0,33);
   li.InsertByindex(15,31);
   li.InsertByindex(3,37);
   li.PrintList();
   li.DeleteNode(0);
   li.PrintList();
   li.DeleteNode(3);
   li.PrintList();
   li.DeleteNode(10);
   li.PrintList();
    li.DeleteNode(11);
    li.PrintList();
   cout<<"reverse\n";
   li.Reverse();
   li.PrintList();




}
