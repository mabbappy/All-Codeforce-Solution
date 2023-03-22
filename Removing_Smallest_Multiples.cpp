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
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (s[j - 1] == '1')
                {
                    break;
                }
                if (s[j - 1] == '0')
                {
                    s[j - 1] = '#';
                    ans += i;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}