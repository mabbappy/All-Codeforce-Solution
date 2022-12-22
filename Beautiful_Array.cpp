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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        if (b * k > s || s > b * k + n * (k - 1))
        {
            cout << "-1" << endl;
            continue;
        }
        s = s - b * k;
        for (ll i = 1; i < n; i++)
        {
            cout << min(s, k - 1) << " ";
            s = s - min(s, k - 1);
        }
        cout << s + b * k << endl;
    }
}