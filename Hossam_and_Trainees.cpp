/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:12 Dec,22
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
        ll ar[n + 5];
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 2; j <= 9; j++)
            {
                if (ar[i] % j == 0)
                {
                    v.push_back(j);
                }
            }
        }
        sort(v.begin(), v.end());
        // int x = v[0];
        int c = 0;
        for (ll i = 1; i < v.size(); i++)
        {
            if (v[i] == v[i - 1])
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}