#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //Time complexity  = o(n^2)
    //Space complexity = o(n )

    for(int i=1; i<n; i++)
    {
        //bool sorted = true;
        int idx = i;
        while(idx>=1)
        {
            if(a[idx-1] > a[idx])
            {
                swap(a[idx], a[idx-1]);
            }
            else break;
            cout<<"idx "<<idx<<"\n";
            idx--;
        }
        //if(sorted) break;
        for(int i=0; i<n; i++)
        {

            cout<<a[i]<<" ";
        }
        cout<< "\n";
    }
    cout<<endl;

}
