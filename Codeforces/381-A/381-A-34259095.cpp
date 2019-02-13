#include <iostream>
using namespace std;

int main() 
{
  int n,i=0,s=0,d=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)scanf("%d",&a[i]);
  int top=n-1,bottom=0,temp;
  for(i=0;i<n;i++)
  {
    a[top]>a[bottom]?(temp=a[top--]):(temp=a[bottom++]);
    i%2==0?(s+=temp):(d+=temp);
  }
  cout<<s<<" "<<d;
  return 0;
}