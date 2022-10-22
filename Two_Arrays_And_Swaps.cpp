#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b;
        cin >> a >> b;
        int ar[a], ar1[a];
        for (int i = 0; i < a; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < a; i++)
        {
            cin >> ar1[i];
        }
        sort(ar, ar + a);
        sort(ar1, ar1 + a);
        for (int i = 0; i < b; i++)
        {
            if (ar[i] < ar1[a - i - 1])
            {
                ar[i] = ar1[a - i - 1];
            }
        }
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            sum += ar[i];
        }
        cout << sum << endl;
    }
}