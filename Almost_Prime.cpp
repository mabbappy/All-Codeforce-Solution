/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:24 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, b[3005] = {0}, s = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    b[1] = 1;
    cin >> n;
    for (int i = 2; i <= n; i++)
        if (b[i] == 0)
        {
            for (int j = 2; j * i <= n; j++)
                b[i * j]++;
        }
    for (int i = 1; i <= n; i++)
        if (b[i] == 2)
            s++;
    cout << s;
    return 0;
}