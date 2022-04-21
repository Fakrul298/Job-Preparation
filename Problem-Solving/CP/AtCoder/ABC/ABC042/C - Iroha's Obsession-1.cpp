//acc
#include<bits/stdc++.h>
using namespace std;
int d[10];
void canPay(int n,int k)
{
    int dig;
    int fee = n;
    vector<int>digits;
    //cout<<"digits : ";
    while(n)
    {
        dig = n%10;
        //cout<<dig<<" ";
        digits.push_back(dig);
        n/=10;
    }
    //cout<<endl;
    int ds = digits.size(), milse = 0;
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<ds; j++)
        {
            if(d[i] == digits[j])
            {
                //cout<<digits[j]<<" milse\n";
                milse = 1;
            }
        }
    }
    if(milse == 1)
    {
        fee++;
        //cout<<fee<<endl;
        canPay(fee,k);
    }
    if(milse == 0) cout<<fee<<"\n";
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0; i<k; i++) cin>>d[i];
    canPay(n,k);
    return 0;
}
