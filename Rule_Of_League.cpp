/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:26 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k, a;
        cin >> n >> k >> a;
        if (k > a)
            swap(k, a);
        if (k != 0 || a == 0 || (n - 1) % a != 0)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < n - 1; ++i)
            cout << 2 + i / a * a << ' ';
        cout << endl;
    }
    return 0;
}