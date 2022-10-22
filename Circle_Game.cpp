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
        int mn = 1e9 + 5, x = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a < mn)
            {
                x = i % 2;
                mn = a;
            }
        }
        if (n % 2 == 1 || x == 1)
            cout << "Mike" << endl;
        else
            cout << "Joe" << endl;
    }
}