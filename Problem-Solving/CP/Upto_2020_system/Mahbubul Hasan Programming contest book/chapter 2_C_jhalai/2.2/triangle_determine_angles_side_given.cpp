//All the angles of a triangle where sides are given
#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define degree (180/pi)
int main()
{
    double a,b,c,A,B,C;
    cin>>a>>b>>c;
    A=acos((pow(b,2)+(pow(c,2))-(pow(a,2)))/(2*b*c))*degree;
    B=acos((pow(a,2)+(pow(c,2))-(pow(b,2)))/(2*a*c))*degree;
    C=acos((pow(a,2)+(pow(b,2))-(pow(c,2)))/(2*b*a))*degree;
    cout<<"A : "<<A<<" B : "<<B<<" C : "<<C<<endl;
    return 0;
}