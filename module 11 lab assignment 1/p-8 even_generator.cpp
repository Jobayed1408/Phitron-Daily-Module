#include<bits/stdc++.h>
using namespace std;

vector<int> even_generator(vector<int>a)
{
    vector<int>v;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
            v.push_back(a[i]);
    }
    return v;
}

int main()
{

    vector<int>a={1,2,3,4,5};

    vector<int>res = even_generator(a);

    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;
}
