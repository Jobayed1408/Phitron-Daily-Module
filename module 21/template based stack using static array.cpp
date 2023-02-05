//Stack using static array||||

#include<bits/stdc++.h>
using namespace std;
const int max_size = 500;

template<class T>
class Stack{
public:
	int stack_size;
	T a[max_size];
	Stack()
	{
		stack_size = 0;
	}
	
	void Push(T val)
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
		stack_size--;
	}
	
	T Top()
	{
		if(stack_size == 0)
		{
			cout<<"Stack  is empty!\n";
			T a;
			return a;
		}
		return a[stack_size - 1];
	}
	
};

int main()
{
	Stack<int>st;
	st.Push(5);
//	cout<<st.Top()<<"\n";
	st.Push(4);
//	cout<<st.Top()<<"\n";
	st.Push(8);
//	cout<<st.Top()<<"\n";
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
	
	Stack<string>st2;
	st2.Push("abc");
	st2.Push("bch");
	st2.Push("nvd");
	cout<<st2.Top()<<'\n';
	st2.Pop();
	cout<<st2.Top()<<'\n';
	st2.Pop();
	cout<<st2.Top()<<"\n";
}