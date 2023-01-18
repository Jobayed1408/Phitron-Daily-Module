#include<bits/stdc++.h>
using namespace std;

int binary(int a[], int low, int high,  int k)
{
    //bool flag = 0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==k)
        {
//            cout<<"Yes\n"; // "<<mid<<"\n";
//            flag = 1;
//            break;
            cout<<"L "<<low<<"  R "<<high<<" m \n";
            return mid;

        }
        if(a[mid] > k)
        {
            high = mid-1;
            //return binary(a, low, mid-1, k);

        }
        else{
            low = mid+1;
            //return binary(a, mid+1, high, k);
        }
    }
//    if(flag == 0)
//    {
//        cout<<"No\n"; //<<endl;
//        //return;
//    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" \n";
    int k, low=0, high=n-1;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int s;
        cin>>s;
        cout<<binary(a, low, high, s)<<"\n";

    }
    //cout<<binary(a, low, high, k);


}

/*
5
6 3 2 1 8
4
1 5 2 9

*/
