//distance between two points in two dimensional plane
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double distance = sqrt(pow(fabs(x1-x2),2)+pow(fabs(y1-y2),2));
    cout<<distance<<endl;
    return 0;
}