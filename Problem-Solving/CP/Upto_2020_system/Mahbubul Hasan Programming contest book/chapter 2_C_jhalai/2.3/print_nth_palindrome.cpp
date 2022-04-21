//determine the nth palindromic number(n<=1000)
#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(int n)
{
    int r, m, c = 0;
    string s = {};

    if (n % 10 == 0)
        return false;
    while (1)
    {
        r = n / 10;
        m = n % 10;
        s += '0' + m;
        if (r == 0)
        {
            break;
        }
        else
        {
            n = r;
        }
    }
    int l = s.size();
    if (l == 1)
        return true;
    int f = 1;
    for (int i = 0; i <= l / 2 - 1; i++)
    {
        if (s[i] != s[l - i - 1])
        {
            f = 0;
            break;
        }
    }
    if (f == 0)
        return false;
    else
        return true;
}
int main()
{
    int n;
    cin >> n;
    int a[1000];
    a[0]=1;
    for (int i = 1; i < n ; i++)
    {
        int x = a[i-1]+1;
        if (is_palindrome(x) == true)
            a[i] = x;
        else
        {
            while (1)
            {
                x++;
                if (is_palindrome(x) == true)
                {
                    a[i] = x;
                    break;
                }
            }
        }
    }
    cout<<a[n-1]<<endl;
    return 0;
}