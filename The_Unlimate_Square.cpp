#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll a;
        cin >> a;
        ll x;
        x = a / 2;
        if (a % 2 != 0)
        {
            cout << x + 1 << endl;
        }
        else
            cout << x << endl;
    }
}