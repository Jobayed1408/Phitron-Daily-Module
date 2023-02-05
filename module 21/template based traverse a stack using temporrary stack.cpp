//Stack implementation using doubly linked list

#include<bits/stdc++.h>
using namespace std;

template<class T>
class node
{
public:
    T data;
    node * nxt;
    node * prv;
};

template<class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T> * CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }


    //Delete node at head
    void deleteAtHead()
    {
        node<T>* temp = head;
        if(head == NULL)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        node<T>* b = temp->nxt;
        delete temp;
        head = b;
        sz--;
    }

    //Traverse the stack
    void Traverse()
    {
        int i=0;
        node<T>* a= head;
        while(a!=NULL)
        {
            i++;
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<'\n';
//        head = a;
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }
};

template<class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;
    Stack()
    {

    }

    T Top()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    void Push(T val)
    {
        dl.InsertAtHead(val);
    }

    void Pop()
    {
        dl.deleteAtHead();
    }
    int getSize()
    {
        return dl.getSize();
    }
    void Traverse()
    {
		dl.Traverse();
    }

};


int main()
{
    Stack<int>a;
    a.Push(4);
    a.Push(3);
    a.Push(8);
    a.Push(6);
    a.Traverse();

    Stack<int>tmp;
    while(a.getSize()>0)
    {
        tmp.Push(a.Top());
        a.Pop();
    }
    swap(a,tmp);
//    while(a.getSize()>0)
//    {
//        cout<<a.Top()<<"\n";
//        a.Pop();
//    }
    a.Traverse();

}
