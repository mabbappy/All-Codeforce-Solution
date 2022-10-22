#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n, i = 0;
    cin >> x >> n;
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    while (i < n)
    {
        if (x > a[i][0] && a[i][0] > 0)
        {
            x += a[i][1];
            a[i][0] = 0;
            i = 0;
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] != 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}