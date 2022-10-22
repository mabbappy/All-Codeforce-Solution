#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = s.size();
    for (int i = 0; i < x; i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B' && i + 2 < x)
        {
            i = i + 2;
            cout << " ";
            continue;
        }
        else
        {
            cout << s[i];
        }
    }
}