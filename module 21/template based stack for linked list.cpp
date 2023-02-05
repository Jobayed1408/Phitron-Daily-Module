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
   
    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }
};

template<class T>
class Stack{
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
	
};


int main()
{
    Stack <double>st;
    st.Push(5);
    cout<<st.Top()<<"\n";
    st.Push(4);
    cout<<st.Top()<<"\n";
    st.Push(8);
    cout<<st.Top()<<"\n";
    st.Push(3);
    cout<<st.Top()<<"\n";
    st.Pop();
    cout<<st.Top()<<"\n";
    st.Pop();
    cout<<st.Top()<<"\n";
    st.Pop();
    cout<<st.Top()<<"\n";
    st.Pop();
    cout<<st.Top()<<"\n";

    Stack <char>st2;
    st2.Push('a');
    st2.Push('b');
    st2.Push('c');
    cout<<st2.Top()<<'\n';
    st2.Pop();
    cout<<st2.Top()<<'\n';
    st2.Pop();
    cout<<st2.Top()<<'\n';
    st2.Pop();
    cout<<st2.Top()<<'\n';
    
    
}
