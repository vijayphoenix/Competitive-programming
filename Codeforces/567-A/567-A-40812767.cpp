#include <iostream>
using namespace std;

int main() {
  int n,i=0,sum=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)cin>>a[i];
  cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<"\n";
  for(i=1;i<n-1;i++)
  cout<<min(a[i+1]-a[i],a[i]-a[i-1])<<" "<<max(a[i]-a[0],a[n-1]-a[i])<<"\n";
  cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<"\n";
}