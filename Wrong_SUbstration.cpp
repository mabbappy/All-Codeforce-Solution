#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i;
    cin >> a >> b;
    for (i = 1; i <= b; i++)
    {
        if (a % 10 != 0)
        {
            a--;
        }
        else
        {
            a /= 10;
        }
    }
    cout << a;
}