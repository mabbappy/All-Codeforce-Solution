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
        string s, s1, result;
        cin >> s;
        s1 = s;
        int n = s.size();
        for (int i = 0; i < n / 2; i++)
        {
            char temp = s[i];
            s[i] = s[n - 1 - i];
            s[n - 1 - i] = temp;
        }
        result = s1 + s;
        cout << result << endl;
    }
}