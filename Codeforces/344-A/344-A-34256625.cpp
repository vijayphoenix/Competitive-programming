#include <iostream>
using namespace std;

int main() 
{
  int n,a,temp=0,count=0;
  cin>>n;
  while(n--)
  {
    scanf("%d",&a);
    if(a!=temp){count++;}
    temp=a;
  }
  cout<<count;
  return 0;
}