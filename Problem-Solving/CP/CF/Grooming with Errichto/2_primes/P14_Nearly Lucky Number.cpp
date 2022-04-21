//acc
#include<bits/stdc++.h>
using namespace std;
#define I64 long long int

void nearlyLucky(I64 n)
{
    int luckyDigit = 0, digit;
     while(n)
    {
        digit = n%10;
        //cout<<digit<<endl;
        n/=10;
        if(digit == 4 || digit == 7) luckyDigit++;

    }

    if(luckyDigit == 4 || luckyDigit == 7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main()
{
    I64 n;
    scanf("%I64d",&n);
    nearlyLucky(n);
    return 0;
}
