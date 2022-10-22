#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    int x;
    while (tt--)
    {
        cin >> x;
        // int c = 0;
        for (int i = 1; i <= x; i++)
        {
            if (i % 10 == 3 || i % 3 == 0)
            {
                x++;
            }
        }
        cout << x << endl;
    }
}