//acc
#include<bits/stdc++.h>
using namespace std;
#define MP make_pair
#define PB push_back

int areaOfTriangle(int a1, int b1, int a2, int b2, int a3, int b3)
{
    double area = 0.5*((a1*b2) + (a2*b3) + (a3*b1) - (a2*b1) - (a3*b2) - (a1*b3));
    return fabs(area) !=0;
}

int main()
{
    int n;
    cin>>n;
    long long int points[n][2];

    for(int i=0; i<n; i++)
    {
        cin>>points[i][0]>>points[i][1];
    }

    long long int area;
    int positiveAreas = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                area = areaOfTriangle(points[i][0], points[i][1],points[j][0],points[j][1],points[k][0],points[k][1]);

                //printf("Area for (%d,%d), (%d,%d), (%d,%d) : %d\n",points[i][0], points[i][1], points[j][0], points[j][1], points[k][0], points[k][1],area);

                if(area > 0) positiveAreas++;

            }
        }
    }

    cout<<positiveAreas<<"\n";


    return 0;
}
