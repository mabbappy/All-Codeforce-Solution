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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                x += 1;
            }
            else if (s[i] == 'D')
            {
                x -= 1;
            }
            else if (s[i] == 'R')
            {
                y += 1;
            }
            else if (s[i] == 'L')
            {
                y -= 1;
            }
            if (x == 1 and y == 1)
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