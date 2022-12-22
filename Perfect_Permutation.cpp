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
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << -1 << endl;
    }
    else if (n == 2)
    {
        cout << 2 << ' ' << 1 << endl;
    }
    else
    {
        cout << 2 << ' ' << 1 << ' ';
        for (int i = n, j = 1; j <= (n - 2); j++, i--)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
}