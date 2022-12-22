/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date: 2 Dec,22
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
        int n, s;
        cin >> n >> s;
        int k = 0;
        if (n % 2 == 0)
        {
            k = n / 2 - 1;
        }
        else
        {
            k = n / 2;
        }
        n -= k;
        cout << s / n << endl;
    }
    return 0;
}