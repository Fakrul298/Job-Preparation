//all the sides of a triangle are given determine the area 
#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define degree (180/pi)
#define radian (pi/180)
int main()
{
    double a,b,c,s,area;
    cin>>a>>b>>c;
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<area<<endl;
    return 0;
}