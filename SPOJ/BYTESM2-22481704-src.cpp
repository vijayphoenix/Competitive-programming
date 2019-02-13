#include<bits/stdc++.h>
#define lli long long int

using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test,n,m;
    cin>>test;
    while(test--){
        cin>>n>>m;
        int a[n][m];
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cin>>a[i][j];
            }
        }
        int dp[n][m]={};
        int temp;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (i==0)dp[i][j]=a[i][j];
                else{
                    temp=dp[i-1][j];
                    if (j-1>=0)temp=max(temp,dp[i-1][j-1]);
                    if(j+1<m)temp=max(temp,dp[i-1][j+1]);
                    dp[i][j]=a[i][j]+temp;
                }
            }
        }
        for (int i = 0; i < m; ++i)
        {
            temp=max(temp,dp[n-1][i]);
        }
        cout<<temp<<"\n";
    }
    return 0;
}