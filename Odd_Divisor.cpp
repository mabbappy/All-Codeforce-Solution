#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long x;
        cin >> x;
        while (x % 2 == 0)

            x = x / 2;
        if (x != 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
