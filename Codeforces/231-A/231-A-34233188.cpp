#include <iostream>
using namespace std;

int main() 
{
  int n,m ,count=0,ans=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
   count=0;
   for(int j=0;j<3;j++)
   {
     cin>>m;
     if(m==1)count++;
   }
   if(count>1)ans++;
  }
  cout<<ans;
  return 0;
}