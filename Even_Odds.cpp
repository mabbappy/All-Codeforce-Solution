#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, n;
    cin >> a >> n;
    if (n <= (a + 1) / 2)
    {
        cout << n * 2 - 1;
    }
    else
    {
        cout << (n - (1 + a) / 2) * 2;
    }
}