#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt, ans;
    int n;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        cout << floor(sqrt(n)) + floor(cbrt(n)) - floor(sqrt(cbrt(n))) << endl;
    }
}
