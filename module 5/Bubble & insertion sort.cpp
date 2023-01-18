#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<n; i++)
    {
        int last = i;
        int idx = 0;
        while(idx<last)
        {
            if(a[last]>a[last-1])
            {
                swap(a[last],a[last-1]);

            }
            else break;
            last --;
        }
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";

    }
//    sort(a.rbegin(),a.rend());
//    for(int i=0; i<n; i++)
//        {
//            cout<<a[i]<<" ";
//        }
//        cout<<"\n";

}
