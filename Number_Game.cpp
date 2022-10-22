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
        int a[105];

        for (int i = 1; i <= n; i++)
        {

            cin >> a[i];
        }

        sort(a + 1, a + 1 + n);
        for (int i = n; i >= 0; i--)
        {

            int cnt = 1;

            for (int t = i; t <= n; t++)
            {

                if (a[t] - cnt <= 0)
                {
                    cnt++;
                }
            }

            if (cnt > i)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}