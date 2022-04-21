//acc
#include<bits/stdc++.h>
using namespace std;

bool nearlyLucky(long long int n)
{
    int digit, lucky = 0;
    while(n)
    {
       digit = n%10;
       //cout<<digit<<" ";
       n/=10;
       if(digit == 4 || digit == 7) lucky++;
    }
    if(lucky == 4 || lucky == 7) return true;
    else return false;
}
int main()
{
    long long int n;
    cin>>n;
    if(nearlyLucky(n) == true) printf("YES\n");
    else printf("NO\n");
    return 0;
}
