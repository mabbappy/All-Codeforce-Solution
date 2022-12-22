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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 1;
        for (int i = 1; i < n; i += 3)
        {
            if (s[i] != s[i + 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}