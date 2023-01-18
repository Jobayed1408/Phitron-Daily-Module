#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node* prev;
};

class LinkedList
{
public:
    node* head;
    int cnt;

    LinkedList()
    {
        head = NULL;
        cnt=0;
    }

    node* createNewNode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->next = head;
        newnode->prev = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        node* newnode = createNewNode(value);
        cnt++;
        if(head==NULL)
        {
            head = newnode;
            return;
        }

        if(head!=NULL)
        {
            //head->prev;
            head->prev = newnode;

        }
        head = newnode;

    }

    void InsertAtAnyIndex(int ind, int value)
    {
        if(ind<0 || ind>cnt) return;
        if(ind==cnt)
        {
            node*x = head;
            while(x->next!=NULL)
            {
                x=x->next;
            }
            node* c= createNewNode(value);
            cnt++;
            x->next = c;
            c->prev = x;
            c->next = NULL;
            return;
        }
        if(ind==0)
        {
            InsertAtHead(value);
            return;
        }
        node* temp = head;
        int i;
        while(i!=ind-1)
        {
            temp=temp->next;
            i++;
        }

        node* a = createNewNode(value);
        cnt++;
        //node* b = a->next;
        a->next = temp->next;
        a->prev = temp;
        temp->next = a;
        a->next->prev = a;


    }

    void DeleteNode(int ind)
    {
        if(ind<0 || ind>=cnt) return;
        node* temp = head;
        if(ind == 0)
        {
            head = temp->next ;
            cnt--;
            delete temp;
            return;
        }
        if(ind == cnt-1)
        {
            int j=0;
            while(j!=ind-1)
            {
                temp=temp->next;
                j++;


                //delete temp;
            }
            node* a = temp->next;

            temp->next = NULL;
            cnt--;
            //temp = a;
            delete a;
            return;

        }

        int i=0;
        while(i!=ind-1)
        {
            temp=temp->next;
            i++;
        }
        node* temp2 = temp->next;
        temp->next = temp2->next;
        temp2->next->prev = temp;
        cnt--;
        delete temp2;
    }

    node* Reverse()
    {
        node * prev, * curr, *nextt;
        prev = NULL;
        curr = head;
        while(curr!=NULL)
        {
            nextt = curr->next;
            curr->next = prev;
            prev = curr;

            curr = nextt;

        }
        head = prev;
        cout<<curr->data<<" ";
        return head;
    }

    void rec()
    {
        cout<<"Reverse: \n";
        Reverse();
    }

    void PrintList()
    {
        node* a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\nSZ = "<<cnt<<endl;
    }

};

int main()
{
    LinkedList li;
    li.InsertAtHead(5);
    li.InsertAtHead(15);
    li.InsertAtHead(25);
    li.PrintList();
    li.InsertAtAnyIndex(1,20);
    li.PrintList();
    li.InsertAtAnyIndex(3,40);
    li.PrintList();
    li.InsertAtAnyIndex(0,30);
    li.PrintList();
    li.InsertAtAnyIndex(5,35);
    li.PrintList();
    li.InsertAtAnyIndex(6,35);
    li.PrintList();
    li.DeleteNode(8);
    li.PrintList();
    li.DeleteNode(7);
    li.PrintList();
    li.DeleteNode(6);
    li.PrintList();

    li.rec();
    li.PrintList();
}
