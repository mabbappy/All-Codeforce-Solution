#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        ll c = 0, d = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                c++;
            else if (s[i] == '1')
                d++;
        }
        if (c == d)
        {
            cout << c - 1 << endl;
        }
        else
        {
            cout << min(c, d) << endl;
        }
    }
}