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
        int x = s.size();
        cout << 10 * (s[0] - 49) + x * (x + 1) / 2 << endl;
    }
}