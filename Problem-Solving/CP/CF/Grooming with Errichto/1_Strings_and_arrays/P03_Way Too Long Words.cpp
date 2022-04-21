//wa at test case 2
//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,length,middleNumber;
    scanf("%d ",&q);
    string s;
    char firstLetter, lastLetter;
    while(q--)
    {
        cin>>s;
        length = s.size();
        if(length > 10)
        {
            middleNumber = length - 2;
            firstLetter = s[0];
            lastLetter = s[length - 1];
            printf("%c%d%c\n",firstLetter,middleNumber,lastLetter);

        }
        else
        {
            cout<<s<<"\n";
        }
    }
    return 0;
}
