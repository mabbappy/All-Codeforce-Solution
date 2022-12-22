/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:28 Nov,22
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
        int a, b;
        cin >> a >> b;
        if (a == 1 and b == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 2 * (a + b) - max(a, b) - 2 << endl;
        }
    }
}
