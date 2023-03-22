/**
 *Bismillah Hir Rahmanir Rahim!
 *Rahman ZAHAGIR Vorosa!
 *author:mabbappy
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n, y, z;
        cin >> n;
        cout << (((((337 * n) % a) * (4 * n - 1)) % a) * (n + 1)) % a << endl;
    }
    return 0;
}