/**
 *Bismillah Hir Rahmanir Rahim!
 *Rahman ZAHAGIR Vorosa!
 *author:mabbappy
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        ll x, y;
        x = sqrt(n / 2);
        y = sqrt(n / 4);
        if (((pow(x, 2) * 2) == n) or ((pow(y, 2) * 4) == n))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}