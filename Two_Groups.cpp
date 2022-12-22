#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (ll i = 0; i < n; i++)
        {
            sum += ar[i];
        }
        cout << abs(sum) << endl;
    }
}