#include <stdio.h>
main()
{
	int n,x,i;
	x=0;
	scanf("%d",&n);
	char a[4];
	for (i=0;i<n;i++)
	{  scanf("%s",a);
	  	if(a[1]=='+')
	  	x++;
	  	else x--;
	  }
    printf("%d",x);
}