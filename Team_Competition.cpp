#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long a, b;
        cin >> a >> b;
        cout << min(a, min(b, (a + b) / 4)) << endl;
    }
}