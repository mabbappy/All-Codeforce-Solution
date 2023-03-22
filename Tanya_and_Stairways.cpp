/**
 *Bismillah Hir Rahmanir Rahim
 *Rahman Zahagir Vorosa!
 *author:mabbappy
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
    int ar[n + 2];
    vector<int> v;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((ar[i + 1] - ar[i]) != 1)
        {
            cnt++;
            v.push_back(ar[i]);
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}