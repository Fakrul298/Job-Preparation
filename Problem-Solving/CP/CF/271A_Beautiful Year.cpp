//acc
#include<bits/stdc++.h>
using namespace std;
bool distinct(int year)
{
    int freq[10], rem;
    for(int i=0; i<10; i++) freq[i] = 0;
    //cout<<"year freq: \n";
    while(year)
    {
        rem = year%10;
        year/=10;
        //cout<<year<<" "<<rem<<endl;
        freq[rem]++;
    }
    //cout<<endl;
    /*for(int i=0; i<10; i++)
    {
        cout<<freq[i]<<" ";
    }
    cout<<endl;*/
    bool dist = true;
    for(int i=0; i<10; i++)
    {
        if(freq[i] > 1)
        {
            dist = false;
            break;
        }
    }
    return dist;
}
int main()
{
    int y;
    scanf("%d",&y);
    for(int i = y+1; ; i++)
    {
        if(distinct(i) == true)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
