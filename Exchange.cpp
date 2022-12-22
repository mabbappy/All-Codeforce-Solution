/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:27 Nov,22
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
        int n, a, b;
        cin >> n >> a >> b;
        if (a > b)
        {
            cout << 1 << endl;
        }
        else
            cout << (n + a - 1) / a << endl;
    }
}