/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:12 Dec,22
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
        string s;
        cin >> s;
        int x = s.size();
        int y = s[0] - '0';
        cout << 9 * (x - 1) + y << endl;
    }
}