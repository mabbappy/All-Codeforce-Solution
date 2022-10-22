#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c = 0;
    double a, sum = 0;
    cin >> t;
    cout << fixed;
    cout << setprecision(12);
    while (t--)
    {
        cin >> a;
        sum += a;
        c++;
        // cout << sum << endl;
    }
    // cout << c;
    cout << sum / c;
}