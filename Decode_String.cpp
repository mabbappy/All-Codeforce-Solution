#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int x;
        string s;
        vector<char> v;
        cin >> x >> s;
        for (int i = x - 1; i >= 0;)
        {

            if (s[i] == '0')
            {
                int ch = ((s[i - 2] - '0') * 10) + (s[i - 1] - '0');
                char c = 'a' + (ch - 1);
                v.push_back(c);
                i -= 3;
            }
            else
            {
                int ch = (s[i] - '0');
                char c = 'a' + (ch - 1);
                v.push_back(c);
                i--;
            }
        }
        for (int i = v.size() - 1; i >= 0; i--)
            cout << v[i];
        cout << '\n';
    }
}