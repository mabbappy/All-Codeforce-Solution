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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int x = 10 - n;
        int k = 1, m = 1;
        for (int i = 1; i <= x; i++)
        {
            k *= i;
        }
        for (int i = 1; i <= x - 2; i++)
        {
            m *= i;
        }
        int l = k / (m * 2);
        if (x == 2)
        {
            cout << "6" << endl;
        }
        else
            cout << l * 6 << endl;
    }
}