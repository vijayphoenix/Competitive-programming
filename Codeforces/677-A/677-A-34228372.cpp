#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,h,temp,count=0;
  cin>>n>>h;
  for (int i = 0; i < n; ++i)
  {
    cin>>temp;
    if(h<temp)count++;
    count++;
  }
  cout<<count;
  return 0;
}