#include<bits/stdc++.h>
using namespace std;

template<class T>
class Stack
{
public:
    T *a;
    int sz;
    int cap;
    Stack()
    {
        a = new T[1];
        sz=0;
        cap=1;
    }

    void increase_size()
    {
        T *tmp;
        tmp = new T[cap*2];
        for(int i=0; i<cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(a,tmp);
        delete []tmp;
        cap*=2;
    }
    
    void decrease_size()
    {
        T *tmp;
        tmp = new T[cap/2];
        for(int i=0; i<cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(a,tmp);
        delete []tmp;
        cap/=2;
    }

    void push(T val)
    {
        if(sz+1 > cap)
        {
            increase_size();
//			cout<<"Stack is full!\n";
//			return;
        }
        else if(sz < cap/2)
	   {
	   	decrease_size();
	   }
        sz++;
        a[sz-1] = val;

    }

    void pop()
    {
        if(sz == 0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
	   if(sz < cap/2)
	   {
	   	decrease_size();
	   }
        sz--;
    }

    T top()
    {
        if(sz <= 0 )
        {
            cout<<"Stack is empty!\n";
//			assert(false);
//            T a;
            return -1 ;
        }
//        else if(sz < cap/2)
//	   {
//	   	decrease_size();
//	   }
        return a[sz - 1];
    }

};

int main()
{
    Stack<double>st;
    st.push(5.4);
//    cout<<st.top()<<'\n';
    st.push(4.4);
//    cout<<st.top()<<'\n';
    st.push(6.4);
    cout<<st.top()<<'\n';
    st.pop();
    cout<<st.top()<<'\n';
    st.pop();
    cout<<st.top()<<'\n';
    st.pop();
    cout<<st.top()<<'\n';
}
