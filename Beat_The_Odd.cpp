#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    int x;
    cin >> tt;
    while (tt--)
    {
        cin >> x;
        int a, b = 0, c = 0;
        for (int i = 0; i < x; i++)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                c++;
            }
            else
            {
                b++;
            }
        }
        cout << x - max(c, b) << endl;
    }
}