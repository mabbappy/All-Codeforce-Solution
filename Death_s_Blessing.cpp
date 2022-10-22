#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        long long ss = 0;
        int m = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ss += x;
        }
        // cout << ss << endl;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m = max(m, x);
            ss += x;
        }
        // cout << ss << endl;
        ss -= m;
        cout << ss << endl;
    }
}
