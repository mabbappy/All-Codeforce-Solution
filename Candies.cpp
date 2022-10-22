#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long a;
        cin >> a;
        for (int i = 2; i <= 29; i++)
        {
            long long x = pow(2, i) - 1;
            if (a % x == 0)
            {
                cout << a / x << endl;
                break;
            }
        }
    }
}