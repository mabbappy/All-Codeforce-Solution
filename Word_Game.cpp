#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        map<string, int> m;
        string s[5][1005];
        cin >> n;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> s[i][j];
                m[s[i][j]]++;
            }
        }
        // int c = 0;
        for (int i = 1; i <= 3; i++)
        {
            int c = 0;
            for (int j = 1; j <= n; j++)
            {
                if (m[s[i][j]] == 1)
                {
                    c += 3;
                }
                else if (m[s[i][j]] == 2)
                {
                    c += 1;
                }
            }
            cout << c << " ";
        }
        puts(" ");
    }
}