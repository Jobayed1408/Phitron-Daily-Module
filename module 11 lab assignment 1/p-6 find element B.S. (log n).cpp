#include<bits/stdc++.h>
using namespace std;

int binary(int a[], int low, int high,  int k)
{
    while(low<=high)
    {
        int mid = (low+high)/2;
        if((a[mid]==k && a[mid-1]==k) || (a[mid]==k && a[mid+1]==k))
        {
            return 1;

        }
        if(a[mid] > k)
        {
            high = mid-1;

        }
        else{
            low = mid+1;
        }
    }
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
    int k, low=0, high=n-1;
    cin>>k;
    int res = binary(a, low, high, k);
    if(res==1) cout<<"YES\n";
    else cout<<"NO\n";

}

