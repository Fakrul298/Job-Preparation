//not acc
#include<bits/stdc++.h>
using namespace std;
#define i64 long long int//lld
#define ui64 unsigned long long int//llu
#define FN(i,s,e) for(int i=s ; i<e ; i++)//normal loop
#define FR(i,s,e) for(int i=s ; i>=e ; i--) //reverse loop
#define IN scanf
#define OUT printf
#define RT return
#define pb push_back
#define mp make_pair
#define EPS 0.000000001//10^(-9)
#define BIG 10000007
//for geometrical
#define pi acos(-1.00)
#define rad pi/180.00
#define deg 180.00/pi
void addingarray(int *p, int *q,int Size)
{
    FN(i,0,Size)
    {
        *q=(*p)+5;
        p++;
        q++;
    }
}
int main()
{
    int n;
    cout<<"How many numbers to enter : ";
    cin>>n;
    int a[n],b[n];
    FN(i, 0, n)
        IN("%d",&a[i]);
    addingarray(&a[0],&b[0],n);
    cout<<"Elements of a[] : "<<endl;
    FN(i,0,n)
        OUT("%d ",a[i]);
    cout<<"\nElements of b[] from a[] after adding 5 to every elements  : "<<endl;
    FN(i,0,n)
        OUT("%d ",b[i]);
    OUT("\n");
    RT 0;
}


