
#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>a)
{
    if(a.size()<=1) return a;

    int mid = a.size()/2;

    vector<int>left;
    vector<int>right;

    for(int i=0; i<mid; i++)
    {
        left.push_back(a[i]);
    }
    for(int i=mid; i<a.size(); i++)
    {
        right.push_back(a[i]);
    }

    vector<int>sorted_right = merge_sort(right);
    vector<int>sorted_left = merge_sort(left);

    vector<int>sorted_a;
    int index1=0;
    int index2=0;


    for(int i=0; i<a.size(); i++)
    {

        if(index1==sorted_left.size())
        {
            sorted_a.push_back(sorted_right[index2]);
            index2++;
        }
        else if(index2==sorted_right.size())
        {
            sorted_a.push_back(sorted_left[index1]);
            index1++;
        }
        else if(sorted_left[index1] < sorted_right[index2])
        {
            sorted_a.push_back(sorted_left[index1]);
            index1++;
        }
        else
        {
            sorted_a.push_back(sorted_right[index2]);
            index2++;
        }
    }

    return sorted_a;

}

int main()
{
    int n;
    cin>>n;
    vector<int>ar1(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar1[i];
    }
    int m;
    cin>>m;
    vector<int>ar2(m);
    for(int i=0;i<m;i++)
    {
        cin>>ar2[i];
    }
    vector<int>recev1 = merge_sort(ar1);
    vector<int>recev2 = merge_sort(ar2);
    int i=0, j=0;
    while(i<recev1.size())
    {
        if(recev1[i]>recev2[j])
        {
            j++;
        }
        else if(recev1[i]<recev2[j])
        {
            i++;
        }
        else if(recev1[i] == recev2[j])
        {
            recev1.erase(recev1.begin());
            recev2.erase(recev2.begin());
        }
    }

    if(recev1.size()==0 || recev2.size()==0)
    {
        cout<<"YES\n";

    }
    else
    {
        cout<<"NO\n";
    }

}
