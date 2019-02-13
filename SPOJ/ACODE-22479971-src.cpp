#include <iostream>
using namespace std;
int countDecodingDP(string &digits, int n)
{
    int count[n+1];
    count[0] = 1;
    count[1] = 1;
 
    for (int i = 2; i <= n; i++)
    {
        count[i] = 0;
        if (digits[i-1] > '0')
            count[i] = count[i-1];
 
        if (digits[i-2] == '1' || (digits[i-2] == '2' && digits[i-1] < '7') )
            count[i] += count[i-2];
    }
    return count[n];
}
int main()
{
    string digits;
    while(cin>>digits)
    {
        if(digits[0]=='0')return 0;
        else cout<<countDecodingDP(digits, digits.length())<<"\n";
    }
}