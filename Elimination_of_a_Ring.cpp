/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:25 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt, n;
    cin >> tt;
    while (tt--)
    {
        int x;
        set<int> s;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            s.insert(x);
        }
        if (s.size() == 2)
            cout << n / 2 + 1 << endl;
        else
            cout << n << endl;
    }
    return 0;
}