#include<bits/stdc++.h>
using namespace std;
#define mx 10001
int a[mx];
int tree[3*mx];
void ini(int node,int s,int e)
{
    if(s==e)
    {
        tree[node]=a[s];
       // cout<<tree[node]<<" "<<s<<" "<<e<<endl;
        return ;
    }
    int left = 2*node;
    int right = (2*node)+1;
    int middle =  (s+e)/2;
    ini(left,s,middle);
    ini(right,middle+1,e);
    tree[node]=tree[left]+tree[right];
    //cout<<"After left right >> "<<tree[node]<<" "<<s<<" "<<e<<endl;
}
int query(int node,int s,int e,int i,int j)
{
    if(e<i || j<s) return 0;
    else if(s>=i && e<=j)
    {
        return tree[node];
    }
     int left = 2*node;
    int right = (2*node)+1;
    int middle =  (s+e)/2;
    int lv = query(left,s,middle,i,j);
    int rv = query(right,middle+1,e,i,j);
    return lv+rv;
}
void update(int node,int s,int e,int i,int val)
{
    if(e<i || i<s) return ;
    else if(s>=i && e<=i)
    {
        tree[node]=val;
        return ;
    }
     int left = 2*node;
    int right = (2*node)+1;
    int middle =  (s+e)/2;
    update(left,s,middle,i,val);
    update(right,middle+1,e,i,val);
    tree[node]=tree[left]+tree[right];

}
int main()
{
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++) cin>>a[i];
    //for(int i=1 ; i<=n ; i++) cout<<a[i]<<" ";
    //cout<<endl;
    ini(1,1,n);
   // for(int i=1 ; i<=13 ; i++) cout<<tree[i]<<" ";
   while(1)
   {
       cout<<"1.query\n2.update\n3.exit\n";
       int option;
       cin>>option;
       if(option==1)
       {
           int x,y;
           cout<<"Enter the lower and upper limit : ";cin>>x>>y;
           cout<<query(1,1,n,x,y)<<endl;
       }
       else if(option==2)
       {
           cout<<"Enter the index and value : ";
           int in,x;
           cin>>in>>x;
           update(1,1,n,in,x);
       }
       else break;
   }
    return 0;
}

