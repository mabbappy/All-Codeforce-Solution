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
        int G = 0;
        int ar[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            G = __gcd(G, ar[i]);
        }
        G = (*max_element(ar, ar + n)) / G;
        cout << G << endl;
    }
}