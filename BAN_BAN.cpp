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
        int y = (n + 1) / 2;
        cout << y << endl;
        for (int i = 0; i < y; i++)
        {
            cout << 3 * i + 1 << " " << 3 * (n - i) << endl;
        }
    }
}