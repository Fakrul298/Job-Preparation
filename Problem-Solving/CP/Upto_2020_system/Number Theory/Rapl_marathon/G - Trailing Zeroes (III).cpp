//not acc
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
#define FNE(i,s,e,d) for(i64 i=s; i<=e; i+=d)
#define RF(i,s,e,d) for(int i=s; i>=e; i-=d)//reverse loop
#define RT return

#define PB push_back
#define MP make_pair
#define VALL(v) v.begin(),v.end()
const double pi=acos(-1.00);
const double rad=pi/180.00;
const double deg=180.00/pi;

#define EPS 0.000000001//10^(-9)
#define BIG 10000000
template<typename T> T gcd(T a, T b){T mn = min(a,b), mx = max(a,b);if(mn == 0) RT mx;if(mx%mn == 0) RT mn;else gcd(mx%mn,mn);}
template<typename T> T lcm(T a,T b){T lcm = (a*b)/gcd(a,b);RT lcm;}
template<typename T> T bigMod(T n, T p, T M) {if(p == 0) RT 1; else{if(p%2 == 0){T x=bigMod(n,p/2,M); RT ((x%M)*(x%M))%M;} else RT ((n%M)*(bigMod(n,p-1,M)%M))%M;}}
template<typename T>T ModInverse(T a,T M){RT bigMod(a,M-2,M);}
template<typename T>T power(T n,T p){T ans = 1; FNE(i,1,p,1) ans *= n; RT ans;}
typedef pair<int,int> pii;
int main()
{
    map<int,int>track;
    int mx = 0;
    i64 f  = 5;
    FNE(i,1000000000,2000000000,5)
    {
        int trailZero = 0;
        FNE(j,1,15,1)
        {
            //cout<<power(5,j)<<" ";
            if(power(f,j)>i) break;
            trailZero += (i/power(f,j));
        }
        //cout<<endl;
        //cout<<i<<" -> "<<trailZero<<endl;
        track.insert({trailZero,i});
        mx = max(mx,trailZero);
    }
    cout<<mx<<endl;
    /*for(auto i:track)
        cout<<i.first<<" "<<i.second<<endl;*/
    RT 0;
}


