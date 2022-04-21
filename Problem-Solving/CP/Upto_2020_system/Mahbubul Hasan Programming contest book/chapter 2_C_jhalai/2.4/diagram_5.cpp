#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, range, j;
    cin >> n;
    range = (2 * n) - 1;
    for (int i = 1; i <= range; i++)
    {
        if (i < n)
        {
            for (j = 1; j <= range; j++)
            {
                int z1 = n - (i - 1);
                int z2 = n + (i - 1);
                if (j >= z1 && j <= z2)
                    cout << "*";
                else
                    cout << ".";
            }
        }
        else
        {
            for (j = 1; j <= range; j++)
            {
                if (j >= i - n + 1 && j <= (range - i) + n)
                {
                    cout << "*";
                }
                else
                    cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}