#include<bits/stdc++.h>
using namespace std;

// Dynamic array using circular array ||
class Queue
{
public:
    int *a;
    int l,r,sz,arr_cap;
    Queue()
    {
        a = new int[1];
        arr_cap = 1;
        l=0;
        r=-1;
        sz=0;
    }

    //remove circular array and convert line array; O(n)
    void remove_circle()
    {
        
        if(l>r)
        {
            int *tmp = new int[arr_cap];
            int idx = 0;
            for(int i=l; i<arr_cap; i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            for(int i=0; i<=r; i++)
            {
                tmp[idx] = a[i];
                idx++;
            }
            swap(tmp, a);
            delete [ ] tmp;
            l = 0;
            r = arr_cap - 1;
        }  
    }
    
    //O(n)
    void increase_size()
    {
        remove_circle();
        // size increase
        int *tmp = new int[arr_cap*2];
        for(int i=0; i<arr_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(a,tmp);
        arr_cap = arr_cap*2;
        delete [] tmp;
    }

    //O(1)
    void enqueue(int val)
    {
        if( sz == arr_cap)
        {
            increase_size();
        }
        r++;
        if(r == arr_cap)
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
        if( l == arr_cap)
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

    cout<<"Size = "<<q.size()<<'\n';
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    q.enqueue(7);
    cout<<q.front()<<endl;
    
//    q.dequeue();
//    cout<<q.front()<<endl;
//    q.enqueue(8);
//    q.enqueue(9);
//    q.enqueue(10);

}
