#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll m, n;
    cin >> m >> n;
    if (n == 1)
    {
        cout << m - 1 << endl;
    }
    else
        cout << m * (n - 1) << endl;
}