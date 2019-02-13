#include <bits/stdc++.h>
using namespace std;

#define Debug(x) std::cout<<(#x)<<":"<<x<<"\n"
int main() 
{
	int test,len,value;
	unsigned long long int ans;
	cin>>test;
	char s[65];
	for(int t=1; t<=test; t++){
		cin>>s;
		len=strlen(s);
		//std::cout<<len<<"\n";
		int abc[36]={};
		for(int i=0;i<36;i++)
		{
			abc[i]=-1;
		}
		bool find=false;
		value=0;
		for(int i=0;i<len;i++){
			if((s[i]<='9'&&s[i]>='0')&&(abc[s[i]-'0']==-1)){
				if(value==0)
				{
				abc[s[i]-'0']=1;
				value++;
				}
				else if(value==1)
				{
					abc[s[i]-'0']=0;
				value++;
				}
				else{
					abc[s[i]-'0']=value;
					value++;
				}
				
			}
			else if(abc[s[i]-'a'+10]==-1){
				if(value==0)
				{
				abc[s[i]-'a'+10]=1;
				value++;
				}
				else if(value==1)
				{
					abc[s[i]-'a'+10]=0;
				value++;
				}
				else{
					abc[s[i]-'a'+10]=value;
					value++;
				}
			}
			// Debug(i);
			// Debug(s[i]);
			// Debug(value);
		}
		ans=0;
		// for(int i=0; i<36; i++){
		// 	std::cout<<"(i:"<<i<<", "<<abc[i]<<") ";
		// }
		if(value==1){value=2;}
		//std::cout<<value<<"\n";
		for(int i=0;i<len;i++){
			if (s[i]<='z'&&s[i]>='a' && (abc[s[i]-'a'+10]!=-1))
			{
				//std::cout<<"HI"<<abc[s[i]-'a'+10]<<"\n";
				ans+=abc[s[i]-'a'+10];
				ans*=value;
			}
			else if ((abc[s[i]-'0']!=-1))
			{
				ans+=abc[s[i]-'0'];
				ans*=value;
			}
			//std::cout<<ans/value<<"\n";
		}
		std::cout<<"Case #"<<t<<": "<<(ans/value)<<"\n";
		//cout<<ans/value<<"\n";
	}

}