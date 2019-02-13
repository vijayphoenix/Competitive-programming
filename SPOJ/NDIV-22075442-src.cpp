#include<bits/stdc++.h>
using namespace std;
int prime[10000]={};
int total=0;

int sieve(int n){
	bool arr[100000]={};
	int i=0,j=0;
	//memset(arr, true, sizeof(arr));
	for(i=2;i<n;i++){
		if(arr[i]==0){
		    prime[total]=i;
		    total++;
			for(j=2*i;j<n;j+=i)arr[j]=1;
		}
	}
	//for(int i=0; i<total; i++)std::cout<<prime[i]<<" ";
   // cout<<"\n";      
}

int main(){
	int a,b,n,temp=0,ans=0;
	cin>>a>>b>>n;
	int num[b-a+1];
	for(int i=a;i<=b;i++)num[i-a]=i;
	int fac[b-a+1];
	for(int i=a;i<=b;i++)fac[i-a]=1;
	sieve((int)(sqrt(b)+1));
	for(int i=0;i<b-a+1;i++){
	    //std::cout<<"CHeecking"<<num[i]<<"\n";
	    for(int j=0;j<total;j++){
	        temp=0;
	        //std::cout<<"Checking with"<<prime[j]<<"\n";
	        if(num[i]%prime[j]==0)temp++;
	        while(num[i]%prime[j]==0){
	            //std::cout<<"Ghush gaya"<<" ";
	            num[i]/=prime[j];
	            temp++;
	        }
	        //std::cout<<"temp:"<<temp<<"\n";
	        if(temp!=0)fac[i]*=temp;
	    }
	    if(num[i]!=1)fac[i]*=2;
	}
	for(int i=a;i<=b;i++){
	    //cout<<"("<<i<<", "<<fac[i-a]<<")\n";
	    if(fac[i-a]==n)ans++;
	}
	cout<<ans;
}