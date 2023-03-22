/**
 *Bismillah Hir Rahmanir Rahim
 *Rahman Zahagir Vorosa!
 *author:mabbappy
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Bappy21()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        string s = "codeforces";
        char c;
        cin >> c;
        int flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (c == s[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
int main()
{
    Bappy21();
    return 0;
}