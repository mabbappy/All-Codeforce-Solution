#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, sum = 0, x = 0, m = 0;
    cin >> a >> b;
    while (a--)
    {
        int c;
        cin >> c;
        if (c <= b)
        {
            x++;
        }
        else
        {
            m += 2;
        }
    }
    sum += x + m;
    cout << sum;
}