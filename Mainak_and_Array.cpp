#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Bappy21()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        int ar[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        if (n == 1)
        {
            cout << "0" << endl;
            continue;
        }
        int ans = ar[n - 1] - ar[0];
        for (int i = 1; i <= n - 1; i++)
        {
            ans = max(ans, ar[i] - ar[0]);
        }
        for (int i = 0; i <= n - 2; i++)
        {
            ans = max(ans, ar[n - 1] - ar[i]);
        }
        for (int i = 1; i <= n - 1; i++)
        {
            ans = max(ans, ar[i - 1] - ar[i]);
        }
        cout << ans << endl;
    }
}
int main()
{
    Bappy21();
}