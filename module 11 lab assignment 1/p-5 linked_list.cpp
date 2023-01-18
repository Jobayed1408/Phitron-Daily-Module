#include<bits/stdc++.h>
using namespace std;


class node
{
public:
    int data;
    node* nxt;
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
        node* newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;

    }

    void InsertAtHead(int value)
    {
        node* a = createNewNode(value);
        cnt++;
        if(head == NULL)
        {
            head = a;
            return;
        }
        if(head!=NULL)
        {
            a->nxt = head;
            head = a;
        }

    }
    void InsertAtAnyIndex(int ind, int value)
    {
        if(ind<0 || ind>cnt) return;
        if(ind == 0) {
            InsertAtHead(value);
            return;
        }
        cnt++;
        node *a = head;
        int i=0;
        while(i!=ind-1)
        {
            a=a->nxt;
            i++;
        }
        node * newnode = createNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;




    }

    void DeleteAtHead()
    {
        if(head==NULL) return;
        cnt--;
        node* a = head;
        head=a->nxt;
        delete a;
    }

    void DeleteAtAnyIndex(int index)
    {
        if(head == NULL || index>=cnt) return;
        if(index==0)
        {
            DeleteAtHead();
            return;
        }
        cnt--;
        node* a = head;
        int i=0;
        while(i!=index-1)
        {
            a=a->nxt;
            i++;
        }
        node* b = a->nxt;
        a->nxt = b->nxt;
        delete b;

    }


    void displayLLReverse( node* x)
    {
        if(!x)
            return;
        else
        {
            displayLLReverse(x->nxt);
            cout<< x->data<<" ";
        }

    }

    void printReverse()
    {
        displayLLReverse(head);
        cout<<"\n";

    }

    void Traverse()
    {
        node* a = head;

        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";

    }
    int getSize()
    {
        return cnt;
    }
    int getValue(int key)
    {
        if(key<0 || key>=cnt) return -1;
        int index = 0;
        node *newnode;
        newnode = head;
        while (newnode != NULL)
        {
            if(index==key)
                return (newnode->data);
            index++;
            newnode = newnode->nxt;
        }
    }

    void swapFirst()
    {
        node* temp = head;
        node* n;
        n->data = temp->data;

        temp->data = temp->nxt->data;
        temp->nxt->data = n->data;

    }

};

int main()
{
    LinkedList l;
//    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
//    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
//    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);
//    cout<<l.getValue(2)<<"\n";
//    cout<<l.getValue(6)<<"\n";
//
//    l.printReverse();
    l.Traverse();
//    l.swapFirst();
    l.InsertAtAnyIndex(3,100);
    l.Traverse();
    l.DeleteAtHead();
    l.Traverse();
    l.DeleteAtAnyIndex(4);
    l.Traverse();
//    l.printReverse();

}
