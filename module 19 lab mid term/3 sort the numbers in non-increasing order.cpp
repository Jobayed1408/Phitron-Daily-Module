#include<bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int>&a)
{
    if(a.size()<=1) return a;
    int pivot = (rand()) % (a.size());
    vector<int>left,right;
    for(int i=0;i<a.size();i++)
    {
        if(i==pivot) continue;

        if(a[i]>a[pivot]) left.push_back(a[i]);
        else right.push_back(a[i]);
    }
    vector<int>sorted_left = quick_sort(left);
    vector<int>sorted_right = quick_sort(right);
    vector<int>sorted_a;

    for(int i=0;i<sorted_left.size();i++)
        sorted_a.push_back(sorted_left[i]);

    sorted_a.push_back(a[pivot]);

    for(int i=0;i<sorted_right.size();i++)
        sorted_a.push_back(sorted_right[i]);

    return sorted_a;

}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> ans = quick_sort(v);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";

    }
}
