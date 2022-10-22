#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long a, b;
        cin >> a >> b;
        int ar[a];
        for (int i = 0; i < a; i++)
        {
            cin >> ar[i];
        }
        long long c = 0;
        long long x;
        for (int i = 0; i < a; i++)
        {
            x = (ar[i] | b);
            if (x > c)
            {
                c = x;
            }
        }
        cout << c << endl;
    }
}