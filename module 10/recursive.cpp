#include<bits/stdc++.h>
using namespace std;
int cnt=0;

class node
{
public:
    int nData;
    node* pLink;
};

//Function to display Linked List
// in reverse order using recursion
void Traverse( node* a)
    {
        //node* a;

        while(a!=NULL)
        {
            cout<<a->nData<<" ";
            a=a->pLink;
        }
        cout<<"\n";
    }
void displayLLReverse( node* p)
{
  //base condition for recursion
  if(!p)
    return;
  else
  {
    //call recursively
    displayLLReverse(p->pLink);
    printf("%d ", p->nData);
  }
}

int main()
{
  struct node* pNode1= NULL;
  struct node* pNode2= NULL;
  struct node* pNode3= NULL;

  //create node and assign data value
  pNode1 = (struct node *)malloc(sizeof(struct node *));
  pNode1->nData =10;

  pNode2 = (struct node *)malloc(sizeof(struct node *));
  pNode2->nData=20;

  pNode3 = (struct node *)malloc(sizeof(struct node *));
  pNode3->nData =30;

  //connecting nodes
  pNode1->pLink = pNode2;
  pNode2->pLink = pNode3;
  pNode3->pLink = NULL;

  //Display Linked List in reverse order using recursion
  //if first node is not null
  if(pNode1)
    cout<<endl;
  Traverse(pNode1);
  cout<<endl;
  displayLLReverse(pNode1);
  cout<<endl;
  Traverse(pNode1);
  cout<<endl;
  Traverse(pNode1);
  cout<<endl;
  displayLLReverse(pNode1);
  cout<<endl;
  Traverse(pNode1);
}
