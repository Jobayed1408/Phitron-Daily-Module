#include<bits/stdc++.h>
using namespace std;

int merge_sort(vector<int>a, int k)
{
    if(a.size()<=1) return 0;

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

    int sorted_right[mid] = merge_sort(right,k);
    vector<int>sorted_left = merge_sort(left,k);



    vector<int>sorted_a;
    int index1=0;
    int index2=0;
    int res=0;
    for(int i=0; i<a.size(); i++)
    {

//        if(index1==sorted_left.size())
//        {
//            sorted_right[index2]+sorted_left[index1];
//            index2++;
//        }
//        else if(index2==sorted_right.size())
//        {
//            sorted_left[index1]+sorted_right[index2];
//            index1++;
//        }
//        else if(sorted_left[index1] < sorted_right[index2])
//        {
//            sorted_a.push_back(sorted_left[index1]);
//            index1++;
//        }
//        else
//        {
//            sorted_a.push_back(sorted_right[index2]);
//            index2++;
//        }
//        cout<<"Size : "<<sorted_a.size()<<" \n";
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
        sum = sorted_left[index1] + sorted_right[index2];
        index1++;

        if(sum == k)
        {
            //cout<<"YES\n";
            return res = 1;

        }
        int index3=0;
        if(index1 == sorted_left.size())
        {
            index2++;
            sum = sorted_left[index3] + sorted_right[index2];
        }
        if((index1==sorted_left.size())&&index2 = sorted_right.size())
            return res;
//
    }
    return res;

}

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    int k;
    cin>>k;
    int ans = merge_sort(a,k);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

