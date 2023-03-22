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
        int c = 0;
        int i = 0, j = n - 1;
        while (i < n)
        {
            if ((s[i] == '1' and s[j] == '0') or (s[i] == '0' and s[j] == '1'))
            {
                c += 2;
            }
            else
                break;
            i++;
            j--;
        }
        if (n <= c)
        {
            cout << 0 << endl;
        }
        else
            cout << n - c << endl;
    }
}
int main()
{
    Bappy21();
    return 0;
}