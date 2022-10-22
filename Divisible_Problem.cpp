#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    int a, b;
    int x, y;
    cin >> tt;
    while (tt--)
    {
        cin >> a >> b;
        if (a > b)
        {
            if (a % b == 0)
            {
                cout << "0" << endl;
            }
            else
            {
                x = a / b;
                y = x + 1;
                cout << (b * y - a) << endl;
            }
        }
        else
        {
            cout << b - a << endl;
        }
    }
}