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
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' or s[i] == '0')
            {
                v.push_back('-');
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            cout << v[i];
        }
        cout << endl;
    }
}