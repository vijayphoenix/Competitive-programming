#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
  char s[100],r[100];
  scanf("%s %s",&s,&r);
  int k,l=strlen(s);
  for(int i=0;i<l;i++)
  { 
    k=( ((s[i]%'a')%'A')-((r[i]%'a')%'A'));
    if(k>0){cout<<1;return 0;}
    if(k<0){cout<<-1;return 0;}
  }
  cout<<0;
  return 0;
}