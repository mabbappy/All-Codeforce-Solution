#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    // Bismilla Hir Rahmanir Rahim
    // Assalatu Assalamualika Ya Rasool-Allah!
    // Rahman Zahagir Vorosa!
    // mabbappy
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << ' ' << n / 2 - 1 << " 1" << endl;
        }
        else
        {
            if (n % 4 == 1)
                cout << n / 2 + 1 << ' ' << n / 2 - 1 << ' ' << 1 << endl;
            else
                cout << n / 2 + 2 << ' ' << n / 2 - 2 << ' ' << 1 << endl;
        }
    }
    return 0;
}