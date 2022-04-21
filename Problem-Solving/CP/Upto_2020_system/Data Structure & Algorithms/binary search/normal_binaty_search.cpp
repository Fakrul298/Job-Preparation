#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define ui64 unsigned long long int
#define FN(i,s,e) for(int i=s; i<e; i++)//loop not equal to end
#define FNE(i,s,e) for(int i=s; i<=e; i++)//loop equal to end
#define RF(i,s,e) for(int i=e; i>=e; i--)//reverse loop
#define IN scanf
#define OUT printf
#define SQ(a) (a)*(a)
#define RT return
#define PB push_back
#define MP make_pair
#define EPS 0.000000001//10^(-9)
#define BIG 10000007
//for geometrical
#define pi acos(-1.00)
#define rad pi/180.00
#define deg 180.00/pi
void intIN(int &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
    {
        number = number *10 + c - 48;
    }
    if (negative)
        number *= -1;
}
int binarySearch(int a[],int l, int r, int x)
{
    if(l<=r)
    {
        int mid = (l+r)/2;
        if(a[mid] == x)
            RT mid;
        else if(a[mid]<x)
            RT binarySearch(a,mid+1,r,x);
        else
            RT binarySearch(a,l,mid-1,x);
    }
    RT -1;
}
int main()
{
    int n;
    intIN(n);
    int arr[n];
    FN(i,0,n)
        intIN(arr[i]);
    sort(arr,arr+n);
    cout<<"elements are : "<<endl;
    FN(i,0,n)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    printf("Search for value : ");
    int val;
    intIN(val);
    /*int x = binarySearch(arr,0,n-1,val);//its the manual binary search function
    if(x!=-1)
    {
        cout<<val<<" is found at "<<x<<" th index.";
    }
    else
        cout<<"Not found\n";*/
    vector<int>v(arr,arr+n);
    int x = binary_search(v.begin(),v.end(),val);//this is the by default binary_search function
    if(x)
       cout<<val<<" is found at "<<x<<" th position\n";
    else
        cout<<val<<" is not found\n";
    cout<<"Find the lower bound of  : ";
    int fl;
    intIN(fl);
    auto l = lower_bound(v.begin(),v.end(),fl);
    cout<<(l-v.begin())<<" is the lower bound\n";
    return 0;
}


