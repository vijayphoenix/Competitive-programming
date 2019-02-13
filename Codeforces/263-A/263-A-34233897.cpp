#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  int n,count=0,i,j;
  while(1)
  {cin>>n;
    count++;
    if(n==1)break;
  }
  if(count%5==0)
  {i=count/5;j=5;}
  else
  {i=count/5+1;j=count%5;}
  int ans=abs(3-i)+abs(3-j);
  cout<<ans;
  return 0;
}