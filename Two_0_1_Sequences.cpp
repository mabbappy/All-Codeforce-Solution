#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        int j = m - 1, h = -1;
        for (int i = n - 1; i >= 0 && j >= 0; i--)
        {
            if (s1[i] == s2[j])
                j--;
            else
                h = j;
        }
        if (j == -1 && h <= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}