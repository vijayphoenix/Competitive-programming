#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	int a,b;
	cin>>a>>b;
	int p;
	p=7-max(a,b);
	if(p%6==0){printf("1/1");}
	else if(p%2==0){printf("%d/3",p/2);}
	else if(p%3==0){printf("%d/2",p/3);}
	else {printf("%d/6",p);}
	return 0;
}