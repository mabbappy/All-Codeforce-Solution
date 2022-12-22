#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (a == n and b == n)
        {
            cout << "Yes" << endl;
            continue;
        }
        if (a + b <= n - 2)
        {
            cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
    }
}