//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,numbers;
    cin>>s;
    int n = s.size();
    numbers = "";
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1' || s[i] == '2' || s[i] == '3')
            numbers += s[i];
    }

    sort(numbers.begin(), numbers.end());

    int numSize = numbers.size();

    for(int i = 0; i<numSize; i++)
    {
        printf("%c",numbers[i]);
        if(i != numSize-1) printf("+");
        else printf("\n");
    }
    return 0;
}
