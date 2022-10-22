#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a;
        int x, y;
        cin >> a;
        if (a % 4 == 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i <= a / 2; i++)
            {
                cout << i * 2 << " ";
            }
            for (int i = 1; i < a / 2; i++)
            {
                cout << i * 2 - 1 << " ";
            }
            cout << (a / 2) * 3 - 1 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}