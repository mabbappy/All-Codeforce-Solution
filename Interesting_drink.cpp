#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, m, v;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    sort(x, x + n);
    cin >> q;
    while (q--)
    {
        cin >> m;
        v = 0;
        v = upper_bound(x, x + n, m) - x;
        cout << v << endl;
    }
    return 0;
}