#include <iostream>
using namespace std;
int main() 
{
  char c[100];
  c[0]=getchar();
  int small=0,large=0,i=0;
  while(c[i]!='\n')
  {
    if(c[i]<='z' && c[i]>='a')small++;
    else large++;
    i++;
    c[i]=getchar();
    
  }
  if(small>=large)
  {for(int j=0;j<i;j++)
    {
      if(c[j]<='Z' && c[j]>='A')c[j]+='a'-'A';
      cout<<c[j];
    }
  }
  else
  {for(int j=0;j<i;j++)
    {
      if(c[j]<='z' && c[j]>='a')c[j]-='a'-'A';
       cout<<c[j];
    }
  }
  return 0;
}