#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll mx = max({a, b, c});
        if (mx == 0)
        {
            cout << mx << ' ' << mx << " " << mx << endl;
        }
        else if (mx == a)
        {
            cout << "0 " << (mx + 1) - b << " " << (mx + 1) - c << endl;
        }
        else if (mx == b)
        {
            cout << (mx + 1) - a << " 0 "
                 << (mx + 1) - c << endl;
        }
        else
        {
            cout << (mx + 1) - a << " " << (mx + 1) - b
                 << " 0" << endl;
        }
    }
}