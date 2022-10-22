#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1 = "hello";
    cin >> s;
    int d = 0;
    int x = s.size();
    for (int i = 0; i < x; i++)
    {
        if (s[i] == s1[d])
        {
            d++;
        }
    }
    if (d == 5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
