#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
	int n,i=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)cin>>a[i];
	int m,p,q;
	cin>>m;
	while(m--)
	{
		scanf("%d %d",&p,&q);
		p--;
		p-1!=-1?a[p-1]+=q-1:1;
		p+1!=n?a[p+1]+=a[p]-q:1;
		a[p]=0;
		
	}
	for(i=0;i<n;i++)cout<<a[i]<<endl;
    return 0;
}