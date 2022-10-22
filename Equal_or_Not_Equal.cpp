#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        int c = 0;
        int x = s.size();
        for (int i = 0; i < x; i++)
        {
            if (s[i] == 'N')
            {
                c++;
            }
        }
        if (c == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}