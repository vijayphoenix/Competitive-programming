#include <iostream>
using namespace std;

int main() 
{
  int n,m ,count=0;
  cin>>n>>m;
  while(1)
  {
    if(n>m)break;
    n*=3;
    m*=2;
    count++;
  }
  cout<<count;
  return 0;
}