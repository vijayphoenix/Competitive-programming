#include <iostream>
using namespace std;

int main() 
{
  int n,a=0,d=0;
  char c;
  cin>>n;
  while(n--)
  {
    cin>>c;
    if(c=='A')a++;
    if(c=='D')d++;
  }
  a>=d?(a==d?cout<<"Friendship":cout<<"Anton"):cout<<"Danik";
  return 0;
}