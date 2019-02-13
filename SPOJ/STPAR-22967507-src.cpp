#include<bits/stdc++.h>
#define lli long long int

using namespace std;
int main(){
	int n,x;
	cin>>n;
	while(n){
		stack<int>s;
		bool flag=true;
		int min=1;
		for (int i = 0; i < n; ++i)
		{
			cin>>x;
			if(x==min)min++;
			else if(!s.empty() and s.top()<x)flag=false;
			else if(flag)s.push(x);
			while(!s.empty() and s.top()==min){
				s.pop();min++;
			}
		}
		flag?cout<<"yes\n":cout<<"no\n";
		cin>>n;
	}
	return 0;
}