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
        cin >> x >> s;
        vector<char> v;
        for (int i = x - 1; i >= 0;)
        {
            if (s[i] == '0')
            {
                int m = ((s[i - 2] - '0') * 10 + s[i - 1] - '0');
                char c = 'a' + (m - 1);
                v.push_back(c);
                i -= 3;
            }
            else
            {
                int m = (s[i] - '0');
                char c = 'a' + (m - 1);
                v.push_back(c);
                i--;
            }
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i];
        }
        cout << endl;
    }
}