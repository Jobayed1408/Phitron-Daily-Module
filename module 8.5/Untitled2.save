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
        cout<<"Size : "<<sorted_a.size()<<" \n";
        //cout<<"Right_size : "<<sorted_right.size()<<" \n";
//        for(int i=0; i<sorted_left.size(); i++)
//        {
//            cout<<sorted_left[i]<< " ";
//        }
//        cout<<endl;
//        for(int i=0; i<sorted_right.size(); i++)
//        {
//            cout<<sorted_right[i]<< " " ;
//        }
        for(int f=0; f<sorted_a.size(); f++)
        {
            cout<<sorted_a[f]<< " " ;
        }
        cout<<endl;
    }
    return sorted_a;

}

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    vector<int> ans = merge_sort(a);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

