/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:27 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int a = 1, b = n - 1;
        // cout << 1 << ' ' << n - 1 << endl;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                a = n / i;
                b = n - a;
                break;
            }
        }
        cout << a << ' ' << b << endl;
    }
}