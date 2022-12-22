/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:30 Nov,22
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
        int a, b, c;
        cin >> a >> b >> c;
        cout << max(a, max(b, c) + 1) - a << " " << max(b, max(a, c) + 1) - b << " " << max(c, max(a, b) + 1) - c << endl;
    }
    return 0;
}