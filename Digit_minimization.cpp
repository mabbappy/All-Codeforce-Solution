#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int tt;
    int i;
    cin >> tt;
    while (tt--)
    {
        cin >> s;
        int x = s.size();
        if (x == 2)
        {
            cout << s[1] << endl;
        }
        char min = s[0];
        if (x > 2)
        {
            for (i = 1; i < x; i++)
            {
                if (s[i] < min)
                {
                    min = s[i];
                }
            }
            cout << min << endl;
        }
    }
}