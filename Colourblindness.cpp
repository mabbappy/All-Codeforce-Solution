#include <bits/stdc++.h>
using namespace std;
void Bappy21()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a;
        cin >> a;
        string s, s1;
        cin >> s >> s1;
        int c = 0, d = 0;
        for (int i = 0; i < a; i++)
        {
            if ((s[i] == 'G' && s1[i] == 'B') || (s[i] == 'B' && s1[i] == 'G'))
            {
                c = 0;
                continue;
            }
            else if ((s[i] == 'G' && s1[i] == 'G') || s[i] == 'B' && s1[i] == 'B')
            {
                c = 0;
                continue;
            }
            else if (s[i] == 'R' && s1[i] == 'R')
            {
                c = 0;
                continue;
            }
            else
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    Bappy21();
}