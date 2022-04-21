//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3], b[3][3], c[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            b[i][j] = 1;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j] %2 == 1)
            {
                if(b[i][j] == 0) b[i][j] = 1;
                else b[i][j] = 0;

                if(b[i-1][j] == 0)
                {
                    if(i-1>=0)
                        b[i-1][j] = 1;
                }
                else
                {
                    if(i-1>=0)
                         b[i-1][j] = 0;
                }




                if(b[i][j-1] == 0)
                {
                    if(j-1>=0) b[i][j-1] = 1;
                }

                else
                {
                    if(j-1>=0) b[i][j-1] = 0;
                }




                if(b[i][j+1] == 0)
                {
                    if(j+1<3) b[i][j+1] = 1;
                }
                else
                {
                    if(j+1<3) b[i][j+1] = 0;
                }



                if(b[i+1][j] == 0)
                {
                    if(i+1<3) b[i+1][j] = 1;
                }

                else
                {
                    if(i+1<3) b[i+1][j] = 0;
                }
            }


        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
