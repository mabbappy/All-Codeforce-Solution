#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e, sum = 0;
    cin >> a >> b >> c >> d >> e;
    for (int i = 1; i <= e; i++)
    {
        if (i % a == 0 || i % b == 0 || i % d == 0 || i % c == 0)
        {
            sum++;
        }
    }
    cout << sum;
}