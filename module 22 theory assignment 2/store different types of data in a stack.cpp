
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

    node<T> * CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>; 
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

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
    int getSize()
    {
        return sz;
    }
};

template<class T>
class Stack{
public:
	DoublyLinkedList<T> dl;
	Stack(){}
	
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
};

int main()
{
    Stack <char>st;
    st.Push('a');
    cout<<st.Top()<<"\n";
    st.Pop();
    Stack<int>st2;
    st2.Push(18);
    cout<<st2.Top()<<"\n";
    st2.Pop();
    Stack <double>st3;
    st3.Push(5.19);
    cout<<st3.Top()<<"\n";
    st3.Pop();
}
