#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, c = 0;
        cin >> n;
        string s, s1;
        cin >> s;
        // s1 = s;
        // sort(s.begin(), s.end());
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                c++;
            }
        }
        // cout << c << endl;
        if (s[0] == '0')
            c = max(c - 1, 0);
        cout << c << endl;
    }
}