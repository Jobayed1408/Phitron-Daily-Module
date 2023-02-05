#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	stack<char>st;
	for(int i=0;i<n;i++)
	{
		if(st.empty())
		{
			st.push(s[i]);
//			cout<<st.top();
		}
		else
		{
			if(!st.empty() && st.top()=='(' && s[i]==')' ) 
				{
//					cout<<st.top()<<"\n ";
					st.pop();
				}
			else st.push(s[i]);
			
		}
	}
	int o=0,c=0;
	while(!st.empty())
	{
		if(st.top() == ')') c++;
		else o++;
//		cout<<st.top()<<"\n";
		st.pop();
	}
	if(o==0 and c==0 )
		cout<<"yes\n";
	else if( o==1 and c==1) cout<<"yes\n";
	else cout<<"no\n";
	
}