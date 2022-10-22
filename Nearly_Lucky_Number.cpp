#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c = 0;
    cin >> s;
    int x = s.size();
    for (int i = 0; i < x; i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            c++;
        }
    }
    if (c == 4 || c == 7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
