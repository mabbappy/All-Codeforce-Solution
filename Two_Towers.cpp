/**
 *Bismillah Hir Rahmanir Rahim
 *Rahman Zahagir Vorosa!
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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        string s, s1, s2;
        cin >> s >> s1;
        reverse(s1.begin(), s1.end());
        s2 = s + s1;
        int cnt = 0;
        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] == s2[i + 1])
            {
                cnt++;
            }
        }
        if (cnt <= 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}