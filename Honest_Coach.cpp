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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int c = 10000000;
        for (int i = 0; i < n - 1; i++)
        {
            int z = a[i + 1] - a[i];
            if (z < c)
            {
                c = z;
            }
        }
        cout << c << endl;
    }
}