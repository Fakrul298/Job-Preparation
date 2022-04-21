//acc
#include<bits/stdc++.h>
using namespace std;

string decimalToBinary(long long int n)
{
    int rem;
    string s;
    s = "";
    while(n)
    {
        rem = n%2;
        char c = rem + '0';
        s = c + s;
        n/=2;
    }
    int si = s.size();
    int k = 32 - si;
    string zeros;
    zeros = "";
    for(int i = 0; i<k; i++) zeros += '0';

    s = zeros + s;
    return s;
}

long long int binaryToDecimal(string s, int n)
{
    long long int ans = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1')
            ans += pow(2,(n-(i+1)));
    }

    return ans;
}
int main()
{
    int q;
    scanf("%d",&q);
    long long int n;
    string s1;
    for(int i=0; i<q; i++)
    {
        scanf("%lld",&n);
        s1 = decimalToBinary(n);
        int n = s1.size();
        for(int i=0; i<n; i++)
        {
            if(s1[i] == '0') s1[i] = '1';
            else s1[i] = '0';
        }
       // cout<<s1<<endl;
        long long int ans = binaryToDecimal(s1,n);

        printf("%lld\n",ans);
    }

    return 0;
}
