#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        cout << (n - y) / x * x + y << endl;
    }
}