/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:28 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        ll an = n;
        // ll flag = 0;
        while (an > 0)
        {
            ll x = an % 10;
            an /= 10;
            if (x > 0 and n % x != 0)
            {
                n++;
                an = n;
            }
        }
        cout << n << endl;
    }
    return 0;
}