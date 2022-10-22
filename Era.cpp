#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, mx = 0;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            mx = max(mx, a - i - 1);
        }
        cout << mx << endl;
    }
}