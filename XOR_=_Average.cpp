/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:25 Nov,22
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
        if (n % 2 != 0)
        {
            for (int i = 1; i <= n; i++)
                cout << n << " ";
        }
        else
        {
            cout << "1 3 ";
            for (int i = 1; i <= n - 2; i++)
                cout << "2 ";
        }
        cout << endl;
    }
}