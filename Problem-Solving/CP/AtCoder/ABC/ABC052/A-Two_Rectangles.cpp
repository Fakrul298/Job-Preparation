/*
A - Two Rectangles
very easy, just find out the area of the rectangle of each
and print the maximum of them
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int area1 = a*b;
    int area2 = c*d;
    printf("%d\n",max(area1,area2));
    return 0;
}

