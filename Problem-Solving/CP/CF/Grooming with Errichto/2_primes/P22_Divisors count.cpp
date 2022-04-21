//acc
#include<bits/stdc++.h>
using namespace std;
int numberOfDiv(int n)
{
    int NOD = 1,a;
    for(int i=2; i*i<=n; i++)
    {
        a = 0;
        if(n%i == 0)
        {
            while(n%i == 0)
            {
                a++;
                //cout<<n<<endl;
                n/=i;
            }
        }
        NOD *= (a+1);
    }
    if(n>1)
    {
        NOD *= 2;
    }
    //cout<<endl;
    return NOD;
}
int main()
{
    long long int n,ans = 0;
    scanf("%I64d",&n);
    for(int i=1; i<=n; i++)
    {
        //cout<<"NOD("<<i<<")="<<numberOfDiv(i)<<"\n";
        ans+=numberOfDiv(i);
    }
    printf("%I64d\n",ans);
    return 0;
}
