


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

    //Inserts the given data at the given index O(n)
    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    //Deletes the given index O(n)
    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!= NULL)
        {
            c->prv = b;
        }

        delete a;
        if(index==0)
        {
            head = c;
        }
        sz--;
    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    //Reverse the doubly linked list O(n)
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // last index is in a

        node *b = head;
        while(b!= NULL)
        {
//            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }

    //this function swap two elements in a list
    void swap(int i,int j)

    {
        node* temp = head;
        if(i < 0 || i >= sz || j < 0 || j >= sz || i==j)
            return;

        node* pos1 = head;
        node* pos2 = head;
        int a=0,b=0;
        while(a!=i)
        {
            pos1 = pos1->nxt;
            a++;
        }
        while(b!=j)
        {
            pos2 = pos2->nxt;
            b++;
        }

        int val = pos1->data;
        pos1->data = pos2->data;
        pos2->data = val;

    }

    //this function delete all zero in the list
    void deleteZero()
    {
        node*temp = head;
        while(temp->nxt!=NULL)
        {
            if(head->data == 0)
            {
                node* t = head;
                head=head->nxt;
                temp = head;
                delete t;
                sz--;
            }
            else if(temp->nxt->data == 0)
            {
                node* curr = temp->nxt;

                temp->nxt = temp->nxt->nxt;
                temp = head;
                delete curr;
                sz--;
            }
            else
            {
                temp=temp->nxt;
            }
        }
    }
};


int main()
{
    DoublyLinkedList dl , dl2;
    dl.InsertAtHead(7);
    dl.InsertAtHead(4);
    dl.InsertAtHead(6);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);
//    dl.Traverse();
    dl.swap(1, 4);
    dl.Traverse();
    
    dl2.InsertAtHead(5);
    dl2.InsertAtHead(0);
    dl2.InsertAtHead(0);
    dl2.InsertAtHead(2);
    dl2.InsertAtHead(0);
    dl2.deleteZero();
    dl2.Traverse();

//    dl.Reverse();
//    dl.Traverse();

    return 0;
}
