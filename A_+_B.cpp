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
        string s;
        cin >> s;
        int sum = 0, x = s.size();
        sum = s[0] - '0' + s[2] - '0';
        cout << sum << endl;
    }
}