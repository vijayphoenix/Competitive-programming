#include <iostream>
using namespace std;

int main() 
{
  int n,a,temp=0,count=0;
  scanf("%d",&n);
  while(n--)
  {
    scanf("%d",&a);
    if(a!=temp){count++;}
    temp=a;
  }
  printf("%d",count);
  return 0;
}