//Stack using static array||||

#include<bits/stdc++.h>
using namespace std;
const int max_size = 500;

class Stack{
public:
	int stack_size;
	int a[max_size];
	Stack()
	{
		stack_size = 0;
	}
	
	void Push(int val)
	{
		if(stack_size-1>max_size)
		{
			cout<<"Stack is full!\n";
			return;
		}
		stack_size++;
		a[stack_size-1] = val;
	}
	
	void Pop()
	{
		if(stack_size == 0)
		{
			cout<<"Stack is empty!\n";
			return;
		}
		a[stack_size-1] = 0;
		stack_size--;
	}
	
	int Top()
	{
		if(stack_size == 0)
		{
			cout<<"Stack  is empty!\n";
			return -1;
		}
		return a[stack_size - 1];
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
}