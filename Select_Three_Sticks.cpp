#include <bits/stdc++.h>
using namespace std;
const int MX = 1e9;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int ar[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        int ans = MX;
        for (int i = 0; i < n - 2; i++)
        {
            ans = min(ans, ar[i + 2] - ar[i]);
        }
        cout << ans << endl;
    }
}