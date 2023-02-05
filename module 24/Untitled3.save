#include<bits/stdc++.h>
using namespace std;

const int max_size = 5;

class Queue
{
public:
	int a[max_size] ;
	int l,r,sz;
	Queue()
	{
		l=0;
		r=-1;
		sz=0;
	}
	 //O(1)
	void enqueue(int val)
	{
		if( sz == max_size)
		{
			cout<<"Queue is empty!\n";
			return;
		}
		r++;
		if(r == max_size)
		{
			r = 0;
		}
		a[r] = val;
		sz++;
	}
	
	//O(1)
	void dequeue()
	{
		if( sz==0 )
		{
			cout<<"Queue is empty!\n";
			return;
		}
		l++;
		if( l == max_size)
		{
			l=0;
		}
		sz--;
	}
	
	//O(1)
	int front()
	{
		if( sz == 0) return -1;
		return a[l];
	}
	
	//O(1)
	int size()
	{
		return sz;
		//return n-l+r+1;
	}
	
};

int main()
{
	Queue q;
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);
	q.enqueue(8);
	q.enqueue(9);
	
	cout<<"Size = "<<q.size()<<'\n';
	cout<<q.front()<<endl;
	q.dequeue();
	q.enqueue(10);
	cout<<q.front()<<endl; 
	q.dequeue();
	cout<<q.front()<<endl;
	q.dequeue();
	cout<<q.front()<<endl;
	q.dequeue();
	
	cout<<q.front()<<endl;
	
}