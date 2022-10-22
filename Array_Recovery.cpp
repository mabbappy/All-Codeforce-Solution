#include <bits/stdc++.h>
using namespace std;

int a[1000], b[1000];

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        a[1] = b[1];
        for (int i = 2; i <= n; i++)
        {
            if (a[i - 1] >= b[i] && b[i] != 0)
            {
                cout << -1 << endl;
                goto ne;
            }
            a[i] = b[i] + a[i - 1];
        }
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    ne:;
    }

    return 0;
}