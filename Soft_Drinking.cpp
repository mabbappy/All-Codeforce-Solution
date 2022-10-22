#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    long long x = min({(k * l) / (nl), (c * d), (p) / (np)}) / n;
    cout << x << endl;
}