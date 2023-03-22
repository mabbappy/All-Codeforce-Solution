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
        ll ar[n + 5];
        ll sum = 1;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        for (ll i = 0; i < n; i++)
        {
            sum *= ar[i];
        }
        cout << (2022 * (sum + (n - 1))) << endl;
    }
}
int main()
{
    Bappy21();
    return 0;
}