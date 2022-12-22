#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        int ar[4];
        for (int i = 0; i < 4; ++i)
        {
            cin >> ar[i];
        }
        sort(ar, ar + 3);
        int x = ar[3];
        x -= 2 * ar[2] - ar[1] - ar[0];
        if ((x < 0) or x % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}