#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if (a + c >= x and b + c >= y and a + b + c >= x + y)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}