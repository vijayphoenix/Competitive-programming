#include "stdio.h"
#include "string.h"
#include "math.h"
#include "stdlib.h"
#include "algorithm"
#include "iostream"
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=-1)
    {
        int x,y,ans=0;
        scanf("%d",&x);
        n--;
        while(n--)
        {
            scanf("%d",&y);
            if(y!=x)
                ans++;
            x=y;
        }
        printf("%d\n",ans+1);
    }
}