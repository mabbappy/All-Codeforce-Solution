
#include <bits/stdc++.h>
using namespace std;
int cnt[4];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    cout << n - max({cnt[1], cnt[2], cnt[3]});
}