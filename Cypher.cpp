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
        int a[200];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            int l;
            string s;
            cin >> l >> s;
            for (int j = 0; j < l; j++)
            {
                if (s[j] == 'D')
                    a[i] = (a[i] + 1) % 10;
                else
                    a[i] = (a[i] + 9) % 10;
            }
        }
        for (int i = 1; i <= n; i++)
            cout << a[i] << " \n"[i == n];
    }
}