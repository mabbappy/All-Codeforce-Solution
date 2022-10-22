#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        long long a[n + 2];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long res = 0;
        for (int i = 0; i < k; i++)
        {
            long long p = a[i];
            for (int j = i + k; j < n; j += k)
                p = max(p, a[j]);
            res += p;
        }
        cout << res << endl;
    }
}
