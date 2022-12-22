/**
 *Bismillah Hir Rahmanir Rahim!
 *Rahman ZAHAGIR Vorosa!
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
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (((b - a > 0) == (d - c > 0)) and ((c - a > 0) == (d - b > 0)))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}