#include<iostream>
#include<cmath>
#define lli long long int
int main() {
    
    lli a[1000001];
    for(int i = 0; i < 1000001; i++)a[i]= (lli)i*i;
    int t;
    scanf("%d",&t);
    while (t--) {
      lli n,x;
      scanf("%lld",&n);
      int i=0, j = sqrt(n);
		x = a[i] + a[j];
      while (i <= j) {
        x = a[i] + a[j];
        if (x == n)break;
        if (x < n)i++;
        else j--;
      }
      i<=j?printf("Yes\n"):printf("No\n");
    }
    return 0;
}