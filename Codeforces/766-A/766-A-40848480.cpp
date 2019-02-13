#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char a[100001],b[100001];
	scanf("%s %s",a,b);
	int str1=strlen(a);
	int str2=strlen(b);
	if(strcmp(a, b) == 0)cout<<"-1";
	else cout<<max(str1,str2);
}