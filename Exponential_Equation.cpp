/**
 *Bismillah Hir Rahmanir Rahim
 *Rahman Zahagir Vorosa!
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
        if (n % 2 == 0)
        {
            cout << "1 " << n / 2 << endl;
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}