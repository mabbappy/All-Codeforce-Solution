#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        long long a = 0, b = 0;
        int n;
        cin >> n;
        while (n--)
        {
            long long x, y;
            cin >> x >> y;
            a += min(x, y);
            b = max(max(x, y), b);
        }
        cout << 2 * a + 2 * b << endl;
    }
}