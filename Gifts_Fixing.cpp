#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, i, count = 0;
        cin >> n;
        int a[n], b[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m1 = a[0];
        for (i = 1; i < n; i++)
        {
            if (a[i] < m1)
                m1 = a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int m2 = b[0];
        for (i = 1; i < n; i++)
        {
            if (b[i] < m2)
                m2 = b[i];
        }
        int a1, b1;
        for (i = 0; i < n; i++)
        {
            a1 = a[i] - m1;
            b1 = b[i] - m2;
            count += max(a1, b1);
        }
        cout << count << endl;
    }
}
