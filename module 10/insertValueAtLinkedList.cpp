#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
};

class Linkedlist{
public:
    node* head;
    int sz;
    Linkedlist()
    {
        head=NULL;
        sz=0;
    }

    node* generateNode(int value)
    {
        node* newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    void insertAtHead(int value)
    {
        node*temp = generateNode(value);
        sz++;

        if(temp==NULL)
        {
            head = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
    }

    void inserAtAny(int ind, int value)
    {
        if(ind==0)
        {
            insertAtHead(value);
            return;
        }
        sz++;
        node* a = head;
        int i=0;
        while(i!=ind-1)
        {
            a=a->next;
            i++;
        }
        node * temp = generateNode(value);
        temp->next = a->next;
        a->next = temp;
    }
    void InsertAfterValue(int value, int data)
    {
        node* temp = head;
        while(temp!=NULL)
        {
            if(temp->data == value)
            {
                break;
            }
            temp = temp->next;
        }
        if(temp==0)
        {
            {
                cout<<"No match data\n";
                return;
            }
        }
        node* temp2 = generateNode(data);
        sz++;
        temp2->next = temp->next;

        temp->next = temp2;

    }

    void ReversePrints(node* a)
    {
        if(a==NULL) return;
        ReversePrints(a->next);
        cout<<a->data<<" ";
    }
    void ReversePrint()
    {
        ReversePrints(head);
        cout<<"\n";
    }

    void printList()
    {
        node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\nsz = "<<sz<<"\n";

    }

};

int main()
{
    Linkedlist li;
    li.head;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        li.insertAtHead(x);
    }
//    li.insertAtHead(5);
//    li.insertAtHead(10);
    li.printList();
    li.inserAtAny(0,8);
    li.printList();
    li.inserAtAny(2,9);
    li.printList();
    li.InsertAfterValue(9,25);
    li.printList();
    li.InsertAfterValue(90,25);
    li.printList();
    li.ReversePrint();
    li.printList();

}
