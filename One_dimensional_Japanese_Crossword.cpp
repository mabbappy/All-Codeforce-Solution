/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:23 Nov,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, cnt = 0, sum = 0, k = 0;
    string s;
    cin >> n;
    int a[n];
    cin >> s;
    for (int i = 0; i < n; i++)
        if (s[i] == 'B')
        {
            sum++;
            if (s[i + 1] == 'W' || s[i + 1] == '\0')
                cnt++, a[k++] = sum, sum = 0;
        }
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
        cout << a[i] << ' ';
}