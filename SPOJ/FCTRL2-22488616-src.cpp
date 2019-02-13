#include<bits/stdc++.h>
#define lli long long int

using namespace std;
int main(){
    int test,n;
    cin>>test;
    while(test--){
        cin>>n;
        int a[201]={};
        a[0]=1;
        int sum=0,carry=0;
        for (int fac = 1; fac <=n;fac++)
        {
            for (int j = 199; j>=0; j--)
            {
                sum=a[j]*fac;
                a[j]=sum%10;
                sum/=10;
                int k=j;
                carry=0;
                while(sum>0) {
                    a[++k]+=sum%10+carry;
                    carry=a[k]/10;
                    a[k]%=10;
                    sum/=10;
                    sum+=carry;
                    carry=0;                  
                }
            }
        }
        int i=199;
        while(a[i]==0) {
            i--;
        }
        for(;i>=0;i--)cout<<a[i];
        cout<<"\n";
    }
    return 0;
}