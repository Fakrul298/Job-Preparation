//acc
#include<bits/stdc++.h>
using namespace std;
#define MP make_pair
#define PB push_back
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    sort(b,b+n);

    int leftDif = 0,rightDif = n-1, lg = 0, rg = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            leftDif = i;
            lg = 1;
            break;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        if(a[i] != b[i])
        {
            rightDif = i;
            rg = 1;
            break;
        }
    }

    if(lg == 0 && rg == 0)
    {
        printf("yes\n");
        printf("1 1\n");
        return 0;
    }

    //printf("left : %d || right: %d\n",leftDif, rightDif);

    vector<int>reverIt;
    for(int i=leftDif; i<=rightDif; i++)
    {
        reverIt.PB(a[i]);
    }
    reverse(reverIt.begin(), reverIt.end());

    int revVecSize = reverIt.size(), k = 0;
    /*cout<<"reverseIt vector: ";
    for(int i=0; i<revVecSize; i++)
        cout<<reverIt[i]<<" ";
    cout<<endl;*/

    bool matchAfterReverse = true;

    for(int i= leftDif; i<=rightDif; i++)
    {
        if(b[i] != reverIt[k])
        {
            matchAfterReverse = false;
            break;
        }
        k++;
    }

    if(k == revVecSize && matchAfterReverse == true)
    {
        printf("yes\n");
        printf("%d %d\n",leftDif+1,rightDif+1);
    }
    else
        printf("no\n");


    return 0;
}
