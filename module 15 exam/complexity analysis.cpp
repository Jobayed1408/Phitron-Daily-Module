#include<bits/stdc++.h>
using namespace std;
int main()
{

int n=2000;

for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
        cout<< i <<"\n";
        cout<< (n/i) <<"\n";
    }
}
cout<<sqrt(n);

}