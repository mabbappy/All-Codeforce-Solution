#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll a;
        cin >> a;
        ll x, y, z, m;
        x = a + 2;
        y = a + 3;
        z = a + 5;
        m = a + 7;
        if (x % 2 == 0)
        {
            cout << "2" << endl;
        }
        else if (y % 2 == 0)
        {
            cout << "3" << endl;
        }
        else if (z % 2 == 0)
        {
            cout << "5" << endl;
        }
        else if (m % 2 == 0)
        {
            cout << "7" << endl;
        }
    }
}