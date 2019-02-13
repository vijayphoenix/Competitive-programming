#include <iostream>
using namespace std;

int main() 
{
  int n,count=0;
  char temp='a',c;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>c;
    if(temp!=c){count++;}
    temp=c;
  }
  cout<<n-count;
  return 0;
}