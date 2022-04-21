//triangle r 3 ta point dewa ache area ber koro
#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define degree (180/pi)
#define radian (1/degree)
double distance(int a1,int b1,int a2,int b2)
{
    return sqrt(pow(fabs(a1-a2),2)+pow(fabs(b1-b2),2));
}
int main()
{
    double x1,y1,x2,y2,x3,y3,a,b,c,s,area;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a=distance(x1,y1,x2,y2);
    b=distance(x2,y2,x3,y3);
    c=distance(x1,y1,x3,y3);
    cout<<a<<" "<<b<<" "<<c<<endl;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<area<<endl;
    return 0;
}