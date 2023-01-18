////Insert && Delete in specific position in an array;
////Insert

#include<bits/stdc++.h>
using namespace std;

class Array{
private:
    int *arr;
    int cap;
    int sz;
    void increase_size()
    {
        cap*=2;
        int *tmp = new int[cap];
        for(int i=0;i<sz;i++)
        {
            tmp[i] = arr[i];
        }
        delete [] arr;
        arr = tmp;
    }

public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;

    }
    void push(int x)
    {
        if(cap == sz)
        {
            increase_size();
        }
        arr[sz] = x;
        cout<<sz<<"\n";
        sz++;
    }

    void insert_element(int pos , int val)
    {
        if(cap == sz)
        {
            increase_size();
        }
        for(int i=sz-1;i>=pos;i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] = val;
        sz++;
    }

    void print()
    {
        for(int i=0;i<sz;i++)
        {
            cout<< arr[i]<<" ";
        }
        cout<<"\n";
    }

    int getsize()
    {
        return sz;
    }
    int getElement(int idx)
    {
        if(idx>=sz)
        {
            cout<<"Error! "<<idx<<" is out of bound \n";
            return -1;
        }
        return arr[idx];
    }

    void pop(int pos)
    {
        if(sz==0)
        {
            cout<<"Current size doesn't exist.\n";
        }
        sz--;
    }
    void Erase(int pos)
    {
        if(pos>=sz)
        {
            cout<<"Current size doesn't exist.\n";
            return;
        }
        for(int i=pos;i<sz-1;i++)
        {
            arr[i] = arr[i+1];
        }
        sz--;
    }


};

int main()
{
    Array a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.insert_element(2,25);

    a.print();
//    cout<<a.getsize()<<"\n";
//
//    for(int i=0;i<a.getsize();i++)
//    {
//        cout<<a.getElement(i)<<"\n";
//    }
    a.pop(2);
    a.print();
    a.Erase(1);
    a.print();


}












