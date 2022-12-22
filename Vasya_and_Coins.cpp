/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:15 Dec,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
        {
            cout << 1 << endl;
        }
        else
            cout << (a + b * 2) + 1 << endl;
    }
}