#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
  string s,r;
  cin>>s>>r;
  int k;
  for(int i=0;i<s.size();i++)
  { 
    k=( ((s[i]%'a')%'A')-((r[i]%'a')%'A'));
    if(k>0){cout<<1;return 0;}
    if(k<0){cout<<-1;return 0;}
  }
  cout<<0;
  return 0;
}
// 97 122 65 90