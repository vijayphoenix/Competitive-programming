#include<bits/stdc++.h>
#define lli long long int
bool a[1000001]={};
bool prime[1000001]={};

using namespace std;
int main(){
	int test;
	scanf("%d",&test);
	lli i=2;		
		vector<lli> v;
		a[0]=a[1]=true;
		while(i<=1e6){
			for (lli j = i*i; j <= 1e6; j+=i)
			{
				a[j]=true;
			}
			v.push_back(i);
			i++;
			while(a[i]!=false) {
			    i++;
			}
		}
		// for (int i = 0; i < v.size(); i++) 
  //       cout << v[i] << " "; 

	while(test--) {
		lli p,q;
		scanf("%lli%lli",&q,&p);
		for (lli k = 0; k <=1e6; ++k)
			prime[k]=false;
		if(q<2)q=2;
		for (auto it = v.begin(); it < v.end()&& *it**it<=p;it++){
			lli j=ceil((double)q/(*it))**it;
			//cout<<j<<" ";
			if(j==*it)j+=j;
			for(; j <= p; j+=*it)
				prime[j-q]=true;			
		}
		for(lli j = q; j <=p; ++j){ 
				//cout<<"bdsc\n";
			if (prime[j-q]==false)
			{
				printf("%lli\n",j);;
			}
		}
	}
	return 0;
}