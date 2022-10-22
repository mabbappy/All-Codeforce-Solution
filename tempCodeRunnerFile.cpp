#include <bits/stdc++.h>
using namespace std;
int matn()
{
    string s;
    int tt;
    cin >> tt;
    while (tt--)
    {
        cin >> s;
        int i;
        int x = s.size();
        if (x == 2)
        {
            for (int i = 0, j = 0; i < j; i++, j--)
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = s[i];
            }
            s[i] = s[i] / 10;
        }
        cout << s[i];
    }
}