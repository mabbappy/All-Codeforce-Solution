/*
Bismillahir Rahmanir Rahim
Assalamualaikum
Md Abdul Bashed Bappy
CSE,Mymensingh Engineering College
Email:muhammadbappy205013@gmail.com
*/

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long ll;
int main()
{
    optimize();
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> ps(n + 1, 0);
        for (int i = n - k + 1; i <= n; i++)
            cin >> ps[i];
        vector<ll> a(n + 1);
        if (n == 1 or k == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        for (int i = n; i >= n - k + 2; i--)
            a[i] = ps[i] - ps[i - 1];
        bool flag = true;
        for (int i = n - k + 2; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = n - k + 1; i > 1; i--)
        {
            a[i] = a[i + 1];
            ps[i - 1] = ps[i] - a[i];
        }
        a[1] = ps[1];
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}