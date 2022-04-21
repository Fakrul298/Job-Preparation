#include<bits/stdc++.h>
using namespace std;
string to_binary(int n)
{
    string s="";
    while(n)
    {
        //cout<<n%2+'0'<<endl;
        s += (n&1) + '0';
        n=(n>>1);
    }
    reverse(s.begin(),s.end());
    return s;
}
void naive()
{
    int n,S;
    cin>>n>>S;
    int a[n];
    int permut = (1<<n);
    vector<int>indx;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<permut; i++)//2^n
    {
        string bin = to_binary(i), pre = "";//log(n)
        int preLen = n-bin.size();
        for(int j=0; j<preLen; j++)//n
            pre+='0';
        bin = pre + bin;
        //cout<<bin<<endl;
        int sum = 0;
        for(int k=0; bin[k]; k++)//n
        {
            sum += ((bin[k]=='1')?a[k]:0);
            if(bin[k] == '1')
                indx.push_back(k+1);
        }
        //cout<<sum<<endl;
        if(sum == S)
        {
            for(auto i: indx)
                cout<<i<<" ";
        }
        cout<<"\n";
        indx.clear();
    }
}
void numberOfOnes()
{
    int x,ones=0;
    cin>>x;
    for(int i=0; (1LL<<i)<=x; i++)
    {
        if(x&(1<<i))
            ones++;
    }
    bitset<16>b1(x);
    cout<<b1<<endl;
    cout<<ones<<endl;
}
int main()
{
    //###### ---checking number of ones in x[0,10^9)---- ########
    //numberOfOnes();
    //######--- given Some numbers,n(n<=20) if they make a sum ,S---####
    //#########------------my naive approach---------------################
    //naive();//2^n*log(n)

    //################----------from blog-----------########################
    int n,S;
    int cnt = 0;//counts how many times sum is equal to S
    cin>>n>>S;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<(1<<n); i++)//2^n
    {
        int sum=0;
        //cout<<i<<endl;
        for(int j=0; j<n ; j++)//n
        {
            if(i&(1<<j)) sum += a[j];
        }
        if(sum == S) cnt ++;
        //cout<<sum<<endl;
    }
    cout<<cnt<<endl;
    return 0;
}
