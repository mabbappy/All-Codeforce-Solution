#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Bappy21()
{
    long long tt;
    cin >> tt;
    while (tt--)
    {
        ll n, c, x = 0, j, sum = 0;
        cin >> n >> c;
        ll a[101] = {0};
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
        }
        for (ll i = 0; i < 101; i++)
        {
            if (a[i] != 0 && a[i] <= c)
            {
                sum += a[i];
            }
            else if (a[i] != 0 && a[i] > c)
            {
                sum += c;
            }
        }
        cout << sum << endl;
    }
}
int main()
{
    Bappy21();
    return 0;
}
