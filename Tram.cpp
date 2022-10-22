#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, sum = 0, x = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        sum += (b - a);
        if (sum > x)
            x = sum;
    }
    cout << x;
}