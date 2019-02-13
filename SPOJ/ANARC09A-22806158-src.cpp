#include<bits/stdc++.h>
#define lli long long int

using namespace std;
int main(){
	int test=1;
	string s;
	cin>>s;
	for (;s[0]!='-';test++)
	{
		int changes=0;
		stack<char>st;
		int open=0,close=0;
		for (int i = 0;s[i]; i++)
		{
			if(s[i]=='}'){
				if(st.empty()==false and st.top()=='{')st.pop();
				else st.push('}');
			}
			else
				st.push('{');
		}
		while(!st.empty()){
			if(st.top()=='{')open++;
			else close++;
			st.pop();
		}
		changes=open/2+close/2;
		if (open%2==1)changes+=2;
		cout<<test<<". "<<changes<<"\n";
		cin>>s;
	}
	return 0;
}