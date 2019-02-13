#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
  string s,r;
  cin>>s>>r;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]>='A'&&s[i]<='Z')s[i]+='a'-'A';
  }
  for(int i=0;i<r.size();i++)
  {
    if(r[i]>='A'&&r[i]<='Z')r[i]+='a'-'A';
  }
  for(int i=0;i<s.size();i++)
  {
    if(s[i]>r[i]){cout<<1;return 0;}
    if(s[i]<r[i]){cout<<-1;return 0;}
  }
  cout<<0;
  return 0;
}
// 97 122 65 90