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
#define mx 100001
int arr[mx];
int tree[4*mx];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        RT;
    }
    int left = 2*node;
    int right = (2*node) + 1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = tree[left] + tree[right];
}
void update(int node,int b,int e,int i,int newVal)
{
    if(i<b || i>e)
        RT ;
    if(i>=b && i>=e)
    {
        tree[node] = newVal;
        RT ;
    }
    int left = 2*node;
    int right = (2*node) + 1;
    int mid = (b+e)/2;
    update(left, b, mid, i, newVal);
    update(right, mid+1, e, i, newVal);
    tree[node] = tree[left]+tree[right];
}
int query(int node, int b, int e, int i, int j)
{
    if( i>e || j<b )
        RT 0;
    if(i<=b && j>=e )
        RT tree[node];
    int left = 2*node;
    int right = (2*node) + 1;
    int mid = (b+e)/2;
    int p1 = query(left, b, mid, i, j);
    int p2 = query(right, mid+1, e, i, j);
    RT p1+p2;
}
int main()
{
    int n;
    IN("%d",&n);
    FN(i,1,n+1) IN("%d",&arr[i]);
    init(1,1,n);
    FN(i,1,(3*n)+1) OUT("%d ",tree[i]);

    while(1)
    {
        int in,nv;
        OUT("\nInput index to update : ");
        IN("%d",&in);
        OUT("\nInput new value to update : ");
        IN("%d",&nv);
        update(1,1,n,in,nv);
        OUT("\nWant sum of which range?[i-j] : " );
        int s,e;
        IN("%d%d",&s, &e);
        cout<<query(1,1,n,s,e);
        OUT("\n\n");
    }
    RT 0;
}
