#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        if (k == 0)
            cout << "YES" << endl;
        else
        {
            int cnt = 0;
            for (int i = 0; i < (n - 1) / 2; ++i)
            {
                if (s[i] == s[n - 1 - i])
                    ++cnt;
                else
                    break;
            }
            if (cnt >= k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}