//Stack implementation using doubly linked list

#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    
    //Delete node at head
    void deleteAtHead()
    {
		node* temp = head;
		if(head == NULL)
		{
			cout<<"Stack is empty!\n";
			return;
		}
		node* b = temp->nxt;
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

class Stack{
public:
	DoublyLinkedList dl;
	Stack()
	{
		
	}
	
	int Top()
	{
		if(dl.getSize() == 0)
		{
			cout<<"Stack is empty!\n";
			return -1;
		}
		return dl.head->data;
	}
	
	void Push(int val)
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
    Stack st;
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
    return 0;
}
