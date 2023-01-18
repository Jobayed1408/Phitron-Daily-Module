#include<bits/stdc++.h>
using namespace std;
int n;
int cnt=0;

vector<int> merge_sort(vector<int>a, int k)
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

    vector<int>sorted_right = merge_sort(right,k);
    vector<int>sorted_left = merge_sort(left,k);

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
    if(sorted_a.size() == n)
    {
        int i = 0, j= sorted_a.size()-1;
        while(i<j)
        {
            if(sorted_a[i] + sorted_a[j]>k) j--;
            else if(sorted_a[i] + sorted_a[j]<k) i++;
            else
            {
                cnt++;
                i++;
            }

        }

    }

    return sorted_a;

}

int main()
{
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    int k;
    cin>>k;

    vector<int> ans = merge_sort(a , k);
    cout<<cnt<<endl;
}

