#include<bits/stdc++.h>
using namespace std;

const int max_size = 5;

template<class T>
class Queue
{
public:
	T a[max_size] ;
	int l,r,sz;
	Queue()
	{
		l=0;
		r=-1;
		sz=0;
	}
	 //O(1)
	void enqueue(T val)
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
	T front()
	{
		if( sz == 0) 
		{
			T tmp;
			return tmp;
		}
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
	Queue<int> q;
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
//	q.dequeue();
//	cout<<q.front()<<endl;
	queue<char>qt;
	qt.enqueue('a');
	qt.enqueue('b');
	cout<<qt.front()<<'\n';
	qt.dequeue();
	cout<<qt.front()<<'\n';
	
}