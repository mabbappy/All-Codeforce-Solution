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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int ar[n + 2];
        int p_one = 0, m_one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 1)
            {
                p_one++;
            }
            else
                m_one++;
        }
        if (p_one > m_one)
        {
            cout << -1 * p_one << endl;
        }
        else if (m_one > p_one)
        {
            cout << m_one << endl;
        }
        else if (p_one == m_one)
        {
            cout << p_one + m_one << endl;
        }
    }
}