
#include<bits/stdc++.h>
using namespace std;

int euclid_gcd(int a, int b)

{
	//int dividend, dividor, remainder;
//	int dividend = a>=b? a:b;
//	int divisor = b<=a?b : a;
//	while(divisor!=0)
//	{
//		i.t remainder = dividend%divisor;
//		dividend = divisor;
//		divisor = remainder;
//	}
//	return dividend;
	while(a!=0)
	{
		int r = b%a;
		b  = a;
		a = r;
	}
	return b;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<euclid_gcd(a,b);
}
