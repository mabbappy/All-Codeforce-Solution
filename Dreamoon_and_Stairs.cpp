/**
 *Bismillah Hir Rahmanir Rahim
 *Rahman Zahagir Vorosa!
 *author:mabbappy
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    if (n < m)
    {
        cout << -1 << endl;
    }
    else
    {
        int x = (n - 1 + (2 * m)) / 2 / m * m;
        cout << x << endl;
    }
}
