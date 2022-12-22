/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:22 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0, cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '#')
        {
            cnt++;
        }
        // else
        //  cnt1++;
        if (cnt >= k)
        {
            cout << "NO" << endl;
            return 0;
        }
        if (s[i] == '.')
        {
            cnt = 0;
        }
    }
    cout << "YES" << endl;
}
