#include<bits/stdc++.h>
using namespace std;
int cnt=0;

class node
{
public:
    int data;
    node* nxt;
};

class Linkedlist
{
public:
    node* head;

    Linkedlist()
    {
        head = NULL;
    }

    node* createNewNode(int value)
    {
        node* newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;

    }

    void insertAtHead(int value)
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
    void getSize()
    {
        cout<<cnt<<endl;
    }

    void traverse()
    {
        node* a = head;

        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;

        }
        cout<<"\n";
    }

    int searchDistinctValue(int n)
    {
        node* a = head;
        int index = 0;
        while(a!=NULL)
        {
            if(a->data == n)
            {
                return index;
            }
            a = a->nxt;
            index++;

        }
        return -1;
    }

    void searchAllValue(int n)
    {
        node* a = head;
        int index = 0;
        while(a!=NULL)
        {
            if(a->data == n)
            {
                cout<<n<<" is found index: "<<index<<'\n';
            }
            a = a->nxt;
            index++;

        }
    }
    void printReverse()
    {
        node* prenode, *nxtnode, *crrnode;
        prenode = NULL;
        crrnode = nxtnode = head;
        while(nxtnode!=NULL)
        {
            nxtnode = nxtnode->nxt;
            crrnode->nxt = prenode;
            prenode = crrnode;
            crrnode = nxtnode;
        }
        while(prenode!=NULL)
        {
            cout<<prenode->data<<" ";
            prenode=prenode->nxt;
        }
        cout<<"\n";
    }
//    void swaps()
//    {
//        node* pNode, *nNode, *pos1, *pos2;
//        pNode = head;
//        pos1 = head;
//
//
//    }
    void swaps()
    {
        node* temp = head;
        while (temp != NULL && temp->nxt != NULL)   // for pairwise swap we need to have 2 nodes hence we are checking
        {
            swap(temp->data,temp->nxt->data); // swapping the data
            temp = temp->nxt->nxt; // going to the next pair
        }
    }




};

int main()
{
    Linkedlist l;
    l.traverse();

    l.insertAtHead(10);
    l.getSize();
    l.traverse();

    l.insertAtHead(20);
    l.traverse();

    l.insertAtHead(30);
    l.traverse();

    l.insertAtHead(40);
    l.traverse();

    l.insertAtHead(50);
    l.traverse();
    l.getSize();
    l.swaps();
    l.traverse();

    cout<<"Index of 10: "<< l.searchDistinctValue(10)<<'\n';
    cout<<"Index of 15: "<< l.searchDistinctValue(15)<<'\n';
    l.searchAllValue(20);
    l.printReverse();



}
