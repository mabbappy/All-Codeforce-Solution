#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    int x, a, b;
    int x1 = 0, x2 = 0;
    for (int i = 0; i < tt; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            x1++;
            a = i;
        }
        else
        {
            x2++;
            b = i;
        }
    }
    if (x1 > x2)
    {
        cout << b + 1;
    }
    else
    {
        cout << a + 1;
    }
}