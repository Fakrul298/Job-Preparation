//acc
#include<bits/stdc++.h>
using namespace std;
#define OUT printf
#define IN scanf
#define INd(a) scanf("%d",&a);
#define INd2(a,b) scanf("%d %d",&a,&b);
#define INd3(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define OUTdn(d) printf("%d\n",d);
#define OUTd(d) printf("%d ",d);

#define i64 long long int//%lld
#define INlld(a) scanf("%lld",&a);
#define INlld2(a,b) scanf("%lld %lld",&a,&b);
#define INlld3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);
#define OUTlldn(d) printf("%lld\n",d);
#define OUTlld(d) printf("%lld ",d);

#define ui64 unsigned long long int//%llu
#define INllu(a) scanf("%llu",&a);
#define INllu2(a,b) scanf("%llu %llu",&a,&b);
#define INllu3(a,b,c) scanf("%llu %llu %llu",&a,&b,&c);
#define OUTllun(d) printf("%llu\n",d);
#define OUTllu(d) printf("%llu ",d);
#define FN(i,s,e,d) for(int i=s; i<e; i+=d)
#define FNE(i,s,e,d) for(int i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return
#define PB push_back
template<typename T>T power(T n,T p)
{
    T ans = 1;
    FNE(i,1,p,1) ans *= n;
    RT ans;
}
int main()
{
    int t;
    INd(t);
    FNE(c,1,t,1)
    {
        string s1,s2;
        cin>>s1>>s2;
        vector<bitset<8>>a1;
        string ts = "";
        int l1 = s1.size(), l2 = s2.size();
        for(int i=0; s1[i] ; i++)
        {
            if(s1[i] == '.' || i == l1-1)
            {
                if(i == l1-1)
                    ts += s1[i];
                //cout<<ts<<endl;
                int x = 0,p=ts.size()-1;
                for(int j=0; ts[j] ; j++)
                {
                    x += ((ts[j]-'0')*power(10,p));
                    p--;
                }
                a1.PB(x);
                ts="";
            }
            else
                ts += s1[i];
        }
        ts = "";
        int chk=0, f=0;
        for(int i=0; s2[i] ; i++)
        {
            if(s2[i] == '.' || i == l2-1)
            {
                if(i == l2-1)
                    ts += s2[i];
                //cout<<ts<<" ";
                string s = a1[chk].to_string<char,std::string::traits_type,std::string::allocator_type>();
                //cout<<s<<endl;
                if( ts!= s)
                {
                    f = 1;
                    break;
                }
                chk++;
                ts = "";
            }
            else
                ts += s2[i];
        }
        //cout<<"\n"<<f<<endl;
        if(f == 1)
            OUT("Case %d: No\n",c);
        else
            OUT("Case %d: Yes\n",c);
    }
    RT 0;
}


