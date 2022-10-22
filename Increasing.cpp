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
        ll ar[n + 2];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        int c = 0;
        for (int i = 1; i < n; i++)
        {
            if (ar[i] == ar[i - 1])
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}
int main()
{
    Bappy21();
    return 0;
}