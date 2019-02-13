#include<bits/stdc++.h>
#define lli long long int

using namespace std;
int main(){
	int test;
	string s;
	cin>>test;
	while(test--){
		cin>>s;
		int i=0;
		while(s[i]!='.'&& i<s.length())i++;
		if(i==s.length()){
			cout<<"1\n";
			continue;
		}
		string r= s.substr(i+1,4);
		int t = atoi(r.data());
		int temp=pow(10,r.length());
		int gcd=__gcd(t,temp);
		cout<<temp/gcd<<"\n";

	}
	return 0;
}