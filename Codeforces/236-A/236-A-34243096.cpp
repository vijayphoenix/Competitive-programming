#include <iostream>
#include <algorithm>

using namespace std;
int main() 
{
  int a[26]={0};
  int sum=0;
  char c;  c=getchar();
  while(c!='\n')
  {
    a[c%'a']=1;
    c=getchar();
  }
  for(int i=0;i<26;i++) sum+=a[i];
  (sum%2==0)?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
  
}